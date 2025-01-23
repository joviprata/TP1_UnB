#ifndef CONTROLADORAS_HPP_INCLUDED
#define CONTROLADORAS_HPP_INCLUDED

#include "interfaces.hpp"

/** 
 * @brief Controladora para a interface serviço de autenticação.
*/
class CntrIServicoAutenticacao:public IServicoAutenticacao {
    private:
        ILNSAutenticacao *cntrILNSAutenticacao;

    public:
        bool autenticar(Conta); ///< Autentica conta.
        void setCntrLNSAutenticacao(ILNSAutenticacao*); ///< Define o ponteiro a instância de ILNSAutenticacao.

};

/** 
 * @brief Método inline para configurar o serviço de autenticação.
 * 
 * Conecta o serviço de autenticação e a controladora.
 * 
 * @param cntrILNSAutenticacao
*/
void inline CntrIServicoAutenticacao::setCntrLNSAutenticacao(ILNSAutenticacao *cntrILNSAutenticacao) {
    this->cntrILNSAutenticacao = cntrILNSAutenticacao;
};

#endif // CONTROLADORAS_HPP_INCLUDED