#include "testes.hpp"
void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}
void TUAvaliacao::tearDown(){
    delete avaliacao;
}
void TUAvaliacao::testarCenarioValorValido(){
    try{
        avaliacao->setAvaliacao(5);
        if (avaliacao->getAvaliacao() != 5)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
    estado = FALHA;
    }
}
void TUAvaliacao::testarCenarioValorInvalido(){
    try{
        avaliacao->setAvaliacao(6);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (avaliacao->getAvaliacao() == 6)
        estado = FALHA;
    }
}
int TUAvaliacao::run(){
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
