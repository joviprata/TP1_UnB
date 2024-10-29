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
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
};

inline void Destino::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Destino::getCodigo() const{
    return codigo;
}


#endif // ENTIDADES_HPP_INCLUDED