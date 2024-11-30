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

    //TuDinheiro

    //TUDuracao

    TUHorario testeHorario;

    TUNome testeNome;

    //TUSenha


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

        //TODO


    return 0;
}
