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
    case TUSenha::SUCESSO:cout<<"SUCESSO"<<endl;
        break;
    
    case TUSenha::FALHA:cout<<"FALHA"<<endl;
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

    return 0;
}