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
    Horario *Horarioptr;

    Horarioptr = new Horario();

    if (Horarioptr->setHorario("00:00"))
        cout << "Horario = " << Horarioptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (Horarioptr->setHorario("24:00"))
        cout << "Horario = " << Horarioptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    delete Horarioptr;


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
    Nome *Nomeptr;

    Nomeptr = new Nome();

    if (Nomeptr->setNome("Pedrinho Camarada"))
        cout << "Nome = " << Nomeptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (Nomeptr->setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << Nomeptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    delete Nomeptr;


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
    Senha *Senhaptr;

    Senhaptr = new Senha();

    if(Senhaptr -> setSenha("21348"))
        cout << "Senha = " << Senhaptr -> getSenha() << endl;
    else
        cout << "Senha invalido " << endl;

    if(Senhaptr->setSenha("54321"))
        cout << "Senha = " << Senhaptr->getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    delete Senhaptr;


    Data data;

    cout << "Defina a data: "  << endl;

    string data_temp;
    cin >> data_temp;

    if (data.setData(data_temp))
        cout << "Data definida com sucesso: " << data.getData() << endl;
    else
        cout << "Data invalida. Por favor, digite uma data em formato DD-MM-AA" << endl;

    Codigo codigo;

    cout << "Defina o código:" << endl;

    string codigo_temp;
    cin >> codigo_temp;

    if (codigo.setCodigo(codigo_temp))
        cout << "Código definido com sucesso: " << codigo.getCodigo() << endl;
    else
        cout << "Código inválido. Por favor, digite um código de 6 caracteres alfanuméricos." << endl;
    
    if (codigo.setCodigo("A1B2C3"))
        cout << "Código = " << codigo.getCodigo() << endl;
    else
        cout << "Código inválido" << endl;
    if (codigo.setCodigo("1234567")) 
        cout << "Código = " << codigo.getCodigo() << endl;
    else
        cout << "Código inválido" << endl;
    
    Codigo* Codigoptr = new Codigo();

    if (Codigoptr->setCodigo("XYZ789"))
        cout << "Código = " << Codigoptr->getCodigo() << endl;
    else
        cout << "Código inválido" << endl;

    if (Codigoptr->setCodigo("A!B#1C"))
        cout << "Código = " << Codigoptr->getCodigo() << endl;
    else
        cout << "Código inválido" << endl;

    delete Codigoptr;

    return 0;
}
