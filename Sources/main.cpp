#include <bits/stdc++.h>
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

int main() {

    // Declaração de domínios:

    Avaliacao avaliacao;

    Codigo codigo;
    Codigo *codigo_ptr;

    Data data;
    
    Dinheiro dinheiro;

    Duracao duracao;

    Horario horario;
    Horario *horario_ptr;

    Nome nome;
    Nome *nome_ptr;

    Senha senha;
    Senha *senha_ptr;


    // Declaração de entidades:

    Viagem viagem;

    Destino destino;

    Conta conta;

    Hospedagem hospedagem;

    Atividades atividades;


    // Testes:


    // Teste de classe Horario:
    try {
        horario.setHorario("12:53");
    }
    catch(invalid_argument &exp){
        cout << "Excecao (Horario): " << exp.what() << endl;
    }

    try {
        horario.setHorario("1A:53");
    }
    catch(invalid_argument &exp) {
        cout << "Excecao (Horario): " << exp.what() << endl;
    }


    // Teste de classe Nome:
    try {
        nome.setNome("Pedro");
    }
    catch(invalid_argument &exp){
        cout << "Excecao (Nome): " << exp.what() << endl;
    }

    try {
        nome.setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga");
    }
    catch(invalid_argument &exp) {
        cout << "Excecao (Nome): " << exp.what() << endl;
    }

    
    // Testes de classe Data
    try{
        data.setData("11-09-01");       //Escolher valor válido
    }
    catch(invalid_argument&exp){
        cout<<"Excecao:"<<exp.what()<<endl;
    }

    try{
        data.setData("30-02-05");      //Escolher valor inválido
    }
    catch(invalid_argument&exp){
        cout<<"Excecao:"<<exp.what()<<endl;
    }

    
    // Teste feito conforme o roteiro do projeto:
    if(senha.setSenha("21348"))
        cout << "Senha = " << senha.getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    if(senha.setSenha("54321"))
        cout << "Senha = " << senha.getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:

    senha_ptr = new Senha();

    if(senha_ptr->setSenha("21348"))
        cout << "Senha = " << senha_ptr -> getSenha() << endl;
    else
        cout << "Senha invalida " << endl;

    if(senha_ptr->setSenha("54321"))
        cout << "Senha = " << senha_ptr->getSenha() << endl;
    else
        cout << "Senha invalida" << endl;

    delete senha_ptr;


    cout << "Defina o codigo:" << endl;

    string codigo_temp;
    cin >> codigo_temp;

    // Teste feito conforme o roteiro do projeto:
    if (codigo.setCodigo(codigo_temp))
        cout << "Codigo definido com sucesso: " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido. Por favor, digite um codigo de 6 caracteres alfanumericos." << endl;

    if (codigo.setCodigo("A1B2C3"))
        cout << "Codigo = " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;
    if (codigo.setCodigo("1234567"))
        cout << "Codigo = " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:

    codigo_ptr = new Codigo();

    if (codigo_ptr->setCodigo("XYZ789"))
        cout << "Codigo = " << codigo_ptr->getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    if (codigo_ptr->setCodigo("A!B#1C"))
        cout << "Codigo = " << codigo_ptr->getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    delete codigo_ptr;


    if(avaliacao.setAvaliacao(1))
        cout << "Valor = " << avaliacao.getAvaliacao() << endl;
    if (avaliacao.setAvaliacao(10))
        cout << "Valor = " << avaliacao.getAvaliacao() << endl;

    // Teste de Duracao e Dinheiro conforme o roteiro

    // Entrada de uma duração específica válida
    if (duracao.setDuracao(200)) {
        cout << "Duração = " << duracao.getDuracao() << endl;
    } else {
        cout << "Duração Inválida\n";
    }


    if (dinheiro.setDinheiro(200.00))
        cout << "Valor = " << dinheiro.getDinheiro() << endl;
    else
        cout << "Valor Inválido\n";


    // Testes com entidades:

    // Viagem:

    viagem.setCodigo(codigo);
    viagem.setNome(nome);
    viagem.setAvaliacao(avaliacao);


    cout<< viagem.getCodigo().getCodigo() <<endl;
    cout<< viagem.getNome().getNome() <<endl;
    cout<< viagem.getAvaliacao().getAvaliacao() <<endl;


    // Destino:

    codigo.setCodigo("A1B2CE");
    destino.setCodigo(codigo);

    nome.setNome("Batman");
    destino.setNome(nome);

    data.setData("01-01-01");
    destino.setDataInicio(data);

    data.setData("09-09-09");
    destino.setDataTermino(data);

    avaliacao.setAvaliacao(5);
    destino.setAvaliacao(avaliacao);

    cout << destino.getCodigo().getCodigo() << endl;
    cout << destino.getNome().getNome() << endl;
    cout << destino.getDataInicio().getData() << endl;
    cout << destino.getDataTermino().getData() << endl;
    cout << destino.getAvaliacao().getAvaliacao() << endl;

    // Conta

    conta.setCodigo(codigo);
    conta.setSenha(senha);

    cout << conta.getCodigo().getCodigo() << endl;
    cout << conta.getSenha().getSenha() << endl;

    // Hospedagem:

    hospedagem.setCodigo(codigo);
    hospedagem.setNome(nome);
    hospedagem.setDinheiro(dinheiro);
    hospedagem.setAvaliacao(avaliacao);


    cout<< hospedagem.getCodigo().getCodigo() <<endl;
    cout<< hospedagem.getNome().getNome() <<endl;
    cout<< hospedagem.getDinheiro().getDinheiro() <<endl;
    cout<< hospedagem.getAvaliacao().getAvaliacao() <<endl;

    //Atividades

    atividades.setCodigo(codigo);
    atividades.setNome(nome);
    atividades.setData(data);
    atividades.setHorario(horario);
    atividades.setDuracao(duracao);
    atividades.setDinheiro(dinheiro);
    atividades.setAvaliacao(avaliacao);

    cout<< atividades.getCodigo().getCodigo() <<endl;
    cout<< atividades.getNome().getNome() <<endl;
    cout<< atividades.getData().getData() <<endl;
    cout<< atividades.getHorario().getHorario() <<endl;
    cout<< atividades.getDuracao().getDuracao() <<endl;
    cout<< atividades.getDinheiro().getDinheiro() <<endl;
    cout<< atividades.getAvaliacao().getAvaliacao() <<endl;

    return 0;
}
