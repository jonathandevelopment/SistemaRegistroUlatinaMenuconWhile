#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "NodoCurso.h"
using namespace std;

class ListaCurso
{
private:
    NodoCurso* primero;
    NodoCurso* actual;
    string  Progamacion2, Calculo1, Programacion1, REDES;

public:
    ListaCurso();
    void insertar(Curso Curs);
    void borrarPrimero();
    void imprimirLista();
    void imprimeActual();
    void elUltimo();
    void elPrimero();
    Curso valorActual();
    ~ListaCurso();
    int CuentaNodos();
    void borrarUltimo();
    string tostring();
    void test();

};