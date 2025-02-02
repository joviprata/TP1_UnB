#include "stubs.hpp"

// -------------------------------------------------------------------------------------------
// Definições de constantes.

const string StubServicoAutenticacao::TRIGGER_FALHA_AUTENTICACAO = "%*/*";
const string StubServicoAutenticacao::TRIGGER_ERRO_SISTEMA_AUTENTICACAO = "%*/*";
const string StubServicoEntidades::TRIGGER_FALHA_CODIGO_INVALIDO = "%*/*";
const string StubServicoEntidades::TRIGGER_ERRO_CODIGO_INVALIDO = "%*/*";
const string StubServicoEntidades::TRIGGER_FALHA_NOME_INVALIDO = "";
const string StubServicoEntidades::TRIGGER_ERRO_NOME_INVALIDO = "";
const int StubServicoEntidades::TRIGGER_FALHA_AVALIACAO_INVALIDA = 6;
const int StubServicoEntidades::TRIGGER_ERRO_AVALIACAO_INVALIDA = 6;
const string StubServicoConta::TRIGGER_FALHA_CONTA= "%*/*";
const string StubServicoConta::TRIGGER_ERRO_SISTEMA_CONTA = "";
const string StubServicoAutenticacao::TRIGGER_FALHA_SENHA_INVALIDA = "12345";
const string StubServicoAutenticacao::TRIGGER_ERRO_SENHA_INVALIDA = "12345";
const string StubServicoEntidades::TRIGGER_FALHA_DATA_INICIO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_ERRO_DATA_INICIO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_FALHA_DATA_TERMINO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_ERRO_DATA_TERMINO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_FALHA_DATA_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_ERRO_DATA_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_FALHA_HORARIO_INVALIDO = "24:60";
const string StubServicoEntidades::TRIGGER_ERRO_HORARIO_INVALIDO = "24:60";
const int StubServicoEntidades::TRIGGER_FALHA_DURACAO_INVALIDA = 361;
const int StubServicoEntidades::TRIGGER_ERRO_DURACAO_INVALIDA = 361;
const float StubServicoEntidades::TRIGGER_FALHA_PRECO_INVALIDO = 200001.0;
const float StubServicoEntidades::TRIGGER_ERRO_PRECO_INVALIDO = 200001.0;
const float StubServicoEntidades::TRIGGER_FALHA_DIARIA_INVALIDA = 200001.0;
const float StubServicoEntidades::TRIGGER_ERRO_DIARIA_INVALIDA = 200001.0;

// -------------------------------------------------------------------------------------------
// Implementação de método.

bool StubServicoAutenticacao::autenticar(const Codigo &codigo, const Senha &senha) {

    std::string codigoValor = codigo.getCodigo();

    if (codigo.getCodigo() == TRIGGER_FALHA_AUTENTICACAO) {
        return false;
    }
    if (codigo.getCodigo() == TRIGGER_ERRO_SISTEMA_AUTENTICACAO) {
        throw runtime_error("Erro de sistema");
    }
    return true;
}

bool StubServicoEntidades::criar(Viagem viagem) {
    if (viagem.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (viagem.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (viagem.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (viagem.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (viagem.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (viagem.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::excluir(Viagem viagem) {
    if (viagem.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (viagem.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::ler(Viagem* viagem) {
    if (viagem->getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (viagem->getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::atualizar(Viagem viagem) {
    if (viagem.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (viagem.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (viagem.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (viagem.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (viagem.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (viagem.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoConta::criar(Conta conta){
    if (conta.getCodigo().getCodigo() == TRIGGER_FALHA_CONTA){
        return false;
    }
    if (conta.getCodigo().getCodigo() == TRIGGER_ERRO_SISTEMA_CONTA){
        throw runtime_error("Erro de sistema");
    }
    if (conta.getSenha().getSenha() == TRIGGER_FALHA_CONTA){
        return false;
    }
    if (conta.getSenha().getSenha() == TRIGGER_ERRO_SISTEMA_CONTA){
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoConta::excluir(Codigo codigo){
    if (codigo.getCodigo() == TRIGGER_FALHA_CONTA){
        return false;
    }
    if (codigo.getCodigo() == TRIGGER_ERRO_SISTEMA_CONTA){
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoConta::ler(Conta* conta){
    if (conta->getCodigo().getCodigo() == TRIGGER_FALHA_CONTA){
        return false;
    }
    if (conta->getCodigo().getCodigo() == TRIGGER_ERRO_SISTEMA_CONTA){
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoConta::atualizar(Conta conta) {
    if (conta.getCodigo().getCodigo() == TRIGGER_FALHA_CONTA) {
        return false;
    }
    if (conta.getCodigo().getCodigo() == TRIGGER_ERRO_SISTEMA_CONTA) {
        throw runtime_error("Erro de sistema");
    }

    if (conta.getSenha().getSenha() == TRIGGER_FALHA_CONTA) {
        return false;
    }
    if (conta.getSenha().getSenha() == TRIGGER_ERRO_SISTEMA_CONTA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::criar(Destino destino) {
    if (destino.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (destino.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (destino.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getDataInicio().getData() == TRIGGER_FALHA_DATA_INICIO_INVALIDA) {
        return false;
    }
    if (destino.getDataInicio().getData() == TRIGGER_ERRO_DATA_INICIO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getDataTermino().getData() == TRIGGER_FALHA_DATA_TERMINO_INVALIDA) {
        return false;
    }
    if (destino.getDataTermino().getData() == TRIGGER_ERRO_DATA_TERMINO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }
    
    if (destino.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (destino.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::excluir(Destino destino) {
    if (destino.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (destino.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::ler(Destino* destino) {
    if (destino->getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (destino->getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::atualizar(Destino destino) {
    if (destino.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (destino.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (destino.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getDataInicio().getData() == TRIGGER_FALHA_DATA_INICIO_INVALIDA) {
        return false;
    }
    if (destino.getDataInicio().getData() == TRIGGER_ERRO_DATA_INICIO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getDataTermino().getData() == TRIGGER_FALHA_DATA_TERMINO_INVALIDA) {
        return false;
    }
    if (destino.getDataTermino().getData() == TRIGGER_ERRO_DATA_TERMINO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (destino.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (destino.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true; 
}


bool StubServicoEntidades::criar(Hospedagem hospedagem) {
    if (hospedagem.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (hospedagem.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (hospedagem.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (hospedagem.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (hospedagem.getDiaria().getDinheiro() == TRIGGER_FALHA_DIARIA_INVALIDA) {
        return false;
    }
    if (hospedagem.getDiaria().getDinheiro() == TRIGGER_ERRO_DIARIA_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (hospedagem.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (hospedagem.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::excluir(Hospedagem hospedagem) {
    if (hospedagem.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (hospedagem.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::ler(Hospedagem* hospedagem) {
    if (hospedagem->getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (hospedagem->getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::atualizar(Hospedagem hospedagem) {
    if (hospedagem.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (hospedagem.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (hospedagem.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (hospedagem.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (hospedagem.getDiaria().getDinheiro() == TRIGGER_FALHA_DIARIA_INVALIDA) {
        return false;
    }
    if (hospedagem.getDiaria().getDinheiro() == TRIGGER_ERRO_DIARIA_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (hospedagem.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (hospedagem.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}


bool StubServicoEntidades::criar(Atividade atividade) {
    if (atividade.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (atividade.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (atividade.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getData().getData() == TRIGGER_FALHA_DATA_INVALIDA) {
        return false;
    }
    if (atividade.getData().getData() == TRIGGER_ERRO_DATA_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getHorario().getHorario() == TRIGGER_FALHA_HORARIO_INVALIDO) {
        return false;
    }
    if (atividade.getHorario().getHorario() == TRIGGER_ERRO_HORARIO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getDuracao().getDuracao() == TRIGGER_FALHA_DURACAO_INVALIDA) {
        return false;
    }
    if (atividade.getDuracao().getDuracao() == TRIGGER_ERRO_DURACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getPreco().getDinheiro() == TRIGGER_FALHA_PRECO_INVALIDO) {
        return false;
    }
    if (atividade.getPreco().getDinheiro() == TRIGGER_ERRO_PRECO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (atividade.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::excluir(Atividade atividade) {
    if (atividade.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (atividade.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::ler(Atividade* atividade) {
    if (atividade->getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (atividade->getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

bool StubServicoEntidades::atualizar(Atividade atividade) {
    if (atividade.getCodigo().getCodigo() == TRIGGER_FALHA_CODIGO_INVALIDO) {
        return false;
    }
    if (atividade.getCodigo().getCodigo() == TRIGGER_ERRO_CODIGO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getNome().getNome() == TRIGGER_FALHA_NOME_INVALIDO) {
        return false;
    }
    if (atividade.getNome().getNome() == TRIGGER_ERRO_NOME_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getData().getData() == TRIGGER_FALHA_DATA_INVALIDA) {
        return false;
    }
    if (atividade.getData().getData() == TRIGGER_ERRO_DATA_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getHorario().getHorario() == TRIGGER_FALHA_HORARIO_INVALIDO) {
        return false;
    }
    if (atividade.getHorario().getHorario() == TRIGGER_ERRO_HORARIO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getDuracao().getDuracao() == TRIGGER_FALHA_DURACAO_INVALIDA) {
        return false;
    }
    if (atividade.getDuracao().getDuracao() == TRIGGER_ERRO_DURACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getPreco().getDinheiro() == TRIGGER_FALHA_PRECO_INVALIDO) {
        return false;
    }
    if (atividade.getPreco().getDinheiro() == TRIGGER_ERRO_PRECO_INVALIDO) {
        throw runtime_error("Erro de sistema");
    }

    if (atividade.getAvaliacao().getAvaliacao() == TRIGGER_FALHA_AVALIACAO_INVALIDA) {
        return false;
    }
    if (atividade.getAvaliacao().getAvaliacao() == TRIGGER_ERRO_AVALIACAO_INVALIDA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}
