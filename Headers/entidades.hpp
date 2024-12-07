#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
using namespace std;

//---------------------------------------------------------------------
// DOCUMENTAÇÃO FEITA POR MARIANA SOARES OLIVEIRA (231011663) E ISABELA SOARES FURLAN (231013636)

/**
 * @file entidades.hpp
 * @brief Declaração de classes que representam as entidades do sistema.
 *
 * Este arquivo contém as definições das classes que representam as principais entidades do sistema,
 * como Viagem, Destino, Conta, Hospedagem e Atividades. Essas classes encapsulam os dados e operações
 * relacionadas às funcionalidades do sistema, como criação, consulta e manipulação de dados de viagens
 * e seus componentes.
 */

//---------------------------------------------------------------------
// ENTIDADE VIAGEM

/**
 * @brief Classe que representa uma Viagem.
 *
 * A classe Viagem contém os atributos necessários para armazenar informações sobre uma viagem, como código, nome e avaliação. Essas informações são usadas para descrever uma viagem específica dentro do sistema.
 *
 * @throw invalid_argument Se o código, nome ou avaliação fornecido for inválido.
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
         * Atribui um código único para identificar a viagem. O código deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param codigo O código da viagem a ser atribuído.
         *
         * @throw invalid_argument Se o código fornecido for inválido.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da viagem.
         *
         * Recupera o código da viagem armazenado no objeto.
         *
         * @return O código da viagem.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da viagem.
         *
         * Atribui um nome para a viagem. O nome deve ser uma string válida, caso contrário, uma exceção será lançada.
         *
         * @param nome O nome da viagem a ser atribuído.
         *
         * @throw invalid_argument Se o nome fornecido for inválido.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da viagem.
         *
         * Recupera o nome da viagem armazenado no objeto.
         *
         * @return O nome da viagem.
         */
        Nome getNome() const;

        /**
         * @brief Define a avaliação da viagem.
         *
         * Atribui uma avaliação à viagem. A avaliação pode ser usada para indicar a qualidade ou experiência da viagem.
         *
         * @param avaliacao A avaliação a ser atribuída à viagem.
         *
         * @throw invalid_argument Se a avaliação fornecida for inválida.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da viagem.
         *
         * Recupera a avaliação atribuída à viagem.
         *
         * @return A avaliação da viagem.
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
 * A classe Destino armazena informações sobre o destino de uma viagem, incluindo o código, nome, datas de início e término, e a avaliação associada.
 *
 * @throw invalid_argument Se o código, nome, datas ou avaliação fornecidos forem inválidos.
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
         * Atribui um código único para identificar o destino. O código deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param codigo O código do destino a ser atribuído.
         *
         * @throw invalid_argument Se o código fornecido for inválido.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código do destino.
         *
         * Recupera o código do destino armazenado no objeto.
         *
         * @return O código do destino.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome do destino.
         *
         * Atribui um nome ao destino. O nome deve ser uma string válida, caso contrário, uma exceção será lançada.
         *
         * @param nome O nome do destino a ser atribuído.
         *
         * @throw invalid_argument Se o nome fornecido for inválido.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome do destino.
         *
         * Recupera o nome do destino armazenado no objeto.
         *
         * @return O nome do destino.
         */
        Nome getNome() const;

        /**
         * @brief Define a data de início da viagem para o destino.
         *
         * Atribui a data de início para a viagem ao destino. A data deve ser válida, caso contrário, uma exceção será lançada.
         *
         * @param dataInicio A data de início da viagem para o destino.
         *
         * @throw invalid_argument Se a data fornecida for inválida.
         */
        void setDataInicio(const Data&);

        /**
         * @brief Retorna a data de início da viagem ao destino.
         *
         * Recupera a data de início da viagem para o destino.
         *
         * @return A data de início da viagem.
         */
        Data getDataInicio() const;

        /**
         * @brief Define a data de término da viagem para o destino.
         *
         * Atribui a data de término para a viagem ao destino. A data deve ser válida, caso contrário, uma exceção será lançada.
         *
         * @param dataTermino A data de término da viagem para o destino.
         *
         * @throw invalid_argument Se a data fornecida for inválida.
         */
        void setDataTermino(const Data&);

        /**
         * @brief Retorna a data de término da viagem ao destino.
         *
         * Recupera a data de término da viagem para o destino.
         *
         * @return A data de término da viagem.
         */
        Data getDataTermino() const;

        /**
         * @brief Define a avaliação do destino.
         *
         * Atribui uma avaliação ao destino. A avaliação pode ser usada para indicar a qualidade ou experiência do destino.
         *
         * @param avaliacao A avaliação a ser atribuída ao destino.
         *
         * @throw invalid_argument Se a avaliação fornecida for inválida.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação do destino.
         *
         * Recupera a avaliação atribuída ao destino.
         *
         * @return A avaliação do destino.
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
 * A classe Conta armazena o código e a senha de um usuário. A conta permite a autenticação no sistema e o acesso aos recursos disponíveis.
 *
 * @throw invalid_argument Se o código ou senha fornecidos forem inválidos.
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
         * Atribui um código único à conta. O código deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param codigo O código da conta a ser atribuído.
         *
         * @throw invalid_argument Se o código fornecido for inválido.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da conta.
         *
         * Recupera o código da conta armazenado no objeto.
         *
         * @return O código da conta.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define a senha da conta.
         *
         * Atribui uma senha à conta. A senha deve ser válida, caso contrário, uma exceção será lançada.
         *
         * @param senha A senha da conta a ser atribuída.
         *
         * @throw invalid_argument Se a senha fornecida for inválida.
         */
        void setSenha(const Senha&);

        /**
         * @brief Retorna a senha da conta.
         *
         * Recupera a senha armazenada para a conta.
         *
         * @return A senha da conta.
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
 * A classe Hospedagem armazena informações sobre o local de hospedagem, incluindo código, nome, valor da diária e avaliação.
 *
 * @throw invalid_argument Se o código, nome, valor da diária ou avaliação forem inválidos.
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
         * Atribui um código único para identificar a hospedagem. O código deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param codigo O código da hospedagem a ser atribuído.
         *
         * @throw invalid_argument Se o código fornecido for inválido.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da hospedagem.
         *
         * Recupera o código da hospedagem armazenado no objeto.
         *
         * @return O código da hospedagem.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da hospedagem.
         *
         * Atribui um nome à hospedagem. O nome deve ser uma string válida, caso contrário, uma exceção será lançada.
         *
         * @param nome O nome da hospedagem a ser atribuído.
         *
         * @throw invalid_argument Se o nome fornecido for inválido.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da hospedagem.
         *
         * Recupera o nome da hospedagem armazenado no objeto.
         *
         * @return O nome da hospedagem.
         */
        Nome getNome() const;

        /**
         * @brief Define o valor da diária da hospedagem.
         *
         * Atribui o valor da diária para a hospedagem. O valor deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param diaria O valor da diária a ser atribuído.
         *
         * @throw invalid_argument Se o valor da diária fornecido for inválido.
         */
        void setDinheiro(const Dinheiro&);

        /**
         * @brief Retorna o valor da diária da hospedagem.
         *
         * Recupera o valor da diária da hospedagem armazenado no objeto.
         *
         * @return O valor da diária.
         */
        Dinheiro getDinheiro() const;

        /**
         * @brief Define a avaliação da hospedagem.
         *
         * Atribui uma avaliação à hospedagem. A avaliação pode ser usada para indicar a qualidade ou experiência da hospedagem.
         *
         * @param avaliacao A avaliação a ser atribuída à hospedagem.
         *
         * @throw invalid_argument Se o valor da avaliação fornecida for inválido.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da hospedagem.
         *
         * Recupera a avaliação atribuída à hospedagem.
         *
         * @return A avaliação da hospedagem.
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
 * A classe Atividades contém informações sobre uma atividade programada durante a viagem, como código, nome, data, horário, duração, custo e avaliação.
 *
 * @throw invalid_argument Se os dados fornecidos forem inválidos.
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
         * Atribui um código único à atividade. O código deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param codigo O código da atividade a ser atribuído.
         *
         * @throw invalid_argument Se o código fornecido for inválido.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da atividade.
         *
         * Recupera o código da atividade armazenado no objeto.
         *
         * @return O código da atividade.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da atividade.
         *
         * Atribui um nome à atividade. O nome deve ser uma string válida, caso contrário, uma exceção será lançada.
         *
         * @param nome O nome da atividade a ser atribuído.
         *
         * @throw invalid_argument Se o nome fornecido for inválido.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da atividade.
         *
         * Recupera o nome da atividade armazenado no objeto.
         *
         * @return O nome da atividade.
         */
        Nome getNome() const;

        /**
         * @brief Define a data da atividade.
         *
         * Atribui a data da atividade. A data deve ser válida, caso contrário, uma exceção será lançada.
         *
         * @param data A data da atividade a ser atribuída.
         *
         * @throw invalid_argument Se a data fornecida for inválida.
         */
        void setData(const Data&);

        /**
         * @brief Retorna a data da atividade.
         *
         * Recupera a data da atividade armazenada no objeto.
         *
         * @return A data da atividade.
         */
        Data getData() const;

        /**
         * @brief Define o horário da atividade.
         *
         * Atribui o horário da atividade. O horário deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param horario O horário da atividade a ser atribuído.
         *
         * @throw invalid_argument Se o horário fornecido for inválido.
         */
        void setHorario(const Horario&);

        /**
         * @brief Retorna o horário da atividade.
         *
         * Recupera o horário da atividade armazenado no objeto.
         *
         * @return O horário da atividade.
         */
        Horario getHorario() const;

        /**
         * @brief Define a duração da atividade.
         *
         * Atribui a duração da atividade. A duração deve ser válida, caso contrário, uma exceção será lançada.
         *
         * @param duracao A duração da atividade a ser atribuída.
         *
         * @throw invalid_argument Se a duração fornecida for inválida.
         */
        void setDuracao(const Duracao&);

        /**
         * @brief Retorna a duração da atividade.
         *
         * Recupera a duração da atividade armazenada no objeto.
         *
         * @return A duração da atividade.
         */
        Duracao getDuracao() const;

        /**
         * @brief Define o custo da atividade.
         *
         * Atribui o custo da atividade. O custo deve ser válido, caso contrário, uma exceção será lançada.
         *
         * @param dinheiro O custo da atividade a ser atribuído.
         *
         * @throw invalid_argument Se o valor fornecido for inválido.
         */
        void setDinheiro(const Dinheiro&);

        /**
         * @brief Retorna o custo da atividade.
         *
         * Recupera o custo da atividade armazenado no objeto.
         *
         * @return O custo da atividade.
         */
        Dinheiro getDinheiro() const;

        /**
         * @brief Define a avaliação da atividade.
         *
         * Atribui uma avaliação à atividade. A avaliação pode ser usada para indicar a qualidade ou experiência da atividade.
         *
         * @param avaliacao A avaliação a ser atribuída à atividade.
         *
         * @throw invalid_argument Se a avaliação fornecida for inválida.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da atividade.
         *
         * Recupera a avaliação atribuída à atividade.
         *
         * @return A avaliação da atividade.
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