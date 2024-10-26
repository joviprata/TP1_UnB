#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <bits/stdc++.h> // Importa bibliotecas padrao de C++ - iostream, vector, string, etc
using namespace std; // Facilita ao tornar desnecessario escrever std:: antes de classes padrao do C++


class Horario {
    private:
            string horario;
            bool validar(string);
    public:
            bool setHorario(string);
            string getHorario() const;
};

inline string Horario::getHorario() const {
    return horario;
}


class Nome {
    private:
            string nome;
            bool validar(string);
    public:
            bool setNome(string);
            string getNome() const;
};

inline string Nome::getNome() const {
    return nome;
}


class Senha {
    private:
        string senha;
        bool validar(string);

    public:
        bool setSenha(string);
        string getSenha() const;
};

inline string Senha::getSenha() const {
    return senha;
}

#endif // DOMINIOS_HPP_INCLUDED
