#include "stubs.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

const string StubLNSAutenticacao::TRIGGER_FALHA = "%*/*";
const string StubLNSAutenticacao::TRIGGER_ERRO_SISTEMA = "7891011";


bool StubLNSAutenticacao::autenticar(const Codigo &codigo, const Senha &senha) {
    
    cout << endl << "StubLNSAutenticacao::autenticar" << endl;
    cout << "Código =" << codigo.getCodigo() << endl;
    cout << "Senha =" << senha.getSenha() << endl;

    if(codigo.getCodigo() == TRIGGER_FALHA) {
            return false;
    }
    if(codigo.getCodigo() == TRIGGER_ERRO_SISTEMA) {
            throw runtime_error("Erro de sistema");
    }
    return true;
}
