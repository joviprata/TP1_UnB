#include "containers.hpp"

// Implementação da classe ContainerViagem

bool ContainerViagem::criar(Viagem viagem) {
    if (container.find(viagem.getCodigo().getCodigo()) != container.end()) {
        return false;
    }
    container[viagem.getCodigo().getCodigo()] = viagem;
    return true;
}

bool ContainerViagem::excluir(Codigo codigo) {
    auto it = container.find(codigo.getCodigo());
    if (it != container.end()) {
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerViagem::ler(Viagem* viagem) {
    auto it = container.find(viagem->getCodigo().getCodigo());
    if (it != container.end()) {
        *viagem = it->second;
        return true;
    }
    return false;
}

bool ContainerViagem::atualizar(Viagem viagem) {
    auto it = container.find(viagem.getCodigo().getCodigo());
    if (it != container.end()) {
        it->second = viagem;
        return true;
    }
    return false;
}

// Implementação da classe ContainerDestino

bool ContainerDestino::criar(Destino destino) {
    if (container.find(destino.getCodigo().getCodigo()) != container.end()) {
        return false;
    }
    container[destino.getCodigo().getCodigo()] = destino;
    return true;
}

bool ContainerDestino::excluir(Codigo codigo) {
    auto it = container.find(codigo.getCodigo());
    if (it != container.end()) {
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerDestino::ler(Destino* destino) {
    auto it = container.find(destino->getCodigo().getCodigo());
    if (it != container.end()) {
        *destino = it->second;
        return true;
    }
    return false;
}

bool ContainerDestino::atualizar(Destino destino) {
    auto it = container.find(destino.getCodigo().getCodigo());
    if (it != container.end()) {
        it->second = destino;
        return true;
    }
    return false;
}

// Implementação da classe ContainerConta

bool ContainerConta::criar(Conta conta) {
    if (container.find(conta.getCodigo().getCodigo()) != container.end()) {
        return false;
    }
    container[conta.getCodigo().getCodigo()] = conta;
    return true;
}

bool ContainerConta::excluir(Codigo codigo) {
    auto it = container.find(codigo.getCodigo());
    if (it != container.end()) {
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerConta::ler(Conta* conta) {
    auto it = container.find(conta->getCodigo().getCodigo());
    if (it != container.end()) {
        *conta = it->second;
        return true;
    }
    return false;
}

bool ContainerConta::atualizar(Conta conta) {
    auto it = container.find(conta.getCodigo().getCodigo());
    if (it != container.end()) {
        it->second = conta;
        return true;
    }
    return false;
}

// Implementação da classe ContainerHospedagem

bool ContainerHospedagem::criar(Hospedagem hospedagem) {
    if (container.find(hospedagem.getCodigo().getCodigo()) != container.end()) {
        return false;
    }
    container[hospedagem.getCodigo().getCodigo()] = hospedagem;
    return true;
}

bool ContainerHospedagem::excluir(Codigo codigo) {
    auto it = container.find(codigo.getCodigo());
    if (it != container.end()) {
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerHospedagem::ler(Hospedagem* hospedagem) {
    auto it = container.find(hospedagem->getCodigo().getCodigo());
    if (it != container.end()) {
        *hospedagem = it->second;
        return true;
    }
    return false;
}

bool ContainerHospedagem::atualizar(Hospedagem hospedagem) {
    auto it = container.find(hospedagem.getCodigo().getCodigo());
    if (it != container.end()) {
        it->second = hospedagem;
        return true;
    }
    return false;
}

// Implementação da classe ContainerAtividade

bool ContainerAtividade::criar(Atividade atividade) {
    if (container.find(atividade.getCodigo().getCodigo()) != container.end()) {
        return false;
    }
    container[atividade.getCodigo().getCodigo()] = atividade;
    return true;
}

bool ContainerAtividade::excluir(Codigo codigo) {
    auto it = container.find(codigo.getCodigo());
    if (it != container.end()) {
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerAtividade::ler(Atividade* atividade) {
    auto it = container.find(atividade->getCodigo().getCodigo());
    if (it != container.end()) {
        *atividade = it->second;
        return true;
    }
    return false;
}

bool ContainerAtividade::atualizar(Atividade atividade) {
    auto it = container.find(atividade.getCodigo().getCodigo());
    if (it != container.end()) {
        it->second = atividade;
        return true;
    }
    return false;
}
