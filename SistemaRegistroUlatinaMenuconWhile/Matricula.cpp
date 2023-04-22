#include "Matricula.h"
Matricula::Matricula(string nomprof, string nomcurso, string approf, int niv, string horario) {

	NombredeProfe = nomprof;
	NombredeCurso = nomcurso;
	ApellidodeProfe = approf;
	Nivel = niv;
	Horario = horario;
}
Matricula::Matricula() {
	NombredeCurso = "sin definir";
	NombredeProfe = "sin definir";
	ApellidodeProfe = "sin definir";
	Nivel = 4;
	Horario = "";
}
void Matricula::setNombredeProfe(string nomprof) { NombredeProfe = nomprof; }
void Matricula::setApellidodeProfe(string approf) { ApellidodeProfe = approf; }
void Matricula::setNombredeCurso(string nomcurso) { NombredeCurso = nomcurso; }
void Matricula::setNivel(int niv) { Nivel = niv; }
void Matricula::setHorarioCurso(string horario) { Horario = horario; }

string Matricula::getNombredeProfe() { return NombredeProfe; }
string Matricula::getNombredeCurso() { return NombredeCurso; }
string Matricula::getApellidodeProfe() { return ApellidodeProfe; }
int Matricula::getNivel() { return Nivel; }
string Matricula::getHorarioCurso() { return Horario; }


void Matricula::MostrarInformacion() {
	cout << "-----------------------------" << endl;
	cout << "Nombre del Profe: " << NombredeProfe << endl;
	cout << "Apellido del Profesor: " << ApellidodeProfe << endl;
	cout << "Nombre del Curso: " << NombredeCurso << endl;
	cout << "Nivel seleccionado: " << Nivel << endl;
	cout << "Horario: " << Horario << endl;
	cout << "---------------------------" << endl;
}

string Matricula::tostring() {
	stringstream s1;
	s1 << NombredeProfe << endl;
	s1 << ApellidodeProfe << endl;
	s1 << NombredeCurso << endl;
	s1 << Nivel << endl;
	s1 << Horario << endl;
	return s1.str();
}
Matricula::~Matricula() {}