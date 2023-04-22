#pragma once
#include<iostream>
#include<sstream>
using namespace std;
class Carrera
{
private:
	string nombre_carre;

public:
	Carrera();
	//~Carrera();

	//set
	void setnombre_carre(string nombrecarre);

	//get
	string getnombre_carre();


};