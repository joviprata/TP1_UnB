#include "dominios.hpp"

// Função para classe Horario, Data, etc
bool string_eh_int(string str) {
    for (char chr : str) {
        if (!isdigit(chr))
            return false;
    }
    return true;
}

// Funções para classe Horario:
bool Horario::validar(string horario) {
    if (horario.size() != 5 or horario[2] != ':')
        return false;

    string str_HH = horario.substr(0, 2);
    string str_mm = horario.substr(3, 2);
    if (!string_eh_int(str_HH) or !string_eh_int(str_mm))
        return false;

    int HH = stoi(str_HH);
    int mm = stoi(str_mm);
    if (HH > 23 or mm > 59)
        return false;

    return true;
}

bool Horario::setHorario(string horario) {
    if(!validar(horario))
        return false;
    this->horario = horario;
    return true;
}


// Funções para classe Nome:
bool Nome::validar(string nome) {
    if (nome.size() > 30)
        return false;
    return true;
}

bool Nome::setNome(string nome) {
    if(!validar(nome))
        return false;
    this->nome = nome;
    return true;
}
