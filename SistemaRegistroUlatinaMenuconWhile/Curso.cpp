#include "Curso.h"
Curso::Curso(string nomprof, string nomcurso, string approf, int niv, string horario) {

	NombredeProfe = nomprof;
	NombredeCurso = nomcurso;
	ApellidodeProfe = approf;
	Nivel = niv;
	Horario = horario;
}
Curso::Curso() {
	NombredeCurso = "sin definir";
	NombredeProfe = "sin definir";
	ApellidodeProfe = "sin definir";
	Nivel = 4;
	Horario = "";
}
void Curso::setNombredeProfe(string nomprof) { NombredeProfe = nomprof; }
void Curso::setApellidodeProfe(string approf) { ApellidodeProfe = approf; }
void Curso::setNombredeCurso(string nomcurso) { NombredeCurso = nomcurso; }
void Curso::setNivel(int niv) { Nivel = niv; }
void Curso::setHorarioCurso(string horario) { Horario = horario; }

string Curso::getNombredeProfe() { return NombredeProfe; }
string Curso::getNombredeCurso() { return NombredeCurso; }
string Curso::getApellidodeProfe() { return ApellidodeProfe; }
int Curso::getNivel() { return Nivel; }
string Curso::getHorarioCurso() { return Horario; }


void Curso::MostrarInformacion() {
	cout << "-----------------------------" << endl;
	cout << "Nombre del Profe: " << NombredeProfe << endl;
	cout << "Apellido del Profesor: " << ApellidodeProfe << endl;
	cout << "Nombre del Curso: " << NombredeCurso << endl;
	cout << "Nivel seleccionado: " << Nivel << endl;
	cout << "Horario: " << Horario << endl;
	cout << "---------------------------" << endl;
}

string Curso::tostring() {
	stringstream s1;
	s1 << NombredeProfe << endl;
	s1 << ApellidodeProfe << endl;
	s1 << NombredeCurso << endl;
	s1 << Nivel << endl;
	s1 << Horario << endl;
	return s1.str();
}
Curso::~Curso() {}