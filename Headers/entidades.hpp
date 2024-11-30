#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
using namespace std;

//---------------------------------------------------------------------
// DOCUMENTAÇÃO FEITA POR MARIANA SOARES OLIVEIRA (231011663) E ISABELA SOARES FURLAN (231013636)

/**
 * @file entidades.hpp
 * @brief Declaração de classes que representam as entidades do sistema.
 *
 * Este arquivo contém as definições de classes para Viagem, Destino,
 * Conta, Hospedagem e Atividades. Cada classe encapsula atributos e
 * comportamentos específicos de suas respectivas entidades.
 */

//---------------------------------------------------------------------
// ENTIDADE VIAGEM

/**
 * @brief Classe que representa uma Viagem.
 * 
 * A classe Viagem contém os atributos e métodos para manipulação dos dados
 * de uma viagem, incluindo código, nome e avaliação.
 * 
 * Desenvolvido por: João Victor Prata Tavares Pereira - 202028857
 */
class Viagem{
    private:
        Codigo codigo; ///< Código da viagem.
        Nome nome; ///< Nome da viagem.
        Avaliacao avaliacao; ///< Avaliação atribuída à viagem.
    public:
        /**
         * @brief Define o código da viagem.
         * 
         * @param codigo Objeto do tipo Codigo representando o código da viagem.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da viagem.
         * 
         * @return O código da viagem como um objeto do tipo Codigo.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da viagem.
         * 
         * @param nome Objeto do tipo Nome representando o nome da viagem.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da viagem.
         * 
         * @return O nome da viagem como um objeto do tipo Nome.
         */
        Nome getNome() const;

        /**
         * @brief Define a avaliação da viagem.
         * 
         * @param avaliacao Objeto do tipo Avaliacao representando a avaliação da viagem.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da viagem.
         * 
         * @return A avaliação da viagem como um objeto do tipo Avaliacao.
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
 * 
 * Desenvolvido por: João Victor Prata Tavares Pereira - 202028857
 */
class Destino {
    private:
        Codigo codigo; ///< Código do destino.
        Nome nome; ///< Nome do destino.
        Data dataInicio; ///< Data de início da viagem ao destino.
        Data dataTermino; ///< Data de término da viagem ao destino.
        Avaliacao avaliacao; ///< Avaliação atribuida ao destino.

    public:
        /**
         * @brief Define o código do destino.
         * 
         * @param codigo Objeto do tipo Codigo a ser associado ao destino.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código do destino.
         * 
         * @return O código associado ao destino.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome do destino.
         * 
         * @param nome Objeto do tipo Nome a ser associado ao destino.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome do destino.
         * 
         * @return O nome associado ao destino.
         */
        Nome getNome() const;

         /**
         * @brief Define a data de início da viagem ao destino.
         * 
         * @param dataInicio Objeto do tipo Data representando a data de início.
         */
        void setDataInicio(const Data&);

        /**
         * @brief Retorna a data de início da viagem ao destino.
         * 
         * @return A data de início associada ao destino.
         */
        Data getDataInicio() const;

        /**
         * @brief Define a data de término da viagem ao destino.
         * 
         * @param dataTermino Objeto do tipo Data representando a data de término.
         */
        void setDataTermino(const Data&);

        /**
         * @brief Retorna a data de término da viagem ao destino.
         * 
         * @return A data de término associada ao destino.
         */
        Data getDataTermino() const;

        /**
         * @brief Define a avaliação do destino.
         * 
         * @param avaliacao Objeto do tipo Avaliacao a ser associado ao destino.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação do destino.
         * 
         * @return A avaliação atribuída ao destino.
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
 * 
 * Desenvolvido por: Mauro Ribeiro da Silva - 231013592
 */
class Conta{
    private:
        Codigo codigo; ///< Código da conta.
        Senha senha; ///< Senha associada à conta.
    public:
        /**
         * @brief Define o código da conta.
         * 
         * @param codigo Objeto do tipo Codigo a ser associado à conta.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da conta.
         * 
         * @return O código associado à conta.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define a senha da conta.
         * 
         * @param senha Objeto do tipo Senha a ser associada à conta.
         */
        void setSenha(const Senha&);

         /**
         * @brief Retorna a senha da conta.
         * 
         * @return A senha associada à conta.
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
 * 
 * Desenvolvido por: Gabriel Balder Oliveira Lemos - 231013618
 */
class Hospedagem {
    private:
        Codigo codigo; ///< Código da hospedagem.
        Nome nome; ///< Nome da hospedagem.
        Dinheiro diaria; ///< Valor da diária da hospedagem.
        Avaliacao avaliacao; ///< Avaliação atribuída à hospedagem.
    public:
        /**
         * @brief Define o código da hospedagem.
         * 
         * @param codigo Objeto do tipo Codigo a ser associado à hospedagem.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da hospedagem.
         * 
         * @return O código associado à hospedagem.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da hospedagem.
         * 
         * @param nome Objeto do tipo Nome a ser associado à hospedagem.
         */
        void setNome(const Nome&);

         /**
         * @brief Retorna o nome da hospedagem.
         * 
         * @return O nome associado à hospedagem.
         */
        Nome getNome() const;

        /**
         * @brief Define o valor da diária da hospedagem.
         * 
         * @param diaria Objeto do tipo Dinheiro representando o valor da diária.
         */
        void setDinheiro(const Dinheiro&);

        /**
         * @brief Retorna o valor da diária da hospedagem.
         * 
         * @return O valor da diária associado à hospedagem.
         */
        Dinheiro getDinheiro() const;

        /**
         * @brief Define a avaliação da hospedagem.
         * 
         * @param avaliacao Objeto do tipo Avaliacao a ser associado à hospedagem.
         */
        void setAvaliacao(const Avaliacao&);

         /**
         * @brief Retorna a avaliação da hospedagem.
         * 
         * @return A avaliação atribuída à hospedagem.
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

//---------------------------------------------------------------------
// ENTIDADE ATIVIDADES

/**
 * @brief Classe que representa uma Atividade.
 * 
 * A classe Atividades contém os atributos e métodos para manipulação dos dados
 * de uma atividade de viagem, incluindo código, nome, data, horário, duração, valor e avaliação.
 * 
 * Desenvolvido por: Nikolas Negrão Pessoa - 202024722
 */

class Atividades { 

    private:
        Codigo codigo; ///< Código da atividade.
        Nome nome;  ///< Nome da atividade.
        Data data;  ///< Data em que a atividade ocorre.
        Horario horario;  ///< Horário da atividade.
        Duracao duracao;  ///< Duração da atividade.
        Dinheiro dinheiro;  ///< Valor associado à atividade.
        Avaliacao avaliacao;  ///< Avaliação atribuída à atividade.
    public:
        /**
         * @brief Define o código da atividade.
         * 
         * @param codigo Objeto do tipo Codigo representando o código da atividade.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Define o nome da atividade.
         * 
         * @param nome Objeto do tipo Nome representando o nome da atividade.
         */
        void setNome(const Nome&);

        /**
         * @brief Define a data da atividade.
         * 
         * @param data Objeto do tipo Data representando a data da atividade.
         */
        void setData(const Data&);

        /**
         * @brief Define o horário da atividade.
         * 
         * @param horario Objeto do tipo Horario representando o horário da atividade.
         */
        void setHorario(const Horario&);

        /**
         * @brief Define a duração da atividade.
         * 
         * @param duracao Objeto do tipo Duracao representando a duração da atividade.
         */
        void setDuracao(const Duracao&); 

        /**
         * @brief Define o valor associado à atividade.
         * 
         * @param dinheiro Objeto do tipo Dinheiro representando o custo da atividade.
         */
        void setDinheiro(const Dinheiro&);

        /**
         * @brief Define a avaliação da atividade.
         * 
         * @param avaliacao Objeto do tipo Avaliacao representando a avaliação da atividade.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna o código da atividade.
         * 
         * @return O código da atividade como um objeto do tipo Codigo.
         */
        Codigo getCodigo() const;

        /**
         * @brief Retorna o nome da atividade.
         * 
         * @return O nome da atividade como um objeto do tipo Nome.
         */
        Nome getNome() const;

        /**
         * @brief Retorna a data da atividade.
         * 
         * @return A data da atividade como um objeto do tipo Data.
         */
        Data getData() const;

        /**
         * @brief Retorna o horário da atividade.
         * 
         * @return O horário da atividade como um objeto do tipo Horario.
         */
        Horario getHorario() const;

        /**
         * @brief Retorna a duração da atividade.
         * 
         * @return A duração da atividade como um objeto do tipo Duracao.
         */
        Duracao getDuracao() const;

        /**
         * @brief Retorna o valor associado à atividade.
         * 
         * @return O custo da atividade como um objeto do tipo Dinheiro.
         */
        Dinheiro getDinheiro() const;

        /**
         * @brief Retorna a avaliação da atividade.
         * 
         * @return A avaliação da atividade como um objeto do tipo Avaliacao.
         */
        Avaliacao getAvaliacao() const; 
        
    };
    
    inline void Atividades::setCodigo(const Codigo &codigo) { 
        this->codigo = codigo; 
    }

    inline void Atividades::setNome(const Nome &nome) { 
        this->nome = nome; 
    }

    inline void Atividades::setData(const Data &data) { 
        this->data = data; 
    }

    inline void Atividades::setHorario(const Horario &horario) { 
        this->horario = horario; 
    }

    inline void Atividades::setDuracao(const Duracao &duracao) { 
        this->duracao = duracao; 
    }

    inline void Atividades::setDinheiro(const Dinheiro &dinheiro) { 
        this->dinheiro = dinheiro; 
    }

    inline void Atividades::setAvaliacao(const Avaliacao &avaliacao) { 
        this->avaliacao = avaliacao; 
    }

    inline Codigo Atividades::getCodigo() const { 
        return codigo; 
    }

    inline Nome Atividades::getNome() const { 
        return nome; 
    }

    inline Data Atividades::getData() const { 
        return data; 
    }

    inline Horario Atividades::getHorario() const { 
        return horario; 
    }

    inline Duracao Atividades::getDuracao() const { 
        return duracao; 
    }

    inline Dinheiro Atividades::getDinheiro() const { 
        return dinheiro; 
    }

    inline Avaliacao Atividades::getAvaliacao() const { 
        return avaliacao; 
    }

#endif // ENTIDADES_HPP_INCLUDED
