#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
using namespace std;

//---------------------------------------------------------------------
// ENTIDADE VIAGEM

/**
 * @brief Classe que representa uma Viagem.
 * 
 * A classe Viagem contém os atributos e métodos para manipulação dos dados
 * de uma viagem, incluindo código, nome e avaliação.
 */
class Viagem{
    private:
        Codigo codigo;
        Nome nome;
        Avaliacao avaliacao;
    public:
        /**
         * @brief Define o código da viagem.
         * 
         * @param codigo Objeto do tipo Codigo.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da viagem.
         * 
         * @return Objeto do tipo Codigo.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da viagem.
         * 
         * @param nome Objeto do tipo Nome.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da viagem.
         * 
         * @return Objeto do tipo Nome.
         */
        Nome getNome() const;

        /**
         * @brief Define a avaliação da viagem.
         * 
         * @param avaliacao Objeto do tipo Avaliacao.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da viagem.
         * 
         * @return Objeto do tipo Avaliacao.
         */
        Avaliacao getAvaliacao() const;
};

inline void Viagem::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline void Viagem::setNome(const Nome &nome){
    this->nome = nome;
}

inline void Viagem::setAvaliacao(const Avaliacao &avaliacao){
    this->avaliacao = avaliacao;
}

inline Codigo Viagem::getCodigo() const{
    return codigo;
}

inline Nome Viagem::getNome() const{
    return nome;
}

inline Avaliacao Viagem::getAvaliacao() const{
    return avaliacao;
}

//---------------------------------------------------------------------
// ENTIDADE DESTINO

/**
 * @brief Classe que representa um Destino.
 * 
 * A classe Destino contém os atributos e métodos para manipulação dos dados
 * de um destino de viagem, incluindo código, nome, datas de início e término, e avaliação.
 */
class Destino {
    private:
        Codigo codigo; ///< Código do destino.
        Nome nome; ///< Nome do destino.
        Data dataInicio; ///< Data de início do destino.
        Data dataTermino; ///< Data de término do destino.
        Avaliacao avaliacao; ///< Avaliação do destino.

    public:
        /**
         * @brief Define o código do destino.
         * 
         * @param codigo Objeto do tipo Codigo.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código do destino.
         * 
         * @return Objeto do tipo Codigo.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome do destino.
         * 
         * @param nome Objeto do tipo Nome.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome do destino.
         * 
         * @return Objeto do tipo Nome.
         */
        Nome getNome() const;

         /**
         * @brief Define a data de início do destino.
         * 
         * @param dataInicio Objeto do tipo Data.
         */
        void setDataInicio(const Data&);

        /**
         * @brief Retorna a data de início do destino.
         * 
         * @return Objeto do tipo Data.
         */
        Data getDataInicio() const;

        /**
         * @brief Define a data de término do destino.
         * 
         * @param dataTermino Objeto do tipo Data.
         */
        void setDataTermino(const Data&);

        /**
         * @brief Retorna a data de término do destino.
         * 
         * @return Objeto do tipo Data.
         */
        Data getDataTermino() const;

        /**
         * @brief Define a avaliação do destino.
         * 
         * @param avaliacao Objeto do tipo Avaliacao.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação do destino.
         * 
         * @return Objeto do tipo Avaliacao.
         */
        Avaliacao getAvaliacao() const;
};

inline void Destino::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Destino::getCodigo() const{
    return codigo;
}

inline void Destino::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Destino::getNome() const{
    return nome;
}

inline void Destino::setDataInicio(const Data &dataInicio){
    this->dataInicio = dataInicio;
}

inline Data Destino::getDataInicio() const{
    return dataInicio;
}

inline void Destino::setDataTermino(const Data &dataTermino){
    this->dataTermino = dataTermino;
}

inline Data Destino::getDataTermino() const{
    return dataTermino;
}

inline void Destino::setAvaliacao(const Avaliacao &avaliacao){
    this->avaliacao = avaliacao;
}

inline Avaliacao Destino::getAvaliacao() const{
    return avaliacao;
}

//---------------------------------------------------------------------
// ENTIDADE CONTA

/**
 * @brief Classe que representa uma Conta.
 * 
 * A classe Conta contém os atributos e métodos para manipulação dos dados 
 * de uma conta no sistema, incluindo código e senha.
 */
class Conta{
    private:
        Codigo codigo; ///< Código da conta.
        Senha senha; ///< Senha da conta.
    public:
        /**
         * @brief Define o código da conta.
         * 
         * @param codigo Objeto do tipo Codigo.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da conta.
         * 
         * @return Objeto do tipo Codigo.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define a senha da conta.
         * 
         * @param senha Objeto do tipo Senha.
         */
        void setSenha(const Senha&);

         /**
         * @brief Retorna a senha da conta.
         * 
         * @return Objeto do tipo Senha.
         */
        Senha getSenha() const;

};

inline void Conta::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Conta::getCodigo() const{
    return codigo;
}

inline void Conta::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Conta::getSenha() const{
    return senha;
}

//---------------------------------------------------------------------
// ENTIDADE HOSPEDAGEM

/**
 * @brief Classe que representa uma Hospedagem.
 * 
 * A classe Hospedagem contém os atributos e métodos para manipulação dos dados
 * de uma hospedagem, incluindo código, nome, diária e avaliação.
 */
class Hospedagem {
    private:
        Codigo codigo; ///< Código da hospedagem.
        Nome nome; ///< Nome da hospedagem.
        Dinheiro diaria; ///< Valor da diária da hospedagem.
        Avaliacao avaliacao; ///< Avaliação da hospedagem.
    public:
        /**
         * @brief Define o código da hospedagem.
         * 
         * @param codigo Objeto do tipo Codigo.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da hospedagem.
         * 
         * @return Objeto do tipo Codigo.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da hospedagem.
         * 
         * @param nome Objeto do tipo Nome.
         */
        void setNome(const Nome&);

         /**
         * @brief Retorna o nome da hospedagem.
         * 
         * @return Objeto do tipo Nome.
         */
        Nome getNome() const;

        /**
         * @brief Define o valor da diária da hospedagem.
         * 
         * @param diaria Objeto do tipo Dinheiro.
         */
        void setDinheiro(const Dinheiro&);

        /**
         * @brief Retorna o valor da diária da hospedagem.
         * 
         * @return Objeto do tipo Dinheiro.
         */
        Dinheiro getDinheiro() const;

        /**
         * @brief Define a avaliação da hospedagem.
         * 
         * @param avaliacao Objeto do tipo Avaliacao.
         */
        void setAvaliacao(const Avaliacao&);

         /**
         * @brief Retorna a avaliação da hospedagem.
         * 
         * @return Objeto do tipo Avaliacao.
         */
        Avaliacao getAvaliacao() const;
};


inline void Hospedagem::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline void Hospedagem::setNome(const Nome &nome){
    this->nome = nome;
}

inline void Hospedagem::setDinheiro(const Dinheiro &diaria){
    this ->diaria = diaria;
}

inline void Hospedagem::setAvaliacao(const Avaliacao &avaliacao){
    this->avaliacao = avaliacao;
}

inline Codigo Hospedagem::getCodigo() const{
    return codigo;
}

inline Nome Hospedagem::getNome() const{
    return nome;
}

inline Dinheiro Hospedagem::getDinheiro() const{
    return diaria;
}

inline Avaliacao Hospedagem::getAvaliacao() const{
    return avaliacao;
}



#endif // ENTIDADES_HPP_INCLUDED
