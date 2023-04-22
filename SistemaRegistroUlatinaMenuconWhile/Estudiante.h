#pragma once
#include <iostream>
#include<string> 
#include<sstream>
using namespace std;

class Estudiante
{
private:     int cedula, promedio;     string nombre, apellido;
public:
    //Constructores
    Estudiante();     Estudiante(int, string, string);
    //Destructor
    ~Estudiante();
    //Set's
    void setCedula(int);
    void setPromedio(int);
    void setNombre(string);
    void setApellido(string);
    //Get's
    int getCedula();
    int getPromedio();
    string getNombre();
    string getApellido();
    //Metodos de consulta de informacion 
    void MostrarInformacion();
    string tostring();
};

//funcion para agregar varios usuarios
void createUsers();