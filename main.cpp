#include <bits/stdc++.h>
//#include <iostream>
#include "dominios.hpp"
using namespace std;

int main() {

    Horario horario;

    // Teste de classe de horario, usado durante desenvolvimento do codigo (sera removido na entrega final):
    cout << "Defina o horario: "  << endl;

    string horario_temp;
    cin >> horario_temp;

    if (horario.setHorario(horario_temp))
        cout << "Horario definido com sucesso: " << horario.getHorario() << endl;
    else
        cout << "Horario invalido. Por favor, digite o horario em formato HH:mm, entre 00:00 a 23:59." << endl;


    // Teste feito conforme o roteiro do projeto:
    if (horario.setHorario("23:59"))
        cout << "Horario = " << horario.getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (horario.setHorario("-1:59"))
        cout << "Horario = " << horario.getHorario() << endl;
    else
        cout << "Horario invalido" << endl;


    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Horario *ptr;

    ptr = new Horario();

    if (ptr->setHorario("00:00"))
        cout << "Horario = " << ptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (ptr->setHorario("24:00"))
        cout << "Horario = " << ptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    delete ptr;


    Nome nome;

    // Teste de classe de nome, usado durante desenvolvimento do codigo (sera removido na entrega final):
    cout << "Defina o nome: "  << endl;

    string nome_temp;
    cin >> nome_temp;

    if (nome.setNome(nome_temp))
        cout << "Nome definido com sucesso: " << nome.getNome() << endl;
    else
        cout << "Nome invalido. Por favor, digite um nome com ate 30 caracteres." << endl;


    // Teste feito conforme o roteiro do projeto:
    if (nome.setNome("Pedrinho Camarada"))
        cout << "Nome = " << nome.getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (nome.setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << nome.getNome() << endl;
    else
        cout << "Nome invalido" << endl;


    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Nome *ptr1;

    ptr1 = new Nome();

    if (ptr1->setNome("Pedrinho Camarada"))
        cout << "Nome = " << ptr1->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (ptr1->setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << ptr1->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    delete ptr1;


    Senha senha;

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
    Senha *ptr2;

    ptr2 = new Senha();

    if(ptr2 -> setSenha("21348"))
        cout << "Senha = " << ptr2 -> getSenha() << endl;
    else
        cout << "Senha invalido " << endl;

    if(ptr2->setSenha("54321"))
        cout << "Senha = " << ptr2->getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    delete ptr2;


    Data data;

    cout << "Defina a data: "  << endl;

    string data_temp;
    cin >> data_temp;

    if (data.setData(data_temp))
        cout << "Data definida com sucesso: " << data.getData() << endl;
    else
        cout << "Data invalida. Por favor, digite uma data em formato DD-MM-AA" << endl;

    Avaliacao av1;

    if(av1.setValue(1))
        cout << "Valor = " << av1.getValue() << endl;
    if (av1.setValue(10))
        cout << "Valor = " << av1.getValue() << endl;

    return 0;
}
