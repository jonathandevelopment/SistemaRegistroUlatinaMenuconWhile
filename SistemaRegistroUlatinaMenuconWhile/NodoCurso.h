#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include"Curso.h"
using namespace std;
class NodoCurso
{
private:
    Curso est;
    NodoCurso* siguiente;



public:
    NodoCurso(Curso);
    ~NodoCurso();

    void setCurso(Curso);
    void setSiguiente(NodoCurso*);



    NodoCurso* getSiguiente();
    Curso getCurso();
};