#include "Facultad.h"
#include <string>
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

Facultad::Facultad() {
	nombre_Facu = "";
	nombre_sede = "";
};
// set

void Facultad::setnombre_Facu(string nombreFacu) {
	nombre_Facu = nombreFacu;
}

void  Facultad::setnombre_sede(string nombresede) {
	nombre_sede = nombresede;
}
//get

string Facultad::getnombre_Facu() {
	return nombre_Facu;
}

string Facultad::getnombre_sede() {
	return nombre_sede;
}