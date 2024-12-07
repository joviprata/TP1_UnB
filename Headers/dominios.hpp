#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept> // Facilita tratar erros como de argumento inválido
#include <bits/stdc++.h> // Importa bibliotecas padrão de C++ - iostream, vector, string, etc
using namespace std; // Facilita ao tornar desnecessário escrever std:: antes de classes padrão do C++

//---------------------------------------------------------------------
// DOCUMENTAÇÃO FEITA POR MARIANA SOARES OLIVEIRA (231011663) E ISABELA SOARES FURLAN (231013636)

/**
 * @file dominios.hpp
 * @brief Declaração de classes que representam os dominios do sistema.
 *
 * Este arquivo contém as definições de classes para Horário, Nome, Senha, Data, Código, Avaliação, Duração e Dinheiro. Cada classe encapsula atributos e
 * comportamentos específicos de seus respectivos dominios.
 */

//---------------------------------------------------------------------
// DOMÍNIO HORÁRIO

/**
 * @brief Classe que representa um horário no formato HH:MM.
 *
 * Regras de formato:
 * - Formato: HH:MM
 * - HH: de 00 a 23
 * - MM: de 00 a 59
 *
 * @throw std::invalid_argument se o formato ou valores do horário forem inválidos.
 * 
 * Desenvolvido por: João Victor Prata Tavares Pereira - 202028857
 */
class Horario {
private:
    string horario; ///< Valor do horário. 
    void validar(string); ///< Valida o horário. Lança exceção se inválido. 

public:
    void setHorario(string); ///< Define o horário, validando o formato e valores. 
    string getHorario() const; ///< Obtém o horário. 
};

inline string Horario::getHorario() const {
    return horario;
}

//---------------------------------------------------------------------
// DOMÍNIO NOME

/**
 * @brief Classe que representa um nome com até 30 caracteres.
 *
 * Regras de formato:
 * - Texto de até 30 caracteres.
 *
 * @throw std::invalid_argument se o nome ultrapassar 30 caracteres.
 * 
 * Desenvolvido por: João Victor Prata Tavares Pereira - 202028857
 */
class Nome {
private:
    string nome; ///< Valor do nome. 
    void validar(string); ////< Valida o nome. Lança exceção se inválido. 

public:
    void setNome(string); ///< Define o nome, validando o comprimento. 
    string getNome() const; ///< Obtém o nome. 
};

inline string Nome::getNome() const {
    return nome;
}

//---------------------------------------------------------------------
// DOMÍNIO SENHA

/**
 * @brief Classe que representa uma senha de cinco dígitos.
 *
 * Regras de formato:
 * - Cinco dígitos (0-9).
 * - Não há dígito duplicado.
 * - Os cinco dígitos não podem estar em ordem crescente nem decrescente.
 *
 * @throw std::invalid_argument se a senha não atender aos requisitos.
 * 
 * Desenvolvido por: Nikolas Negrão Pessoa - 202024722
 */
class Senha {
private:
    string senha; ///< Valor da senha. 
    void validar(string); ///< Valida a senha. Lança exceção se inválida. 

public:
    void setSenha(string); ///< Define a senha, validando as regras. 
    string getSenha() const; ///< Obtém a senha. 
};

inline string Senha::getSenha() const {
    return senha;
}

//---------------------------------------------------------------------
// DOMÍNIO DATA

/**
 * @brief Classe que representa uma data no formato DD-MM-AA.
 *
 * Regras de formato:
 * - Formato: DD-MM-AA
 * - DD: de 00 a 31
 * - MM: de 01 a 12
 * - AA: de 00 a 99
 * - Levar em consideração anos bissextos.
 *
 * @throw std::invalid_argument se a data não atender aos requisitos.
 * 
 * Desenvolvido por: Gabriel Balder Oliveira Lemos - 231013618
 */
class Data {
private:
    string data; ///< Valor da data. 
    void validar(string); ///< Valida a data. Lança exceção se inválida. 

public:
    void setData(string); ///< Define a data, validando o formato e valores. 
    string getData() const; ///< Obtém a data. 
};

inline string Data::getData() const {
    return data;
}

//---------------------------------------------------------------------
// DOMÍNIO CÓDIGO

/**
 * @brief Classe que representa um código de seis caracteres.
 *
 * Regras de formato:
 * - Seis caracteres.
 * - Cada caractere pode ser letra (A-Z, a-z) ou dígito (0-9).
 *
 * @throw std::invalid_argument se o código não atender aos requisitos.
 * 
 * Desenvolvido por: Mariana Soares Oliveira - 231013663
 */
class Codigo {
private:
    string codigo; ///< Valor do código. 
    void validar(string); ///< Valida o código. Lança exceção se inválido. 

public:
    void setCodigo(string); ///< Define o código, validando as regras. 
    string getCodigo() const; ///< Obtém o código. 
};

inline string Codigo::getCodigo() const {
    return codigo;
}

//---------------------------------------------------------------------
// DOMÍNIO AVALIAÇÃO

/**
 * @brief Classe que representa uma avaliação de 0 a 5.
 *
 * Regras de formato:
 * - Apenas dígitos de 0 a 5.
 *
 * @throw std::invalid_argument se a avaliação não atender aos requisitos.
 * 
 * Desenvolvido por: Mauro Ribeiro da Silva - 231013592
 */
class Avaliacao {
private:
    int avaliacao; ///< Valor da avaliação.
    void validar(int); ///< Valida a avaliação. Lança exceção se inválida. 

public:
    void setAvaliacao(int); ///< Define a avaliação, validando as regras. 
    int getAvaliacao() const; ///< Obtém a avaliação. 
};

inline int Avaliacao::getAvaliacao() const {
    return avaliacao;
}

//---------------------------------------------------------------------
// DOMÍNIO DURAÇÃO

/**
 * @brief Classe que representa uma duração em dias.
 *
 * Regras de formato:
 * - Valor entre 0 e 360.
 *
 * @throw std::invalid_argument se a duração estiver fora do intervalo permitido.
 * 
 * Desenvolvido por: Isabela Soares Furlan - 231013636
 */
class Duracao {
private:
    int duracao; ///< Valor da duração em dias. 
    void validar(int); ///<Valida a duração. Lança exceção se inválida. 

public:
    void setDuracao(int); ///< Define a duração, validando o intervalo.
    inline int getDuracao() const; ///< Obtém a duração.
};

inline int Duracao::getDuracao() const {
    return duracao;
}

//---------------------------------------------------------------------
// DOMÍNIO DINHEIRO

/**
 * @brief Classe que representa um valor monetário.
 *
 * Regras de formato:
 * - Valor entre 0,00 e 200.000,00.
 *
 * @throw std::invalid_argument se o valor estiver fora do intervalo permitido.
 * 
 * Desenvolvido por: Isabela Soares Furlan - 231013636
 */
class Dinheiro {
private:
    double dinheiro; ///< Valor do dinheiro. 
    void validar(double); ///< Valida o valor monetário. Lança exceção se inválido. 

public:
    void setDinheiro(double); ///< Define o valor monetário, validando o intervalo. 
    inline double getDinheiro() const; ///< Obtém o valor monetário.
};

inline double Dinheiro::getDinheiro() const {
    return dinheiro;
}

#endif // DOMINIOS_HPP_INCLUDED