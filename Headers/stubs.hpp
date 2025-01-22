#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED

#include "interfaces.hpp"

using namespace std;

class StubLNAutenticacao: public ILNAutenticacao {
    private:
        // valores de gatilho para erro
        const static string TRIGGER_FALHA;
        const static string TRIGGER_ERRO_SISTEMA;
        
    public:
        bool autenticar(const Codigo&, const Senha&);
};


#endif // STUBS_HPP_INCLUDED