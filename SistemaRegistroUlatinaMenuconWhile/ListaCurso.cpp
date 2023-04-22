#include <iostream>
#include <sstream>
#include <string>
#include "ListaCurso.h"
using namespace std;

ListaCurso::ListaCurso() {
    primero = actual = NULL;
}

void ListaCurso::insertar(Curso e) {
    actual = primero;
    if (primero == NULL) {
        primero = new NodoCurso(e);
    }
    else {
        primero = new NodoCurso(e);
        primero->setSiguiente(actual);
    }
}

void ListaCurso::borrarPrimero() {
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

void ListaCurso::imprimirLista() {
    actual = primero;
    cout << "Contenido de la listaCurso:" << endl << endl;
    while (actual != NULL) {
        actual->getCurso().MostrarInformacion();
        actual = actual->getSiguiente();
    }
    cout << endl;
}

void ListaCurso::test() {
    cout << actual;
    cout << primero;
}



void ListaCurso::imprimeActual() {
    cout << "Contenido del actual: " << endl;
    actual->getCurso().MostrarInformacion();
    cout << endl;
}
void ListaCurso::elUltimo() {
    actual = primero;
    if (primero != NULL) {
        while (actual->getSiguiente() != NULL) {
            actual = actual->getSiguiente();
        }
    }
}

void ListaCurso::elPrimero() { actual = primero; }

Curso ListaCurso::valorActual() { return actual->getCurso(); }

ListaCurso::~ListaCurso() {
    actual = primero;
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSiguiente();
        delete actual;
    }
    actual = NULL;
    primero = NULL;
}
int ListaCurso::CuentaNodos() {
    int cantidad = 0;
    NodoCurso* aux = primero;
    while (aux != NULL) {
        cantidad++;
        aux = aux->getSiguiente();
    }
    return(cantidad);
}
void ListaCurso::borrarUltimo() {
    NodoCurso* actual = primero;

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

string ListaCurso::tostring() {
    stringstream s1;
    int tam = CuentaNodos();
    actual = primero;
    for (int i = 0; i < tam; i++) {
        s1 << actual->getCurso().tostring() << endl;
        actual = actual->getSiguiente();
    }
    return s1.str();
}