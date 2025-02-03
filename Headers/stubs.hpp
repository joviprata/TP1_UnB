#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED

#include "interfaces.hpp"

// -------------------------------------------------------------------------------------------
// Declaração de classe stub.
//
// Classe StubServicoAutenticacao implementa a interface IServicoAutenticacao.

class StubServicoAutenticacao:public IServicoAutenticacao{

private:

    const static string TRIGGER_FALHA_AUTENTICACAO;
    const static string TRIGGER_ERRO_SISTEMA_AUTENTICACAO;
    const static string TRIGGER_FALHA_SENHA_INVALIDA;
    const static string TRIGGER_ERRO_SENHA_INVALIDA;

public:

    bool autenticar(const Codigo&, const Senha&);
};

// Classe StubServiçoConta implementa a interface IServicoConta.

class StubServicoConta:public IServicoConta{

private:

    const static string TRIGGER_FALHA_CONTA;
    const static string TRIGGER_ERRO_SISTEMA_CONTA;

public:

    bool criar(Conta);
    bool excluir(Codigo);
    bool ler(Conta*);
    bool atualizar(Conta);
};

class StubServicoEntidades:public IServicoEntidades {

private:

    const static string TRIGGER_FALHA_CODIGO_INVALIDO;
    const static string TRIGGER_ERRO_CODIGO_INVALIDO;
    const static string TRIGGER_FALHA_NOME_INVALIDO;
    const static string TRIGGER_ERRO_NOME_INVALIDO;
    const static int TRIGGER_FALHA_AVALIACAO_INVALIDA;
    const static int TRIGGER_ERRO_AVALIACAO_INVALIDA;
    const static string TRIGGER_FALHA_DATA_INICIO_INVALIDA;
    const static string TRIGGER_ERRO_DATA_INICIO_INVALIDA;
    const static string TRIGGER_FALHA_DATA_TERMINO_INVALIDA;
    const static string TRIGGER_ERRO_DATA_TERMINO_INVALIDA;
    const static string TRIGGER_FALHA_DATA_INVALIDA;
    const static string TRIGGER_ERRO_DATA_INVALIDA;
    const static string TRIGGER_FALHA_SENHA_INVALIDA;
    const static string TRIGGER_ERRO_SENHA_INVALIDA;
    const static string TRIGGER_FALHA_HORARIO_INVALIDO;
    const static string TRIGGER_ERRO_HORARIO_INVALIDO;
    const static int TRIGGER_FALHA_DURACAO_INVALIDA;
    const static int TRIGGER_ERRO_DURACAO_INVALIDA;
    const static float TRIGGER_FALHA_PRECO_INVALIDO;
    const static float TRIGGER_ERRO_PRECO_INVALIDO;
    const static float TRIGGER_FALHA_DIARIA_INVALIDA;
    const static float TRIGGER_ERRO_DIARIA_INVALIDA;

public:

    bool criar(Viagem) = 0;
    bool excluir(Viagem) = 0;
    bool ler(Viagem*) = 0;
    bool atualizar(Viagem) = 0;

    bool criar(Destino) = 0;
    bool excluir(Destino) = 0;
    bool ler(Destino*) = 0;
    bool atualizar(Destino) = 0;

    bool criar(Atividade) = 0;
    bool excluir(Atividade) = 0;
    bool ler(Atividade*) = 0;
    bool atualizar(Atividade) = 0;

    bool criar(Hospedagem) = 0;
    bool excluir(Hospedagem) = 0;
    bool ler(Hospedagem*) = 0;
    bool atualizar(Hospedagem) = 0;
};

#endif // STUBS_HPP_INCLUDED

