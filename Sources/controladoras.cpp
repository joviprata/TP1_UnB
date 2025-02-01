#include "controladoras.hpp"

// ---------------------------------------------------------------------------------
// Implementações de métodos de classe Apresentacao Autenticacao.

bool CntrApresentacaoAutenticacao::autenticar(Codigo *codigo) {
    Senha senha;
    string entrada;

    // Solicitar codigo e senha.

    while(true) {

        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite o codigo : ";
            cin >> entrada;
            codigo->setCodigo(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autenticação.

    bool resultado = cntrServicoAutenticacao->autenticar(*codigo, senha);

    // Retornar resultado da autenticação.

    return resultado;
}

// ---------------------------------------------------------------------------------
// Implementações de métodos de classe Apresentacao Conta.

void CntrApresentacaoConta::criar() {
    Codigo codigo;
    Senha senha;
    string entrada;

    while(true){
        cout << endl << "Criacao da conta" << endl << endl;

        try {
            cout << "Digite o codigo : ";
            cin >> entrada;
            codigo.setCodigo(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }
}

void CntrApresentacaoConta::executar(Codigo codigo) {

    cout << endl << "Executando conta com codigo: " << codigo.getCodigo() << endl;

}
