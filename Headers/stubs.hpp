#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED

#include "interfaces.hpp"

using namespace std;


/** 
 * @brief Classe stub para ILNSAutenticacao.
 * 
 * Simula o comportamento de ILNSautenticacao.
 * 
*/
class StubLNSAutenticacao: public ILNSAutenticacao {
    private:
        const static string TRIGGER_FALHA; ///< Gatilho para erro (com é string, precisa ser definida na implementação).
        const static string TRIGGER_ERRO_SISTEMA; ///< Gatilho para erro (com é string, precisa ser definida na implementação).
        
    public:
        bool autenticar(const Codigo&, const Senha&); ///< Autentica a conta verificando código e senha.
};


#endif // STUBS_HPP_INCLUDED