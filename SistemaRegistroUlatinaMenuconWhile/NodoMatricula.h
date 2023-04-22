#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include"Matricula.h"
using namespace std;
class NodoMatricula
{
private:
    Matricula est;
    NodoMatricula* siguiente;



public:
    NodoMatricula(Matricula);
    ~NodoMatricula();

    void setMatricula(Matricula);
    void setSiguiente(NodoMatricula*);



    NodoMatricula* getSiguiente();
    Matricula getMatricula();
};
