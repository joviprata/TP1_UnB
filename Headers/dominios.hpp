
#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept> // Facilita tratar erros como de argumento inválido
#include <bits/stdc++.h> // Importa bibliotecas padrao de C++ - iostream, vector, string, etc
using namespace std; // Facilita ao tornar desnecessario escrever std:: antes de classes padrao do C++

//---------------------------------------------------------------------
// DOMINIO HORARIO

/**
 * João Victor Prata Tavares Pereira - 202028857
 * @brief Classe para representar um horário no formato HH:MM.
 *
 * Regras de Formato:
 * - Formato: HH:MM
 * - HH: de 00 a 23
 * - MM: de 00 a 59
 */
class Horario {
    private:
            string horario;
            void validar(string);
    public:
            void setHorario(string);
            string getHorario() const;
};

inline string Horario::getHorario() const {
    return horario;
}

//---------------------------------------------------------------------
// DOMINIO NOME

/**
 * João Victor Prata Tavares Pereira - 202028857
 * @brief Classe para representar um Nome com até 30 caracteres.
 *
 * Regras de Formato:
 * - Texto de até 30 caracteres.
 */
class Nome {
    private:
            string nome;
            void validar(string);
    public:
            void setNome(string);
            string getNome() const;
};

inline string Nome::getNome() const {
    return nome;
}

//---------------------------------------------------------------------
// DOMINIO SENHA

/**
 * Nikolas Negrão Pessoa - 202024722
 * @brief Classe para representar uma Senha de cinco dígitos.
 *
 * Regras de Formato:
 * - Cinco dígitos (0-9).
 * - Não há dígito duplicado.
 * - Os cinco dígitos não podem estar em ordem crescente nem decrescente.
 */
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

//---------------------------------------------------------------------
// DOMINIO DATA

/**
 * Gabriel Balder Oliveira Lemos - 231013618
 * @brief Classe para representar uma Data no formato DD-MM-AA.
 *
 * Regras de Formato:
 * - Formato: DD-MM-AA
 * - DD: de 00 a 31
 * - MM: de 01 a 12
 * - AA: de 00 a 99
 * - Levar em consideração anos bissextos.
 */
class Data{
    private:
        string data;
        void validar(string);
    public:
        void setData(string);
        string getData() const;
};

inline string Data::getData() const{
    return data;
}

//---------------------------------------------------------------------
// DOMINIO CODIGO

/**
 * Mariana Soares Oliveira - 231013663
 * @brief Classe para representar um Código de seis caracteres.
 *
 * Regras de Formato:
 * - Seis caracteres.
 * - Cada caractere pode ser letra (A-Z, a-z) ou dígito (0-9).
 */
class Codigo {
    private:
        string codigo;
        void validar (string);
    public:
        void setCodigo(string);
        string getCodigo() const;
};


inline string Codigo::getCodigo() const {
    return codigo;
}

//---------------------------------------------------------------------
// DOMINIO AVALIACAO

/**
 * Mauro Ribeiro da Silva - 231013592
 * @brief Classe para representar uma Avaliação de 0 a 5.
 *
 * Regras de Formato:
 * - Apenas dígitos de 0 a 5.
 */
class Avaliacao {
    private:
        int avaliacao;
        void validar(int);
    public:
        void setAvaliacao(int);
        int getAvaliacao() const;
};

inline int Avaliacao::getAvaliacao() const{
    return avaliacao;
}


//---------------------------------------------------------------------
// DOMINIO DURACAO

/**
 * Isabela Soares Furlan - 231013636
 * @brief Classe para representar a duração em minutos.
 *
 * Regras de Formato:
 * - Valor entre 0 e 360.
 */
class Duracao {
    private:
        int duracao;
        void validar(int duracao);
    
    public:
        void setDuracao(int duracao);
        inline int getDuracao() const;
};

inline int Duracao::getDuracao() const {
    return duracao;
}

//---------------------------------------------------------------------
// DOMINIO DINHEIRO

/**
 * Isabela Soares Furlan - 231013636
 * @brief Classe para representar um valor monetário.
 *
 * Regras de Formato:
 * - Valor entre 0,00 e 200.000,00.
 */
class Dinheiro {
    private:
        double dinheiro;
        void validar(double dinheiro);

    public:
        void setDinheiro(double dinheiro);
        inline double getDinheiro() const;
};

inline double Dinheiro::getDinheiro() const {
    return dinheiro;
}


#endif // DOMINIOS_HPP_INCLUDED
