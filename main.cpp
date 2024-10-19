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

    return 0;
}
