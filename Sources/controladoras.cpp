#include "controladoras.hpp"

// Implementação da CntrApresentacaoAutenticacao
bool CntrApresentacaoAutenticacao::autenticar(Codigo* codigo) {
    Senha senha;
    string entrada;

    while (true) {
        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite o codigo: ";
            cin >> entrada;
            codigo->setCodigo(entrada);
            cout << "Digite a senha: ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        } catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    bool resultado = cntrServicoAutenticacao->autenticar(*codigo, senha);

    if (resultado) {
        cout << endl << "Autenticacao bem-sucedida!" << endl;
    } else {
        cout << endl << "Falha na autenticacao. Codigo ou senha incorretos." << endl;
    }

    return resultado;
}

void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao* cntrServicoAutenticacao) {
    this->cntrServicoAutenticacao = cntrServicoAutenticacao;
}

// Implementação da CntrApresentacaoConta
void CntrApresentacaoConta::criar() {
    Codigo codigo;
    Senha senha;
    string entrada;

    while (true) {
        cout << endl << "Criacao da conta" << endl << endl;

        try {
            cout << "Digite o codigo: ";
            cin >> entrada;
            codigo.setCodigo(entrada);
            cout << "Digite a senha: ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        } catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    Conta novaConta;
    novaConta.setCodigo(codigo);
    novaConta.setSenha(senha);

    // Criar a conta no ContainerConta
    if (cntrServicoConta->criar(novaConta)) {
        cout << endl << "Conta criada com sucesso!" << endl;
    } else {
        cout << endl << "Erro: Conta com o mesmo codigo ja existe." << endl;
    }
}

void CntrApresentacaoConta::executar(Codigo codigo) {
    cout << endl << "Executando conta com codigo: " << codigo.getCodigo() << endl;
}

void CntrApresentacaoConta::setCntrServicoConta(IServicoConta* cntrServicoConta) {
    this->cntrServicoConta = cntrServicoConta;
}
