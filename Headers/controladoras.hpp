#ifndef CONTROLADORAS_HPP_INCLUDED
#define CONTROLADORAS_HPP_INCLUDED

#include "interfaces.hpp"

class CntrIServicoAutenticacao:public IServicoAutenticacao {
    private:
        ILNAutenticacao *cntrILNAutenticacao;

    public:
        bool autenticar(Conta*);
        void setCntrLNAutenticacao(ILNAutenticacao*);

};

void inline CntrIServicoAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrILNAutenticacao) {
    this->cntrILNAutenticacao = cntrILNAutenticacao;
};

#endif // CONTROLADORAS_HPP_INCLUDED