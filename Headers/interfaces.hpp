#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class ILNAutenticacao;

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Conta) = 0;
        virtual void setCntrLNAutenticacao(ILNAutenticacao*) = 0;

        virtual ~IServicoAutenticacao() {}
};

// Declaração de interface p/ serviço

class ILNAutenticacao {
    public:
        virtual bool autenticar(const Codigo&, const Senha&) = 0;
        virtual ~ILNAutenticacao() {}
};

#endif INTERFACES_HPP_INCLUDED
