#pragma once
#include <iostream>
#include<string> 
#include<sstream>
using namespace std;

class Matricula
{
private:
    int Nivel;
    string NombredeProfe, NombredeCurso, ApellidodeProfe, Horario;
public:
    //Constructores
    Matricula();
    //Destructor
    ~Matricula();
    //Set's
    void setNivel(int);
    void setNombredeCurso(string);
    void setNombredeProfe(string);
    void setApellidodeProfe(string);
    void setHorarioCurso(string);
    //Get's
    int getNivel();
    string getNombredeProfe();
    string getNombredeCurso();
    string getApellidodeProfe();
    string getHorarioCurso();
    //Metodos de consulta de informacion 
    void MostrarInformacion();
    string tostring();
    Matricula(string nomprof, string nomcurso, string approf, int niv, string horario);
};

//funcion para agregar varios usuarios
//void createUsers();
