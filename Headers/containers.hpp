#ifndef CONTAINERS_HPP_INCLUDED
#define CONTAINERS_HPP_INCLUDED

#include <map>
#include <string>
#include "entidades.hpp"
#include "dominios.hpp"

using namespace std;

class ContainerViagem {
private:
    map<string, Viagem> container;
public:
    bool criar(Viagem);
    bool excluir(Codigo);
    bool ler(Viagem*);
    bool atualizar(Viagem);
};

class ContainerDestino {
private:
    map<string, Destino> container;
public:
    bool criar(Destino);
    bool excluir(Codigo);
    bool ler(Destino*);
    bool atualizar(Destino);
};

class ContainerConta {
private:
    map<string, Conta> container;
public:
    bool criar(Conta);
    bool excluir(Codigo);
    bool ler(Conta*);
    bool atualizar(Conta);
};

class ContainerHospedagem {
private:
    map<string, Hospedagem> container;
public:
    bool criar(Hospedagem);
    bool excluir(Codigo);
    bool ler(Hospedagem*);
    bool atualizar(Hospedagem);
};

class ContainerAtividade {
private:
    map<string, Atividade> container;
public:
    bool criar(Atividade);
    bool excluir(Codigo);
    bool ler(Atividade*);
    bool atualizar(Atividade);
};

#endif // CONTAINERS_HPP_INCLUDED
