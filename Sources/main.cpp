#include <bits/stdc++.h>
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"
#include "controladoras.hpp"
#include "stubs.hpp"

using namespace std;

int main() {

    // ---------------------------------------------------------------------------------
    // Instanciar classes controladoras e stubs.

    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    IServicoAutenticacao *stubServicoAutenticacao = new StubServicoAutenticacao();

    IApresentacaoConta *cntrApresentacaoConta = new CntrApresentacaoConta();
    IServicoConta *stubServicoConta = new StubServicoConta();

    // Ligar instâncias de controladoras aos stubs correspondentes.

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);
    cntrApresentacaoConta->setCntrServicoConta(stubServicoConta);

    bool resultado;
    Codigo codigo;

    // ---------------------------------------------------------------------------------
    // Simular apresentação de tela inicial do sistema.

    cout << endl << "Bem-vindo ao sistema!" << endl;

    while (true) {
        cout << endl << "Escolha uma opcao:" << endl;
        cout << "1. Autenticar" << endl;
        cout << "2. Criar conta" << endl;
        cout << "3. Executar conta" << endl;
        cout << "4. Sair" << endl;
        cout << "Opcao: ";

        int opcao;
        cin >> opcao;

        try {
            switch (opcao) {
                case 1: { // Autenticar
                    resultado = cntrApresentacaoAutenticacao->autenticar(&codigo);

                    if (resultado) {
                        cout << endl << "Autenticacao bem-sucedida!" << endl;
                    } else {
                        cout << endl << "Falha na autenticacao." << endl;
                    }
                    break;
                }

                case 2: { // Criar conta
                    cntrApresentacaoConta->criar();
                    cout << endl << "Conta criada com sucesso!" << endl;
                    break;
                }

                case 3: { // Executar conta (menu de operações)
                    string entrada;
                    cout << endl << "Digite o codigo da conta: ";
                    cin >> entrada;
                    codigo.setCodigo(entrada);

                    while (true) {
                        cout << endl << "Escolha uma operacao:" << endl;
                        cout << "1. Alterar senha" << endl;
                        cout << "2. Excluir conta" << endl;
                        cout << "3. Voltar" << endl;
                        cout << "Opcao: ";

                        int opcaoOperacao;
                        cin >> opcaoOperacao;

                        try {
                            switch (opcaoOperacao) {
                                case 1: { // Alterar senha
                                    string novaSenha;
                                    cout << "Digite a nova senha: ";
                                    cin >> novaSenha;

                                    // Cria um objeto Senha e define a nova senha
                                    Senha senhaAtualizada;
                                    try {
                                        senhaAtualizada.setSenha(novaSenha); // Valida e define a senha
                                    } catch (const invalid_argument &exp) {
                                        cout << "Erro: Senha invalida. " << exp.what() << endl;
                                        break;
                                    }

                                    // Cria um objeto Conta com o código e a nova senha
                                    Conta contaAtualizada;
                                    contaAtualizada.setCodigo(codigo);
                                    contaAtualizada.setSenha(senhaAtualizada); // Passa o objeto Senha, não a string

                                    // Atualiza a conta
                                    if (stubServicoConta->atualizar(contaAtualizada)) {
                                        cout << "Senha alterada com sucesso!" << endl;
                                    } else {
                                        cout << "Falha ao alterar a senha." << endl;
                                    }
                                    break;
                                }

                                case 2: { // Excluir conta
                                    if (stubServicoConta->excluir(codigo)) {
                                        cout << "Conta excluida com sucesso!" << endl;
                                        return 0; // Sai do programa após excluir a conta
                                    } else {
                                        cout << "Falha ao excluir a conta." << endl;
                                    }
                                    break;
                                }

                                case 3: { // Voltar
                                    break;
                                }

                                default: {
                                    cout << "Opcao invalida. Tente novamente." << endl;
                                    break;
                                }
                            }
                        } catch (const invalid_argument &exp) {
                            cout << "Erro: Dado em formato incorreto." << endl;
                        } catch (const runtime_error &exp) {
                            cout << "Erro de sistema: " << exp.what() << endl;
                        }

                        if (opcaoOperacao == 3) {
                            break; // Volta ao menu principal
                        }
                    }
                    break;
                }

                case 4: { // Sair
                    cout << endl << "Saindo do sistema..." << endl;
                    delete cntrApresentacaoAutenticacao;
                    delete stubServicoAutenticacao;
                    delete cntrApresentacaoConta;
                    delete stubServicoConta;
                    return 0;
                }

                default: {
                    cout << endl << "Opcao invalida. Tente novamente." << endl;
                    break;
                }
            }
        } catch (const invalid_argument &exp) {
            cout << endl << "Erro: Dado em formato incorreto." << endl;
        } catch (const runtime_error &exp) {
            cout << endl << "Erro de sistema: " << exp.what() << endl;
        }
    }

    return 0;
}
