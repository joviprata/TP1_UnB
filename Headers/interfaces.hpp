#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"
#include <stdexcept>

using namespace std;

// --------------------------------------------------------------------
// INTERFACE SERVIÇO AUTENTICAÇÃO
/** 
 * @brief Foraward declaration (Declaração adiantada) da interface ILNSAutenticacao
*/
class ILNSAutenticacao;

/** 
 * @brief Classe abstrata Interface Serviço Autenticação
 * 
 * 
*/
class IServicoAutenticacao {
    public:
        virtual bool autenticar(Conta) = 0; ///< Autenticar conta.
        virtual void setCntrLNSAutenticacao(ILNSAutenticacao*) = 0; ///< Define o ponteiro a instância de ILNSAutenticacao.

        virtual ~IServicoAutenticacao() {} ///< Método destrutor da classe.
};

/** 
 * @brief Classe abstrata da lógica de negócio Interface Serviço Autenticação
 * 
*/
class ILNSAutenticacao {
    public:
        virtual bool autenticar(const Codigo&, const Senha&) = 0; ///< Autentica a conta verificando código e senha.
        virtual ~ILNSAutenticacao() {} ///< Método destrutor da classe.
};

#endif // INTERFACES_HPP_INCLUDED
