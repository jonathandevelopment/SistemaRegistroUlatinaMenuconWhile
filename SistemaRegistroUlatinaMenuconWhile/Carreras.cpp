#include "Carreras.h"
#include <string>
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

Carrera::Carrera() {
	nombre_carre = "";

};
// set

void Carrera::setnombre_carre(string nombrecarre) {
	nombre_carre = nombrecarre;
}

//get

string Carrera::getnombre_carre() {
	return nombre_carre;
}

