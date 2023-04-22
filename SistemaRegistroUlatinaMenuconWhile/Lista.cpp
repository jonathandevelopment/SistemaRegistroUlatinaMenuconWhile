#include "Lista.h"

Lista::Lista() {
	primero = actual = NULL;
}
void Lista::insertar(Estudiante e) {
	actual = primero;
	if (primero == NULL) {//Lista vacia
		primero = new Nodo(e);
	}
	else {//Si la lista no esta vacia
		primero = new Nodo(e);
		primero->setSiguiente(actual);
	}
}
void Lista::borrarPrimero() {//Elimina el primer elemento de la lista
	if (primero == NULL)//Si la lista esta vacia
	{
		cout << "La lista esta vacia" << endl;
	}
	else {
		if (primero->getSiguiente() == NULL)//Si la lista tiene un solo nodo
		{
			delete primero;
			primero = NULL;
			actual = NULL;
		}
		else {//Si la lista tiene mas de un nodo
			actual = primero;
			primero = primero->getSiguiente();
			delete actual;
		}
	}
}
void Lista::imprimirLista() {
	actual = primero;
	cout << "Contenido de la lista:" << endl << endl;
	while (actual != NULL) {
		actual->getEstudiante().MostrarInformacion();
		actual = actual->getSiguiente();
	}
	cout << endl;
}
void Lista::imprimeActual() {
	cout << "Contenido del actual: " << endl;
	actual->getEstudiante().MostrarInformacion();
	cout << endl;
}
void Lista::elUltimo() {
	actual = primero;
	if (primero != NULL) {//Diferente de nulo o vacio
		while (actual->getSiguiente() != NULL) {
			actual = actual->getSiguiente();
		}
	}
}
void Lista::elPrimero() { actual = primero; }
Estudiante Lista::valorActual() { return actual->getEstudiante(); }
Lista::~Lista() {
	actual = primero;
	while (primero != NULL) {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
	}
	actual = NULL;
	primero = NULL;
}
int Lista::CuentaNodos() {
	int cantidad = 0;
	Nodo* aux = primero;
	while (aux != NULL) {
		cantidad++;
		aux = aux->getSiguiente();
	}
	return(cantidad);
}
void Lista::borrarUltimo() {
	Nodo* actual = primero;
	//Si la lista esta vacia
	if (primero == NULL)
	{
		cout << "Esta vacia" << endl;
	}
	//Si la lista solo tiene un elemento
	if (primero->getSiguiente() == NULL) {
		delete(primero);
		primero = NULL;
		actual = NULL;
	}
	//Si tienen mas de un elemento, se borra el ultimo
	while (actual->getSiguiente()->getSiguiente() != NULL) {
		actual = actual->getSiguiente(); //El objetivo del ciclo es que el actual quede apuntando al ultimo
	}
	actual = primero;
	delete(actual->getSiguiente());
	*actual->getSiguiente();
}
string Lista::tostring() {
	stringstream s1;
	int tam = CuentaNodos();
	actual = primero;
	for (int i = 0; i < tam; i++) {
		s1 << actual->getEstudiante().tostring() << endl;
		actual = actual->getSiguiente();
	}
	return s1.str();
}
float Lista::Promedio() {
	float promedio = 0;
	actual = primero;
	while (actual != NULL)
	{
		promedio += actual->getEstudiante().getPromedio();
		actual = actual->getSiguiente();
	}
	promedio = promedio / CuentaNodos();
	return promedio;
}