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
const string StubServicoEntidades::TRIGGER_FALHA_DATA_INICIO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_ERRO_DATA_INICIO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_FALHA_DATA_TERMINO_INVALIDA = "32-13-24";
const string StubServicoEntidades::TRIGGER_ERRO_DATA_TERMINO_INVALIDA = "32-13-24";


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
