
#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "NodoMatricula.h"
using namespace std;

class ListaMatricula
{
private:
    NodoMatricula* primero;
    NodoMatricula* actual;
    string  Progamacion2, Calculo1, Programacion1, REDES;


public:
    ListaMatricula();
    void insertar(Matricula Curs);
    void borrarPrimero();
    void imprimirLista();
    void imprimeActual();
    void elUltimo();
    void elPrimero();
    Matricula valorActual();
    ~ListaMatricula();
    int CuentaNodos();
    void borrarUltimo();
    string tostring();


};