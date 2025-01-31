#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"
#include <stdexcept>

using namespace std;

/**
*@file interfaces.hpp
*@brief Declaração de classes que representam as interfaces do sistema.
*
* Este arquivo contém as interfaces das camadas de apresentação e serviço do sistema.
* As interfaces definem os contratos que devem ser implementados pelas classes concretas,
* garantindo a separação de responsabilidades e a modularidade do código.
*
* As interfaces são divididas em:
* - Camada de Apresentação: Responsável pela interação com o usuário.
* - Camada de Serviço: Responsável pela lógica de negócio e comunicação com a camada de domínio.
*/

// -------------------------------------------------------------------------------------------
// Declaração adiantada (forward declaration)

class IServicoEntidades;
class IServicoConta;
class IServicoAutenticacao;

//----------------------------------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.

// --------------------------------------------------------------------
// INTERFACE APRESENTACAO AUTENTICACAO
/**
 * @brief Interface para a apresentação da autenticação.
 *
 * Esta interface é responsável por lidar com a interação do usuário no processo de autenticação.
 * Ela delega a validação das credenciais para o serviço correspondente.
 *
 * @author Mariana Soares Oliveira - 231013663
 */
class IApresentacaoAutenticacao {
    public:
        /**
         * @brief Autentica o usuário com base no código fornecido.
         *
         * @param codigo Ponteiro para o objeto Codigo que contém o código de autenticação.
         * @return bool Retorna true se a autenticação for bem-sucedida, false caso contrário.
         */
        virtual bool autenticar(Codigo*) = 0;

        /**
         * @brief Define o controlador de serviço de autenticação.
         *
         * @param servico Ponteiro para o objeto IServicoAutenticacao que será utilizado para autenticação.
         */
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;

        /**
         * @brief Destrutor virtual da interface.
         */
        virtual ~IApresentacaoAutenticacao(){}
};

// --------------------------------------------------------------------
// INTERFACE CONTA APRESENTAÇÃO
/**
 * @brief Interface para a apresentação da conta.
 *
 * Esta interface é responsável por lidar com a interação do usuário no processo de criação e exclusão de contas.
 *
 * @author Nikolas Negrão Pessoa - 202024722
 */
class IApresentacaoConta{
    public:
        /**
         * @brief Cria uma nova conta.
         *
         * @param conta Objeto do tipo Conta que contém os dados da nova conta.
         */
        virtual void criar() = 0;

        /**
         * @brief Executa uma conta existente.
         *
         * @param conta Referência para o objeto Conta que será executado.
         */
        virtual void executar(Codigo)= 0;

        /**
         * @brief Define o controlador de serviço da conta.
         *
         * @param apresentacao Ponteiro para o objeto IApresentacaoConta que será utilizado para serviço.
         */
        virtual void setCntrServicoConta(IServicoConta*) = 0;

        /**
         * @brief Destrutor virtual da interface.
         */
        virtual ~IApresentacaoConta(){};
};

// --------------------------------------------------------------------
// INTERFACE APRESENTAÇÃO ENTIDADES
/**
 * @brief Interface para a apresentação de entidades.
 *
 * Esta interface gerencia as execuções referentes às entidades na camada de apresentação.
 *
 * @author Mauro Ribeiro da Silva - 231013592
 */
class IApresentacaoEntidades{
public:
    /**
     * @brief Executa uma ação relacionada a uma entidade.
     *
     * @param codigo Código da entidade que será executada.
     */
    virtual void executar(Codigo) = 0;

    /**
     * @brief Define o controlador de serviço de entidades.
     *
     * @param servico Ponteiro para o objeto IServicoEntidades que será utilizado para gerenciar entidades.
     */
    virtual void setCntrServicoEntidades(IServicoEntidades*) = 0;

    /**
     * @brief Destrutor virtual da interface.
     */
    virtual ~IApresentacaoEntidades(){};
};

//----------------------------------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de Serviço.

// --------------------------------------------------------------------
// INTERFACE SERVIÇO AUTENTICAÇÃO
/**
 * @brief Interface para o serviço de autenticação.
 *
 * Esta interface é responsável por autenticar a conta verificando o código e a senha.
 *
 * @author Isabela Soares Furlan - 231013636
 */
class IServicoAutenticacao {
    public:
        /**
         * @brief Autentica uma conta com base no código e senha fornecidos.
         *
         * @param codigo Referência para o objeto Codigo que contém o código de autenticação.
         * @param senha Referência para o objeto Senha que contém a senha de autenticação.
         * @return bool Retorna true se a autenticação for bem-sucedida, false caso contrário.
         */
        virtual bool autenticar(const Codigo&, const Senha&) = 0;

        /**
         * @brief Destrutor virtual da interface.
         */
        virtual ~IServicoAutenticacao() {}
};

// --------------------------------------------------------------------
// INTERFACE SERVIÇO CONTA
/**
 * @brief Interface para serviços de gerenciamento de contas do sistema.
 *
 * Esta interface define operações básicas de CRUD (Create, Read, Update, Delete) para a entidade Conta.
 *
 * @author Gabriel Balder Oliveira Lemos - 231013618
 */
class IServicoConta{
public:
    /**
     * @brief Cria uma nova conta.
     *
     * @param conta Objeto do tipo Conta que contém os dados da nova conta.
     * @return bool Retorna true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(Conta) = 0;

    /**
     * @brief Exclui uma conta existente.
     *
     * @param codigo Código da conta que será excluída.
     * @return bool Retorna true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(Codigo) = 0;

    /**
     * @brief Lê os dados de uma conta existente.
     *
     * @param conta Ponteiro para o objeto Conta onde os dados serão armazenados.
     * @return bool Retorna true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(Conta*) = 0;

    /**
     * @brief Atualiza os dados de uma conta existente.
     *
     * @param conta Objeto do tipo Conta que contém os novos dados da conta.
     * @return bool Retorna true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(Conta) = 0;

    /**
     * @brief Destrutor virtual da interface.
     */
    virtual ~IServicoConta(){};
};

// --------------------------------------------------------------------
// INTERFACE SERVIÇO ENTIDADES
/**
 * @brief Interface para serviços de gerenciamento de entidades do sistema.
 *
 * Esta interface define operações básicas de CRUD (Create, Read, Update, Delete) para
 * diferentes tipos de entidades, como Viagem, Atividade, Destino e Hospedagem.
 *
 * @author João Victor Prata Tavares Pereira - 202028857 e Mariana Soares Oliveira - 231013663
 */
class IServicoEntidades {
public:
    /**
     * @brief Cria uma nova entidade do tipo Viagem.
     *
     * @param viagem Objeto do tipo Viagem que contém os dados da nova viagem.
     * @return bool Retorna true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(Viagem) = 0;

    /**
     * @brief Exclui uma entidade do tipo Viagem.
     *
     * @param viagem Objeto do tipo Viagem que será excluído.
     * @return bool Retorna true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(Viagem) = 0;

    /**
     * @brief Lê os dados de uma entidade do tipo Viagem.
     *
     * @param viagem Ponteiro para o objeto Viagem onde os dados serão armazenados.
     * @return bool Retorna true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(Viagem*) = 0;

    /**
     * @brief Atualiza os dados de uma entidade do tipo Viagem.
     *
     * @param viagem Objeto do tipo Viagem que contém os novos dados da viagem.
     * @return bool Retorna true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(Viagem) = 0;

    /**
     * @brief Cria uma nova entidade do tipo Atividade.
     *
     * @param atividade Objeto do tipo Atividade que contém os dados da nova atividade.
     * @return bool Retorna true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(Atividade) = 0;

    /**
     * @brief Exclui uma entidade do tipo Atividade.
     *
     * @param atividade Objeto do tipo Atividade que será excluído.
     * @return bool Retorna true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(Atividade) = 0;

    /**
     * @brief Lê os dados de uma entidade do tipo Atividade.
     *
     * @param atividade Ponteiro para o objeto Atividade onde os dados serão armazenados.
     * @return bool Retorna true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(Atividade*) = 0;

    /**
     * @brief Atualiza os dados de uma entidade do tipo Atividade.
     *
     * @param atividade Objeto do tipo Atividade que contém os novos dados da atividade.
     * @return bool Retorna true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(Atividade) = 0;

    /**
     * @brief Cria uma nova entidade do tipo Destino.
     *
     * @param destino Objeto do tipo Destino que contém os dados do novo destino.
     * @return bool Retorna true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(Destino) = 0;

    /**
     * @brief Exclui uma entidade do tipo Destino.
     *
     * @param destino Objeto do tipo Destino que será excluído.
     * @return bool Retorna true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(Destino) = 0;

    /**
     * @brief Lê os dados de uma entidade do tipo Destino.
     *
     * @param destino Ponteiro para o objeto Destino onde os dados serão armazenados.
     * @return bool Retorna true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(Destino*) = 0;

    /**
     * @brief Atualiza os dados de uma entidade do tipo Destino.
     *
     * @param destino Objeto do tipo Destino que contém os novos dados do destino.
     * @return bool Retorna true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(Destino) = 0;

    /**
     * @brief Cria uma nova entidade do tipo Hospedagem.
     *
     * @param hospedagem Objeto do tipo Hospedagem que contém os dados da nova hospedagem.
     * @return bool Retorna true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(Hospedagem) = 0;

    /**
     * @brief Exclui uma entidade do tipo Hospedagem.
     *
     * @param hospedagem Objeto do tipo Hospedagem que será excluído.
     * @return bool Retorna true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(Hospedagem) = 0;

    /**
     * @brief Lê os dados de uma entidade do tipo Hospedagem.
     *
     * @param hospedagem Ponteiro para o objeto Hospedagem onde os dados serão armazenados.
     * @return bool Retorna true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(Hospedagem*) = 0;

    /**
     * @brief Atualiza os dados de uma entidade do tipo Hospedagem.
     *
     * @param hospedagem Objeto do tipo Hospedagem que contém os novos dados da hospedagem.
     * @return bool Retorna true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(Hospedagem) = 0;

    /**
     * @brief Destrutor virtual da interface.
     */
    virtual ~IServicoEntidades(){};
};

#endif // INTERFACES_HPP_INCLUDED
