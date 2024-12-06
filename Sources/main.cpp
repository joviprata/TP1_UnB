#include <bits/stdc++.h>
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"

using namespace std;

int main() {

    // Declaração de domínios:
    /*
    Avaliacao avaliacao;

    Codigo codigo;

    Data data;

    Dinheiro dinheiro;

    Duracao duracao;

    Horario horario;

    Nome nome;

    Senha senha;

    */

    // Declaração de entidades:

    /*

    Viagem viagem;

    Destino destino;

    Conta conta;

    Hospedagem hospedagem;

    Atividades atividades;

    */

    // Declaração de testes unitários de domínios:

    TUAvaliacao testeAvaliacao;

    TUCodigo testeCodigo;

    TUData testeData;

    TUDinheiro testeDinheiro;

    TUDuracao testeDuracao;

    TUHorario testeHorario;

    TUNome testeNome;

    //TUSenha

    TUSenha testeSenha;

    // Declaração de testes unitários de entidades:

    TUDestino testeDestino;

    TUAtividades testeAtividades;

    TUViagem testeViagem;

    // Testes:

    // Teste de classe Horario:

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO (HORARIO)" << endl;
        break;
    case TUHorario::FALHA: cout << "FALHA (HORARIO)" << endl;
        break;
    }

    // Teste de classe Nome:

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO (NOME)" << endl;
        break;
    case TUNome::FALHA: cout << "FALHA (NOME)" << endl;
        break;
    }

    // Testes de classe Data

    switch(testeData.run()){
        case TUData::SUCESSO: cout<<"SUCESSO (DATA)"<<endl;
        break;
    case TUData::FALHA: cout<<"FALHA (DATA)" <<endl;
        break;
    }

    // Teste de classe Senha

    switch (testeSenha.run())
    {
    case TUSenha::SUCESSO:cout<<"SUCESSO (SENHA)"<<endl;
        break;

    case TUSenha::FALHA:cout<<"FALHA (SENHA)"<<endl;
        break;
    }

    //TODO

    // Teste do Código, feito conforme roteiro do projeto

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO (CODIGO)" << endl;
        break;
    case TUCodigo::FALHA : cout << "FALHA (CODIGO)" << endl;
        break;
    }

    // Teste da Avaliação, feito conforme roteiro do projeto
    switch(testeAvaliacao.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO (AVALIACAO)" << endl;
            break;
        case TUAvaliacao::FALHA : cout << "FALHA (AVALIACAO)" << endl;
            break;
    }

    // Teste de Duracao e Dinheiro conforme o roteiro

    switch(testeDuracao.run()) {
        case TUDuracao::SUCESSO: cout << "SUCESSO (DURACAO)" << endl;
            break;
        case TUDuracao::FALHA: cout << "FALHA (DURACAO)" << endl;
            break;
    }

    switch(testeDinheiro.run()) {
        case TUDinheiro::SUCESSO: cout << "SUCESSO (DINHEIRO)" << endl;
            break;
        case TUDinheiro::FALHA: cout << "FALHA (DINHEIRO)" << endl;
            break;
    }


    // Teste de Destino conforme o roteiro

    switch(testeDestino.run()){
        case TUDestino::SUCESSO: cout << "SUCESSO (DESTINO)" << endl;
            break;
        case TUDestino::FALHA: cout << "FALHA (DESTINO)" << endl;
            break;
    }

    //  Teste de Atividades

    switch(testeAtividades.run()){
        case TUAtividades::SUCESSO: cout << "SUCESSO (ATIVIDADES)" << endl;
            break;
        case TUAtividades::FALHA: cout << "FALHA (ATIVIDADES)" << endl;
            break;
    }

    // Teste de Viagem, conforme roteiro.

    switch(testeViagem.run()){
        case TUViagem::SUCESSO: cout << "SUCESSO (VIAGEM)" << endl;
            break;
        case TUViagem::FALHA: cout << "FALHA (VIAGEM)" << endl;
            break;
    }

    return 0;
}

