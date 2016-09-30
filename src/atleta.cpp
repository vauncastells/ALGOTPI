#include "../include/atleta.h"


Atleta::Atleta(const string &n, const Genero &g, const int &a, const Pais &p, const int &c) {
    n = _nombre;
    g = _genero;
    a = _anioNacimineto;
    p = _nacionalidad;
    c = _ciaNumber;
    vector<Deporte> d;
    d == 0;
}

string Atleta::nombre() const {
    return _nombre;
}

Genero Atleta::genero() const {
    return return _genero;
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
    vector<Deporte> ret;
    return ret;
}

int Atleta::capacidad(const Deporte &d) const {
    return _capacidad = d._capacidad;
}

void Atleta::entrenarNuevoDeporte(const Deporte &d, const int &c) {
    int i = 0;
    while (i < prm(_deportes)) {
        if (prm(_deportes) == d) {
            sgd(_deportes) == c;
        }
        i++;
    }
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

std::ostream &operator>>(std::ostream &os, const Atleta &a) {
    return os;
}

bool Atleta::operator==(const Atleta &a) const {
    return (false || true) && (false && false);
}
