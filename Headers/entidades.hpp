#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

using namespace std;

class Viagem{
    private:
        Codigo codigo;
        Nome nome;
        Avaliacao avaliacao;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNome(const Nome&);
        Nome getNome() const;

        void setAvaliacao(const Avaliacao&);
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


class Destino {
    private:
        Codigo codigo;
        Nome nome;
        Data dataInicio;
        Data dataTermino;
        Avaliacao avaliacao;

    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNome(const Nome&);
        Nome getNome() const;

        void setDataInicio(const Data&);
        Data getDataInicio() const;

        void setDataTermino(const Data&);
        Data getDataTermino() const;

        void setAvaliacao(const Avaliacao&);
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

class Conta{
    private:
        Codigo codigo;
        Senha senha;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setSenha(const Senha&);
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
#endif // ENTIDADES_HPP_INCLUDED
