#include "testes.hpp"

void TUHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioHorarioValido(){
    try{
        horario->setHorario(HORARIO_VALIDO);
        if(horario->getHorario() != HORARIO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioHorarioInvalido(){
    try{
        horario->setHorario(HORARIO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(horario->getHorario() == HORARIO_INVALIDO)
            estado = FALHA;
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioHorarioValido();
    testarCenarioHorarioInvalido();
    tearDown();
    return estado;
}
