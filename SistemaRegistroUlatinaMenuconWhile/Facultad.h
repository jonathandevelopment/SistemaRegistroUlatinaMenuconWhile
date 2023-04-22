#pragma once
#include<iostream>
#include<sstream>
using namespace std;
class Facultad
{
private:
	string nombre_Facu;
	string nombre_sede;

public:
	Facultad();
	//~Facultad();

	//set
	void setnombre_Facu(string nombreFacu);
	void setnombre_sede(string nombresede);

	//get
	string getnombre_Facu();
	string getnombre_sede();

};
