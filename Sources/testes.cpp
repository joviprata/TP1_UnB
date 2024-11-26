#include "testes.hpp"


// Teste Unitário Horario:

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


// Teste Unitário Nome:

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioNomeValido(){
    try{
        nome->setNome(NOME_VALIDO);
        if(nome->getNome() != NOME_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioNomeInvalido(){
    try{
        nome->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(nome->getNome() == NOME_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioNomeValido();


// Teste Unitário Data:

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;

}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioDataValido(){
    try{
            data->setData(DATA_VALIDO);
            if(data->getData() != DATA_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument&execao){
        estado = FALHA;
    }
}

void TUData::testarCenarioDataInvalido(){
    try{
            data->setData(DATA_INVALIDO);
            estado = FALHA;
    }
    catch(invalid_argument&execao){
        if(data->getData()== DATA_INVALIDO)
        estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioDataValido();
    testarCenarioDataInvalido();
    tearDown();
    return estado;
}

    testarCenarioNomeInvalido();
    tearDown();
    return estado;
}
