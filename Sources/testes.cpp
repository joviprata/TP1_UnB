#include "testes.hpp"

// Testes de domínios:

// Teste Unitário Avaliacao:

void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioAvaliacaoValida(){
    try{
        avaliacao->setAvaliacao(AVALIACAO_VALIDA);
        if (avaliacao->getAvaliacao() != AVALIACAO_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioAvaliacaoInvalida(){
    try{
        avaliacao->setAvaliacao(AVALIACAO_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (avaliacao->getAvaliacao() == AVALIACAO_INVALIDA)
            estado = FALHA;
    }
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioAvaliacaoValida();
    testarCenarioAvaliacaoInvalida();
    tearDown();
    return estado;
}


// Teste Unitário Codigo:

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioCodigoValido(){
    try{
        codigo->setCodigo(CODIGO_VALIDO);
        if (codigo->getCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
 }
}

void TUCodigo::testarCenarioCodigoInvalido(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == CODIGO_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioCodigoValido();
    testarCenarioCodigoInvalido();
    tearDown();
    return estado;
}


// Teste Unitário Data:

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioDataValida(){
    try{
        data->setData(DATA_VALIDA);
        if(data->getData() != DATA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioDataInvalida(){
    try{
        data->setData(DATA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(data->getData()== DATA_INVALIDA)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioDataValida();
    testarCenarioDataInvalida();
    tearDown();
    return estado;
}


// Teste Unitário Dinheiro:

void TUDinheiro::setUp() {
    dinheiro = new Dinheiro;
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete dinheiro;
}

void TUDinheiro::testarCenarioDinheiroValido() {
    try {
        dinheiro->setDinheiro(DINHEIRO_VALIDO);
        if(dinheiro->getDinheiro() != DINHEIRO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioDinheiroInvalido() {
    try {
        dinheiro->setDinheiro(DINHEIRO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(dinheiro->getDinheiro() == DINHEIRO_INVALIDO)
            estado = FALHA;
    }
}

int TUDinheiro::run() {
    setUp();
    testarCenarioDinheiroValido();
    testarCenarioDinheiroInvalido();
    tearDown();
    return estado;
}


// Teste Unitário Duracao:

void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown() {
    delete duracao;
}

void TUDuracao::testarCenarioDuracaoValida() {
    try {
        duracao->setDuracao(DURACAO_VALIDA);
        if(duracao->getDuracao() != DURACAO_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioDuracaoInvalida() {
    try {
        duracao->setDuracao(DURACAO_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(duracao->getDuracao() == DURACAO_INVALIDA)
            estado = FALHA;
    }
}

int TUDuracao::run() {
    setUp();
    testarCenarioDuracaoValida();
    testarCenarioDuracaoInvalida();
    tearDown();
    return estado;
}


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
    testarCenarioNomeInvalido();
    tearDown();
    return estado;
}


// Teste Unitário Senha:

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSenhaValida(){
    try{
        senha -> setSenha(SENHA_VALIDA);
        if(senha -> getSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioSenhaInvalida(){
    try{
        senha -> setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(senha -> getSenha() == SENHA_INVALIDA)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSenhaValida();
    testarCenarioSenhaInvalida();
    tearDown();
    return estado;
}


// Testes de entidades:

// Teste Unitário Conta:

void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarCenarioConta(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    conta->setCodigo(codigo);
    if(conta->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(SENHA_VALIDA);
    conta->setSenha(senha);
    if(conta->getSenha().getSenha() != SENHA_VALIDA)
        estado = FALHA;
}

int TUConta::run(){
    setUp();
    testarCenarioConta();
    tearDown();
    return estado;
}


// Teste Unitário Destino:

void TUDestino::setUp(){
    destino = new Destino();
    estado = SUCESSO;
}

void TUDestino::tearDown(){
    delete destino;
}

void TUDestino::testarCenarioDestino(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    destino->setCodigo(codigo);
    if(destino->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Nome nome;
    nome.setNome(NOME_VALIDO);
    destino->setNome(nome);
    if(destino->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Data data;
    data.setData(DATA_INICIO_VALIDA);
    destino-> setDataInicio(data);
    if(destino->getDataInicio().getData() != DATA_INICIO_VALIDA)
        estado = FALHA;

    data.setData(DATA_TERMINO_VALIDA);
    destino-> setDataTermino(data);
    if(destino->getDataTermino().getData() != DATA_TERMINO_VALIDA)
        estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setAvaliacao(AVALIACAO_VALIDA);
    destino-> setAvaliacao(avaliacao);
    if(destino->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUDestino::run(){
    setUp();
    testarCenarioDestino();
    tearDown();
    return estado;
}


// Teste Unitário Atividade:

void TUAtividade::setUp(){
    atividade = new Atividade();
    estado = SUCESSO;
}

void TUAtividade::tearDown(){
    delete atividade;
}

void TUAtividade::testarCenarioAtividade(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    atividade->setCodigo(codigo);
    if(atividade->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Nome nome;
    nome.setNome(NOME_VALIDO);
    atividade->setNome(nome);
    if(atividade->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Data data;
    data.setData(DATA_VALIDA);
    atividade->setData(data);
    if(atividade->getData().getData() != DATA_VALIDA)
        estado = FALHA;

    Horario horario;
    horario.setHorario(HORARIO_VALIDO);
    atividade->setHorario(horario);
    if(atividade->getHorario().getHorario() != HORARIO_VALIDO)
        estado = FALHA;

    Duracao duracao;
    duracao.setDuracao(DURACAO_VALIDA);
    atividade->setDuracao(duracao);
    if(atividade->getDuracao().getDuracao() != DURACAO_VALIDA)
        estado = FALHA;

    Dinheiro dinheiro;
    dinheiro.setDinheiro(PRECO_VALIDO);
    atividade->setPreco(dinheiro);
    if(atividade->getPreco().getDinheiro() != PRECO_VALIDO)
        estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setAvaliacao(AVALIACAO_VALIDA);
    atividade->setAvaliacao(avaliacao);
    if (atividade->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUAtividade::run(){
    setUp();
    testarCenarioAtividade();
    tearDown();
    return estado;
}


// Teste Unitário Viagem:

void TUViagem::setUp(){
    viagem = new Viagem();
    estado = SUCESSO;
}

void TUViagem::tearDown(){
    delete viagem;
}

void TUViagem::testarCenarioViagem(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    viagem->setCodigo(codigo);
    if(viagem->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Nome nome;
    nome.setNome(NOME_VALIDO);
    viagem->setNome(nome);
    if(viagem->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setAvaliacao(AVALIACAO_VALIDA);
    viagem->setAvaliacao(avaliacao);
    if(viagem->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUViagem::run(){
    setUp();
    testarCenarioViagem();
    tearDown();
    return estado;
}


// Teste Unitário Hospedagem:

void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedagem;
}

void TUHospedagem::testarCenarioHospedagem(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    hospedagem->setCodigo(codigo);
    if(hospedagem->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Nome nome;
    nome.setNome(NOME_VALIDO);
    hospedagem->setNome(nome);
    if(hospedagem->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Dinheiro dinheiro;
    dinheiro.setDinheiro(DIARIA_VALIDA);
    hospedagem->setDiaria(dinheiro);
    if(hospedagem->getDiaria().getDinheiro() != DIARIA_VALIDA)
        estado = FALHA;

    Avaliacao avaliacao;
    avaliacao.setAvaliacao(AVALIACAO_VALIDA);
    hospedagem->setAvaliacao(avaliacao);
    if(hospedagem->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUHospedagem::run(){
    setUp();
    testarCenarioHospedagem();
    tearDown();
    return estado;
}
