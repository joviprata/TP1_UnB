#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept> // Facilita tratar erros como de argumento inválido
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


class Data{
    private:
        string data;
        bool validar(string);
    public:
        bool setData(string);
        string getData() const;
};

inline string Data::getData() const{
    return data;
}

class Codigo {
    private:
            string codigo;
            bool validar (string);
    public:
            bool setCodigo(string);
            string getCodigo() const;
};

inline string Codigo::getCodigo() const {
    return codigo;
}

class Avaliacao {
    private:
        int avaliacao; // Armazena valor
        bool validar(int); //Método de validação
    public:
        bool setAvaliacao(int);
        int getAvaliacao() const;
};

inline int Avaliacao::getAvaliacao() const{
    return avaliacao;
}

class Duracao {
    public:
        // Inicia com 0 como valor da duracao
        Duracao(int duracao = 0);

        void setDuracao(int duracao);
        
        inline int getDuracao() const;

    private:
        int duracao;
};

inline int Duracao::getDuracao() const {
    return duracao;
}


#endif // DOMINIOS_HPP_INCLUDED
