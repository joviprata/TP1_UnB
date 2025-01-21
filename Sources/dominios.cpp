#include "dominios.hpp"
#include <cctype> // para isdigit e isalpha
#include <iostream>
#include <stdexcept> // facilita tratar erros como de argumento inválido
using namespace std;


// Funções para classe Avaliacao:
void Avaliacao::validar(int avaliacao){
    if ((avaliacao < 0) or (avaliacao > 5))
        throw invalid_argument("Argumento invalido");
}

void Avaliacao::setAvaliacao(int avaliacao){
    validar(avaliacao);
    this->avaliacao = avaliacao;
}


// Funções para a classe Codigo:
void Codigo::validar(string codigo) {
    if (codigo.size() != 6)
        throw invalid_argument("Argumento invalido");

    for (char c: codigo)
        if (!isalnum(c)) // isalnum identifica se o caracter é alfanumérico (A-Z, a-z ou 0-9)
            throw invalid_argument("Argumento invalido");
}

void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
}


// Funções para classe Data:
void Data::validar(string data){
    if (data.size() != 8 or (data[2] != '-' or data[5] != '-'))
          throw invalid_argument("Argumento invalido");

    string str_DD = data.substr(0,2);
    string str_MM = data.substr(3,2);
    string str_AA = data.substr(6,2);

    for (char chr : str_DD) {
        if (!isdigit(chr))
            throw invalid_argument("Argumento invalido");
    }

    for (char chr : str_MM) {
        if (!isdigit(chr))
            throw invalid_argument("Argumento invalido");
    }

    for (char chr : str_AA) {
        if (!isdigit(chr))
            throw invalid_argument("Argumento invalido");
    }

    int DD = stoi(str_DD);
    int MM = stoi(str_MM);
    int AA = stoi(str_AA);

     // Verifica se o mês é válido:
    if (DD < 1 or DD > 31 or MM < 1 or MM > 12 or AA < 0)
         throw invalid_argument("Argumento invalido");

    // Verifica dias válidos para cada mês:
    if ((MM == 2 or MM == 4 or MM == 6 or MM == 9 or MM == 11) and DD > 30){
         throw invalid_argument("Argumento invalido");
    }

    // Verifica novamente o mês de fevereiro considerando anos bissextos:
    if (MM == 2){
        bool bissexto = (AA % 4 == 0 and (AA % 100 != 0 or AA % 400 == 0));
        if ((bissexto and DD > 29) or (!bissexto and DD > 28)){
                 throw invalid_argument("Argumento invalido");
        }
    }
}

void Data::setData(string data){
    validar(data);
    this->data = data;

}


// Funções para a classe Dinheiro:
void Dinheiro::validar(float dinheiro) {
    if (dinheiro < 0.0 or dinheiro > 200000.0) {
        throw invalid_argument("Argumento invalido");
    }
}

void Dinheiro::setDinheiro(float dinheiro) {
    validar(dinheiro);
    this->dinheiro = dinheiro;
}


// Funções para a classe Duracao:
void Duracao::validar(int duracao) {
    if (duracao < 0 or duracao > 360) {
        throw invalid_argument("Argumento invalido");
    }
}

void Duracao::setDuracao(int duracao) {
    validar(duracao);
    this->duracao = duracao;
}


// Funções para classe Horario:
void Horario::validar(string horario) {
    if (horario.size() != 5 or horario[2] != ':')
        throw invalid_argument("Argumento invalido");

    string str_HH = horario.substr(0, 2);
    string str_mm = horario.substr(3, 2);

    for (char chr : str_HH) {
        if (!isdigit(chr))
            throw invalid_argument("Argumento invalido");
    }

    for (char chr : str_mm) {
        if (!isdigit(chr))
            throw invalid_argument("Argumento invalido");
    }

    int HH = stoi(str_HH);
    int mm = stoi(str_mm);
    if (HH > 23 or mm > 59)
        throw invalid_argument("Argumento invalido");
}

void Horario::setHorario(string horario) {
    validar(horario);
    this->horario = horario;
}


// Funções para classe Nome:
void Nome::validar(string nome) {
    if (nome.size() > 30)
        throw invalid_argument("Argumento invalido");
}

void Nome::setNome(string nome) {
    validar(nome);
    this->nome = nome;
}


// Funções para classe Senha:
void Senha::validar(string senha) {
    int contador = 0;
    bool duplicata = false, crescente = true, decrescente = true;

    for (int i = 0; senha[i] != '\0'; i++) {
        for (int j = i + 1; senha[j] != '\0'; j++) {
            if (senha[i] == senha[j]) {
                duplicata = true;
            }

            if (senha[i] > senha[j]) {
                crescente = false;
            } else if (senha[i] < senha[j]) {
                decrescente = false;
            }
        }
        contador++;
    }

    if((!duplicata and !crescente and !decrescente) == false){
        throw invalid_argument("Argumento invalido.");
    }
}

void Senha::setSenha(string senha) {
    validar(senha);
    this->senha = senha;
}
