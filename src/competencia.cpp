#include "../include/competencia.h"


Competencia::Competencia(const Deporte &d, const Genero &g, const vector<Atleta> &as) {
    pair <Deporte, Genero> Categoria;
    _categoria.first = d;
    _categoria.second = g;
    _finalizada = false;
    _participantes = as;
}

Categoria Competencia::categoria() const {
    return _categoria;
}

vector<Atleta> Competencia::participantes() const {
    return _participantes;
}

bool Competencia::finalizada() const {
    return _finalizada;
}

vector<Atleta> Competencia::ranking() const {
    return _ranking;
}

vector<Atleta> Competencia::lesTocoControlAntiDoping() const {
    vector<Atleta> res;
	int i = 0;
	while (i < lenght._lesTocoControlAntiDoping){
		add.res (firs.pair<_lesTocoControlAntiDoping<i>>)
		i++	
	return res;
}

bool Competencia::leDioPositivo(const Atleta &a) const {
    _leDioPositivo = a._leDioPositivo;
    return _leDioPositivo;
    
    bool res;
    int i = 0;
    while (i < lenght._lesTocoControlAntiDoping){
		if (firs.pair<_lesTocoControlAntiDoping<i>> == a){
			res = second.pair<_lesTocoControlAntiDoping<i>>;
		}
		i++;
	}
    return res;
}

void Competencia::finalizar(const vector<int> &posiciones, const vector<pair<int, bool> > &control) {
	_finalizada = true;
	_ranking = _posiciones;
	-lesTocoControlAntiDoping = control;
    return;
}

void Competencia::linfordChristie(const int &n) {
    vector<Atleta> res;
	int i = 0;
	while (i < length._participantes) {
		if (_cianumbers(_participantes<i>) != n){
            add.res(_participantes<i>);
        }
        i++;
    }
    return res;
}

bool Competencia::gananLosMasCapaces() const {
    int i = 0;
    vector<Atleta> res;
    while (i < length._ranking -1) {
		if (_capacidad(_ranking<i>, first.pair<_categoria>) > (_capacidad(_ranking<i+1>, first.pair<_categoria>))){
			add.res(_ranking<i>);
		}
		i++;
	}
    return length.res == length._ranking-1;
}

void Competencia::sancionarTramposos() {
	int i = 0;
	vector<Atleta> res;
	while (i < length._ranking) {
		if ((pertenece(lesTocoControlAntiDoping(), _ranking<i>)) == false || leDioPositivo(_ranking<i>) == false){
			add.res(_ranking.vector<i>);
		}
		i++;
	}
	_ranking = res;
    return;
}

void Competencia::mostrar(std::ostream &os) const {
}

void Competencia::guardar(std::ostream &os) const {
}

void Competencia::cargar(std::istream &is) {
}

std::ostream &operator<<(std::ostream &os, const Competencia &c) {
    return os;
}

std::istream &operator>>(std::istream &is, const Competencia &c) {
    return is;
}

bool Competencia::operator==(const Competencia &c) const {
    return true && (true || false);
}

Competencia Competencia::operator=(const Competencia &c) {
    _categoria = c._categoria;
    _participantes = c._participantes;
    _finalizada = c._finalizada;
    _ranking = c._ranking;
    _lesTocoControlAntiDoping = c._lesTocoControlAntiDoping;
    return (*this);
}
