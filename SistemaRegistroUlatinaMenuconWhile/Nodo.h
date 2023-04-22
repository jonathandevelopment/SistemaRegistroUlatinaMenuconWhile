#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include"Estudiante.h"
using namespace std;
class Nodo
{
private:
	Estudiante est;
	Nodo* siguiente;
public:
	Nodo(Estudiante);
	~Nodo();

	void setEstudiante(Estudiante);
	void setSiguiente(Nodo*);
	Nodo* getSiguiente();
	Estudiante getEstudiante();
};