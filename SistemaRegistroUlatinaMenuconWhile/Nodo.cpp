#include "Nodo.h"
Nodo::Nodo(Estudiante e) {
	est.setCedula(e.getCedula());
	est.setNombre(e.getNombre());
	est.setApellido(e.getApellido());
	est.setPromedio(e.getPromedio());
	siguiente = NULL;
}
Nodo::~Nodo() {}
void Nodo::setEstudiante(Estudiante e) { this->est = e; }
void Nodo::setSiguiente(Nodo* sig) { this->siguiente = sig; }
Estudiante Nodo::getEstudiante() { return this->est; }
Nodo* Nodo::getSiguiente() { return this->siguiente; }	