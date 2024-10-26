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
    Nome *ptr;

    ptr = new Nome();

    if (ptr->setNome("Pedrinho Camarada"))
        cout << "Nome = " << ptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (ptr->setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << ptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    delete ptr;


    Senha senha;

     // Teste feito conforme o roteiro do projeto:
    if(senha.setSenha("21348"))
        cout << "Valor = " << senha.getSenha() << endl;
    else
        cout << "Valor invalido" << endl;

    if(senha.setSenha("54321"))
        cout << "Valor = " << senha.getSenha() << endl;
    else
        cout << "Valor invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Senha *ptr;

    ptr = new Senha();

    if(ptr -> setSenha("21348"))
        cout << "Valor = " << ptr -> getSenha() << endl;
    else
        cout << "Valor invalido " << endl;

    if(ptr->setSenha("54321"))
        cout << "Valor = " << ptr->getSenha() << endl;
    else
        cout << "Valor invalido" << endl;

    delete ptr;

    
    return 0;
}
