#include "dominios.hpp"
#include <cctype> // para isdigit e isalpha
#include <iostream>
#include <stdexcept> // Facilita tratar erros como de argumento inválido
using namespace std;

// Função para classe Horario, Data, etc
bool string_eh_int(string str) {
    for (char chr : str) {
        if (!isdigit(chr))
            return false;
    }
    return true;
}


// Funções para classe Horario:
void Horario::validar(string horario) {
    if (horario.size() != 5 or horario[2] != ':')
        throw invalid_argument("Argumento invalido");

    string str_HH = horario.substr(0, 2);
    string str_mm = horario.substr(3, 2);
    if (!string_eh_int(str_HH) or !string_eh_int(str_mm))
        throw invalid_argument("Argumento invalido");

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
bool Senha::validar(string senha) {
    if (!string_eh_int(senha))
        return false;

    int contador = 0;
    bool tamanho, duplicata = false, crescente = true, decrescente = true;

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

    tamanho = (contador == 5);

    return tamanho && !duplicata && !crescente && !decrescente;
}

bool Senha::setSenha(string senha) {
    if (!validar(senha)) {
        return false;
    }

    this->senha = senha;
    return true;
}


// Funções para classe data:
bool Data::validar(string data){
    if (data.size() != 8 or (data[2] != '-' or data[5] != '-'))
        return false;

    string str_DD = data.substr(0,2);
    string str_MM = data.substr(3,2);
    string str_AA = data.substr(6,2);

    if (!string_eh_int(str_DD) or !string_eh_int(str_MM) or !string_eh_int(str_AA))
        return false;

    int DD = stoi(str_DD);
    int MM = stoi(str_MM);
    int AA = stoi(str_AA);

     // Verifica se o mes e valido
    if (DD > 31 or MM > 12 or AA > 99 or DD <= 0 or MM < 1 or AA <= 00)
        return false;

    // Verifica dias validos para cada mes
    if ((MM == 4 or MM == 6 or MM == 9 or MM == 11 or MM == 2)and DD > 30){
        return false;
    }

    if (MM == 2){
        bool bissexto = (AA % 4 == 0 and (AA % 100 != 0 or AA % 400 == 0));
        if ((bissexto and DD > 29) or (!bissexto and DD > 28)){
                return false;
        }
    }

    return true;
}

bool Data::setData(string data){
    if (!validar(data))
        return false;
    this ->data = data;
    return true;
}

// Funções para a classe Codigo:
bool Codigo::validar(string codigo) {

    if (codigo.size() != 6)
        return false;

    for (char c: codigo)
        if (!isalnum(c)) // isalnum identifica se o caracter é alfanumérico (A-Z, a-z ou 0-9)
            return false;

    return true;
}

bool Codigo::setCodigo (string codigo) {
    if(!validar(codigo)) {
        return false;
    }
    this->codigo = codigo;
    return true;
}


//Funções para classe Avaliacao:
bool Avaliacao::validar(int avaliacao){

    for (int i = 0; i<=5; i++){
        if (avaliacao==i){
            return true;
        }
    }
    cout << "Valor invalido" << endl;
    return false;
}

bool Avaliacao::setAvaliacao(int avaliacao){
    if(!validar(avaliacao))
        return false;
    this->avaliacao = avaliacao;
    return true;
}

// Funções para a classe Duracao
bool Duracao::validar(int duracao) {
    // Verifica se duracao maior que 0 e menor que 360, ou seja, válida
    if (duracao > 0) {
        if (duracao < 360) {
            return true;
        }
    }
    return false;
}

bool Duracao::setDuracao(int duracao) {
    // Se "validar" retorna falso
    if (!validar(duracao))
        cout << "Duração Inválida.\n";

    this->duracao = duracao;
    return true;
}

// Funções para a classe Dinheiro
bool Dinheiro::validar(double dinheiro) {
    // Apenas valore maiores que 0,00 e menores ou iguais a 200000,00
    if (dinheiro > 0.00) {
        if (dinheiro < 200000.00) {
            return true;
        }
    }
    return false;
}

bool Dinheiro::setDinheiro(double dinheiro) {
    if (!validar(dinheiro))
        cout << "Valor Inválido.\n";

    this->dinheiro = dinheiro;
    return true;
}
