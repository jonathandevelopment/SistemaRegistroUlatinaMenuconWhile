#include "NodoMatricula.h"

NodoMatricula::NodoMatricula(Matricula cur) {
    est.setNivel(cur.getNivel());
    est.setNombredeCurso(cur.getNombredeCurso());
    est.setApellidodeProfe(cur.getApellidodeProfe());
    est.setNombredeProfe(cur.getNombredeProfe());
    siguiente = NULL;
}

NodoMatricula::~NodoMatricula() {}

void NodoMatricula::setMatricula(Matricula cur) { this->est = cur; }
void NodoMatricula::setSiguiente(NodoMatricula* sig) { this->siguiente = sig; }
Matricula NodoMatricula::getMatricula() { return this->est; }
NodoMatricula* NodoMatricula::getSiguiente() { return this->siguiente; }
