#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"
#include <stdexcept>

using namespace std;

// Foraward declaration
class ILNAutenticacao;

// Classes abstratas -> métodos vistuais puros
class IServicoAutenticacao {
    public:
        virtual bool autenticar(Conta*) = 0;
        virtual void setCntrLNAutenticacao(ILNAutenticacao*) = 0;

        virtual ~IServicoAutenticacao() {} // Destrutor
};

// Declaração de interface p/ serviço

class ILNAutenticacao {
    public:
        virtual bool autenticar(const Codigo&, const Senha&) = 0;
        virtual ~ILNAutenticacao() {} // Destrutor
};

#endif // INTERFACES_HPP_INCLUDED
