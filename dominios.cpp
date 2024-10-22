#include "dominios.hpp"

bool Horario::validar(string horario) {
    if (horario.size() != 5 or horario[2] != ':')
        return false;

    string str_HH = horario.substr(0, 2);
    string str_mm = horario.substr(3, 2);
    if (!isdigit(str_HH[0]) or !isdigit(str_HH[1])
        or !isdigit(str_mm[0]) or !isdigit(str_mm[1]))
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
