#pragma once
#include <iostream>
#include<string>
#include<sstream>
using namespace std;

class Curso
{
private:
	int Nivel;
	string NombredeProfe, NombredeCurso, ApellidodeProfe, Horario;

public:
	Curso();
	~Curso();
	void setNivel(int);
	void setNombredeCurso(string);
	void setNombredeProfe(string);
	void setApellidodeProfe(string);
	void setHorarioCurso(string);

	int getNivel();
	string getNombredeProfe();
	string getNombredeCurso();
	string getApellidodeProfe();
	string getHorarioCurso();
	void MostrarInformacion();
	string tostring();
	Curso(string nomprof, string nomcurso, string approf, int niv, string horario);
};