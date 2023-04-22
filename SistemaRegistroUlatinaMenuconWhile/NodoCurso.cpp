#include "NodoCurso.h"

NodoCurso::NodoCurso(Curso cur) {
    est.setNivel(cur.getNivel());
    est.setNombredeCurso(cur.getNombredeCurso());
    est.setApellidodeProfe(cur.getApellidodeProfe());
    est.setNombredeProfe(cur.getNombredeProfe());
    est.setHorarioCurso(cur.getHorarioCurso());
    siguiente = NULL;
}

NodoCurso::~NodoCurso() {}

void NodoCurso::setCurso(Curso cur) { this->est = cur; }
void NodoCurso::setSiguiente(NodoCurso* sig) { this->siguiente = sig; }
Curso NodoCurso::getCurso() { return this->est; }
NodoCurso* NodoCurso::getSiguiente() { return this->siguiente; }