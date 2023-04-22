#include "Estudiante.h"
#include <iostream>
Estudiante::Estudiante(int c, string n, string ap) {
	cedula = c;
	nombre = n;
	apellido = ap;
}
Estudiante::Estudiante() {
	cedula = 1;
	nombre = "Sin definir";
	apellido = "Sin definir";
}
void Estudiante::setCedula(int c) { cedula = c; }
void Estudiante::setPromedio(int p) { promedio = p; }
void Estudiante::setNombre(string n) { nombre = n; }
void Estudiante::setApellido(string ap) { apellido = ap; }

int Estudiante::getCedula() { return cedula; }
int Estudiante::getPromedio() { return promedio; }

string Estudiante::getNombre() { return nombre; }
string Estudiante::getApellido() { return apellido; }

void Estudiante::MostrarInformacion() {
	cout << "---------------------------" << endl;
	cout << "Cedula: " << cedula << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "---------------------------" << endl;
}
string Estudiante::tostring() {
	stringstream s1;
	s1 << cedula << endl;
	s1 << nombre << endl;
	s1 << apellido << endl;
	s1 << promedio << endl;
	return s1.str();
}
Estudiante::~Estudiante() {}



