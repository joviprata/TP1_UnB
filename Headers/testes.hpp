#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"
using namespace std;


// Testes de domínios:

class TUAvaliacao {
    private:
        const static int AVALIACAO_VALIDA = 5;
        const static int AVALIACAO_INVALIDA = 6;
        Avaliacao *avaliacao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioAvaliacaoValida();
        void testarCenarioAvaliacaoInvalida();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUCodigo {
    private:
        const string CODIGO_VALIDO = "uba123";
        const string CODIGO_INVALIDO = "%*/*";
        Codigo *codigo;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioCodigoValido();
        void testarCenarioCodigoInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUData{
    private:
        const string DATA_VALIDA = "11-09-01";
        const string DATA_INVALIDA = "32-14-04";
        Data *data;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDataValida();
        void testarCenarioDataInvalida();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUDinheiro {
    private:
        const int DINHEIRO_VALIDO = 200.01;
        const int DINHEIRO_INVALIDO = 300000.0;
        Dinheiro *dinheiro;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDinheiroValido();
        void testarCenarioDinheiroInvalido();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUDuracao {
    private:
        const int DURACAO_VALIDA = 200;
        const int DURACAO_INVALIDA = 3610;
        Duracao *duracao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDuracaoValida();
        void testarCenarioDuracaoInvalida();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUHorario {
    private:
        const string HORARIO_VALIDO = "12:34";
        const string HORARIO_INVALIDO = "AB:CD";
        Horario *horario;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioHorarioValido();
        void testarCenarioHorarioInvalido();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUNome {
    private:
        const string NOME_VALIDO = "Pedro";
        const string NOME_INVALIDO = "Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga";
        Nome *nome;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioNomeValido();
        void testarCenarioNomeInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUSenha {
    private:
        const string SENHA_VALIDA = "21345";
        const string SENHA_INVALIDA = "12345";
        Senha *senha;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSenhaValida();
        void testarCenarioSenhaInvalida();
    public:

        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


// Testes de entidades:

class TUConta{
    private:
        const string CODIGO_VALIDO = "uba123";
        const string SENHA_VALIDA = "21345";
        Conta *conta;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioConta();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();

};


class TUDestino {
    private:
        const string CODIGO_VALIDO = "uba123";
        const string NOME_VALIDO = "Pedro";
        const string DATA_INICIO_VALIDA = "11-09-01";
        const string DATA_TERMINO_VALIDA = "13-09-01";
        const static int AVALIACAO_VALIDA = 5;
        Destino *destino;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDestino();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUAtividade {
    private:
        const string CODIGO_VALIDO = "uba123";
        const string NOME_VALIDO = "Mauro";
        const string DATA_VALIDA = "11-02-04";
        const string HORARIO_VALIDO = "12:00";
        const static int DURACAO_VALIDA = 120;
        const double PRECO_VALIDO = 150.0;
        const static int AVALIACAO_VALIDA = 3;
        Atividade *atividade;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioAtividade();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUViagem {
    private:
        const string CODIGO_VALIDO = "uba123";
        const string NOME_VALIDO = "Juninho Silva";
        const static int AVALIACAO_VALIDA = 5;
        Viagem *viagem;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioViagem();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUHospedagem{
    private:
        const string CODIGO_VALIDO = "uba123";
        const string NOME_VALIDO = "Pedro";
        const static int DIARIA_VALIDA = 120.01;
        const static int AVALIACAO_VALIDA = 5;
        Hospedagem *hospedagem;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioHospedagem();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TESTES_HPP_INCLUDED
