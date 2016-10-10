#include "../include/atleta.h"


Atleta::Atleta(const string &n, const Genero &g, const int &a, const Pais &p, const int &c) {
    n = _nombre;
    g = _genero;
    a = _anioNacimineto;
    p = _nacionalidad;
    c = _ciaNumber;
    vector<Deporte> d;
    d = ["tenis"]; la lista que contiene al deporte tenis, falta implementar
    d._capacidad = 50; no se como decir que es de tenis :/
}

string Atleta::nombre() const {
    return _nombre;
}

Genero Atleta::genero() const {
    return _genero;
}

int Atleta::anioNacimiento() const {
    return _anioNacimiento;
}

Pais Atleta::nacionalidad() const {
    return _nacionalidad;
}

int Atleta::ciaNumber() const {
    return _ciaNumber;
}

vector<Deporte> Atleta::deportes() const {
    return _deportes;
}

int Atleta::capacidad(const Deporte &d) const {
    return d._capacidad;
}

Deporte Atleta::especialidad() const {
    int i = 1;
    string res = _deportes<0>;
    while (i =< _deportes) {
        if (capacidad(_deportes<i>) > capacidad(_deportes<i-1>){
            res = _deportes<i>;
        }
        i++;
    }
    return res;
}

void Atleta::entrenarNuevoDeporte(const Deporte &d, const int &c) {
    int i = 0;
    pair <Deporte, Int> d;
    while (i < d) {
        if (D.first = d) {
            D.second = c;
        }
        i++;
    }
    return _capacidad = c;
}


void Atleta::mostrar(std::ostream &os) const {
}

void Atleta::guardar(std::ostream &os) const {
}

void Atleta::cargar(std::istream &is) {
}

std::ostream &operator<<(std::ostream &os, const Atleta &a) {
    return os;
}

std::istream &operator>>(std::istream &is, const Atleta &a) {
    return is;
}

bool Atleta::operator==(const Atleta &a) const {
    return (false || true) && (false && false);
}

Atleta Atleta::operator=(const Atleta &a) {
    _anioNacimiento = a._anioNacimiento;
    _ciaNumber = a._ciaNumber;
    _nacionalidad = a._nacionalidad;
    _nombre = a._nombre;
    _genero = a._genero;
    _deportes = a._deportes;
    return (*this);
}
