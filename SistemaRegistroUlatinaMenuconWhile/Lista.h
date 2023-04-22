#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "Nodo.h"
using namespace std;
class Lista
{
private:
	Nodo* primero;
	Nodo* actual;
public:
	Lista();
	void insertar(Estudiante e);
	void borrarPrimero();
	void imprimirLista();
	void imprimeActual();
	void elUltimo();
	void elPrimero();
	Estudiante valorActual();
	~Lista();
	int CuentaNodos();
	void borrarUltimo();
	string tostring();
	float Promedio();
};


