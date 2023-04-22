#include <iostream>
#include <sstream>
#include "ListaMatricula.h"

using namespace std;

ListaMatricula::ListaMatricula() {
    primero = actual = NULL;
}

void ListaMatricula::insertar(Matricula e) {
    actual = primero;
    if (primero == NULL) {
        primero = new NodoMatricula(e);
    }
    else {
        primero = new NodoMatricula(e);
        primero->setSiguiente(actual);
    }
}

void ListaMatricula::borrarPrimero() {
    if (primero == NULL)
    {
        cout << "La listaCurso esta vacia" << endl;
    }
    else {
        if (primero->getSiguiente() == NULL)
        {
            delete primero;
            primero = NULL;
            actual = NULL;
        }
        else {
            actual = primero;
            primero = primero->getSiguiente();
            delete actual;
        }
    }
}

void ListaMatricula::imprimirLista() {
    actual = primero;
    cout << "Contenido de la lista Matricula:" << endl << endl;
    while (actual != NULL) {
        actual->getMatricula().MostrarInformacion();
        actual = actual->getSiguiente();
    }
    cout << endl;
}

void ListaMatricula::imprimeActual() {
    cout << "Contenido del actual: " << endl;
    actual->getMatricula().MostrarInformacion();
    cout << endl;
}
void ListaMatricula::elUltimo() {
    actual = primero;
    if (primero != NULL) {
        while (actual->getSiguiente() != NULL) {
            actual = actual->getSiguiente();
        }
    }
}

void ListaMatricula::elPrimero() { actual = primero; }

Matricula ListaMatricula::valorActual() { return actual->getMatricula(); }

ListaMatricula::~ListaMatricula() {
    actual = primero;
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSiguiente();
        delete actual;
    }
    actual = NULL;
    primero = NULL;
}
int ListaMatricula::CuentaNodos() {
    int cantidad = 0;
    NodoMatricula* aux = primero;
    while (aux != NULL) {
        cantidad++;
        aux = aux->getSiguiente();
    }
    return(cantidad);
}
void ListaMatricula::borrarUltimo() {
    NodoMatricula* actual = primero;

    if (primero == NULL)
    {
        cout << "Esta vacia" << endl;
    }

    if (primero->getSiguiente() == NULL) {
        delete(primero);
        primero = NULL;
        actual = NULL;
    }

    while (actual->getSiguiente()->getSiguiente() != NULL) {
        actual = actual->getSiguiente();
    }
    actual = primero;
    delete(actual->getSiguiente());
    actual->getSiguiente();
}

string ListaMatricula::tostring() {
    stringstream s1;
    int tam = CuentaNodos();
    actual = primero;
    for (int i = 0; i < tam; i++) {
        s1 << actual->getMatricula().tostring() << endl;
        actual = actual->getSiguiente();
    }
    return s1.str();
}