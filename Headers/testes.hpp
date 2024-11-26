#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

#include <stdexcept>

#include "dominios.hpp"

using namespace std;

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


#endif // TESTES_HPP_INCLUDED
