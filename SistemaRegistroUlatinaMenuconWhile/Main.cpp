#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <thread>

#include "Lista.h"
#include "ListaCurso.h"
#include "ListaMatricula.h"

#include "Facultad.h"
#include"Carreras.h"
#include"Matricula.h"


using namespace std;

int main()
{
	Facultad facultad;
	Carrera carrera;
	Lista lista;
	Matricula matricula;

	ListaCurso listaCurso;
	ListaMatricula listaMatricula;

	int cantidadUsuarios, cedula = 0, nivel;
	string name, lastName, nombreFacu, sede, nombreCarrera, nombredeProfe, apellidoProfe, nombreCurso, horario;
	
	int opcionMenu = 0;
	while (opcionMenu != 9) {

		cout << "--------------------------------------------" << endl;
		cout << "BIENVENIDOS AL SISTEMA DE MATRICULA" << endl;
		cout << endl;
		cout << "Seleccione la opcion de lo que desea hacer:" << endl;
		cout << "Presione 1 para crear estudiantes nuevos" << endl;
		cout << "Presione 2 para crear una facultad" << endl;
		cout << "Presione 3 para crear una carrera" << endl;
		cout << "Presione 4 para crear cursos" << endl;
		cout << "Presione 5 para matricualar un curso" << endl;
		cout << "Presione 6 para ver lista de estudiantes" << endl;
		cout << "Presione 7 para ver lista de  matricula" << endl;
		cout << "Presione 8 para ver cursos" << endl;
		cout << "Presione 9 para Salir" << endl;
		cout << "--------------------------------------------" << endl;
		cin >> opcionMenu;

		switch (opcionMenu) {
		case 1: {
			// código para crear estudiantes
			int cantidadUsuarios;
			cout << "Cantidad de usuarios: ";
			cin >> cantidadUsuarios;
			for (int i = 0; i < cantidadUsuarios; i++) {
				cin.ignore();
				string name, lastName;
				int cedula;
				cout << "Ingrese la información del estudiante " << i + 1 << ":" << endl;
				cout << "Nombre: ";
				getline(cin, name);
				cout << "Apellido: ";
				getline(cin, lastName);
				cout << "Cedula: ";
				cin >> cedula;
				Estudiante nuevoEstudiante(cedula, name, lastName);
				lista.insertar(nuevoEstudiante);
			}
			cout << "Estudiantes creados con exito." << endl;
			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}
		case 2: {
			// código para crear una facultad

			cin.ignore();
			cout << "------------------------------------" << endl;
			cout << "Ingrese el nombre de la Facultad: " << endl;
			getline(cin, nombreFacu);
			facultad.setnombre_Facu(nombreFacu);
			cout << "Ingrese la sede: " << endl;
			getline(cin, sede);
			facultad.setnombre_sede(sede);

			cout << "-------------------------------" << endl;
			cout << "Creacion de  Facultad exitosa!" << endl;
			cout << "Facultad: " << nombreFacu << " Sede : " << sede << endl;
			cout << "-------------------------------" << endl;
			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));

			break;
		}
		case 3: {
			// código para crear una carrera
			cin.ignore();
			cout << "------------------------------------" << endl;
			cout << "Ingrese el nombre de la carrera: " << endl;
			getline(cin, nombreCarrera);
			carrera.setnombre_carre(nombreCarrera);

			cout << "-------------------------------" << endl;
			cout << "Creacion de  Carrera exitosa!" << endl;
			cout << "Carrera: " << nombreCarrera << endl;
			cout << "-------------------------------" << endl;
			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}
		case 4: {
			// código para crear cursos
			cout << "Cantidad de cursos:" << endl;
			cin >> cantidadUsuarios;

			for (int i = 0; i < cantidadUsuarios; i++) {
				cin.ignore();
				cout << "Ingrese la info del Curso: " << endl;
				cout << "Nombre Curso: " << endl;
				getline(cin, nombreCurso);
				cout << "Nombre Profe: " << endl;
				getline(cin, nombredeProfe);
				cout << "Apellido Profe: " << endl;
				cin >> apellidoProfe;
				cout << "Horario: Noche o Dia " << endl;
				cin.ignore();
				getline(cin, horario);
				cout << "Nivel: " << endl;
				cin >> nivel;
				if (cin.fail()) {
					// el usuario ingresó un valor que no es int
					cout << "Error: El nivel debe ser un número entero" << endl;
					cin.clear(); // limpiar el estado de error
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descartar el resto de la línea
					
				}
				else {
					// el usuario ingresó un valor int válido
					Curso curs1(nombredeProfe, apellidoProfe, nombreCurso, nivel, horario);
					listaCurso.insertar(curs1);
				}
			}
			cout << "Usuarios creados con exito" << endl;
			cout << "-------------------------------" << endl;
			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}
		case 5: {
			// código para matricular un curso
			cout << "----------------------" << endl;
			cout << "Lista Cursos disponibles" << endl;
			cout << "" << endl;
			listaCurso.imprimirLista();
			cout << "" << endl;
			cout << "Cantidad de cursos a Matricular:" << endl;
			cin >> cantidadUsuarios;

			for (int i = 0; i < cantidadUsuarios; i++) {
				cin.ignore();
				cout << "Ingrese la info del Curso: " << endl;
				cout << "Nombre Curso: " << endl;
				getline(cin, nombreCurso);
				cout << "Nombre Profe: " << endl;
				getline(cin, nombredeProfe);
				cout << "Apellido Profe: " << endl;
				cin >> apellidoProfe;
				cout << "Horario: Noche o Dia " << endl;
				cin.ignore();
				getline(cin, horario);
				cout << "Nivel: " << endl;
				cin >> nivel;
				if (cin.fail()) {
					// el usuario ingresó un valor que no es int
					cout << "Error: El nivel debe ser un número entero" << endl;
					cin.clear(); // limpiar el estado de error
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descartar el resto de la línea

				}
				else {
					// el usuario ingresó un valor int válido
					Matricula matri(nombredeProfe, apellidoProfe, nombreCurso, nivel, horario);
					listaMatricula.insertar(matri);
				}
			}
			cout << "Matricula creados con exito" << endl;
			cout << "-------------------------------" << endl;
			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}
		case 6: {
			// para ver lista de estudiantes
			int volver;
			cout << "----------------------" << endl;
			cout << "Lista estudiantes" << endl;
			cout << "" << endl;
			lista.imprimirLista();
			cout << "" << endl;
			cout << "Para volver al menu ingrese 1" << endl;
			cin >> volver;

			while (volver != 1) {
				cout << "----------------------" << endl;
				cout << "Lista estudiantes" << endl;
				cout << "" << endl;
				lista.imprimirLista();
				cout << "" << endl;
				cout << "Para volver al menu ingrese 1" << endl;
				cin >> volver;
			}

			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}

		case 7: {
			// para ver lista de matricula
			int volver;
			cout << "----------------------" << endl;
			cout << "Cursos Matriculados" << endl;
			cout << "" << endl;
			cout << "Estudiante: " << name << endl;
			listaMatricula.imprimirLista();
			cout << "" << endl;
			cout << "Para volver al menu ingrese 1" << endl;
			cin >> volver;

			while (volver != 1) {
				cout << "----------------------" << endl;
				cout << " Cursos Matriculados" << endl;
				cout << "" << endl;
				listaMatricula.imprimirLista();
				cout << "" << endl;
				cout << "Para volver al menu ingrese 1" << endl;
				cin >> volver;
			}

			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}
		case 8: {
			// para ver cursos
			int volver;
			cout << "----------------------" << endl;
			cout << "Lista Cursos" << endl;
			cout << "" << endl;
			listaCurso.imprimirLista();
			cout << "" << endl;
			cout << "Para volver al menu ingrese 1" << endl;
			cin >> volver;

			while (volver != 1) {
				cout << "----------------------" << endl;
				cout << "Lista Cursos" << endl;
				cout << "" << endl;
				listaCurso.imprimirLista();
				cout << "" << endl;
				cout << "Para volver al menu ingrese 1" << endl;
				cin >> volver;
			}

			cout << "Usted esta siendo redirigido al menu, espere..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(4));
			break;
		}
		case 9: {
			// salir del programa
			break;
		}
		default: {
			cout << "Opción inválida. Por favor seleccione una opción válida del menú." << endl;
			break;
		}
		}


	}
	

	/*lista.imprimirLista();
	cout << endl << endl << "Primero de la lista" << endl;
	lista.elPrimero();
	lista.imprimeActual();
	cout << endl << endl << "Ultima de la lista" << endl;
	lista.elUltimo();
	lista.imprimeActual();
	lista.imprimirLista();
	cout << lista.tostring();
	lista.~Lista();*/
	cin.get();

	return 0;
}