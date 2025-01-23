#include <iostream>
#include <stdexcept>

#include "controladoras.hpp"

using namespace std;


bool CntrIServicoAutenticacao::autenticar(Conta conta) {
    Senha senha;
    Codigo codigo;
    string entrada;

    while (true) {
        cout << endl << "Autenticação de conta." << endl;

        try {
            cout << "" << endl;
            cin >> entrada;
            codigo.setCodigo(entrada);

            cout << "Digite a senha: " << endl;
            cin >> entrada;
            senha.setSenha(entrada);
            
            break;

        } catch(const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }
    bool resultado = cntrILNSAutenticacao->autenticar(codigo, senha);
    
    return resultado;

}