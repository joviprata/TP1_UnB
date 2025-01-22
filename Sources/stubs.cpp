#include "./Headers/stubs.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

const string StubLNAutenticacao::TRIGGER_FALHA = "1234567";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "7891011";

bool StubLNAutenticacao::autenticar(const Codigo &codigo, const Senha &senha) {
    
    cout << endl << "StubLNAutenticacao::autenticar" << endl;
    cout << "Código =" << codigo.getCodigo() << endl;
    cout << "Senha =" << senha.getSenha() << endl;

    switch (codigo.getCodigo()) {
        case TRIGGER_FALHA:
            return false;
    
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
    }
    return true;
}