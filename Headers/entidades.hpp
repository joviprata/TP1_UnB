#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

using namespace std;

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
