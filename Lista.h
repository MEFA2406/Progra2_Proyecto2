//
// Created by Manol on 10/14/2026.
//

#ifndef PROYECTO2_LISTA_H
#define PROYECTO2_LISTA_H
#include "Nodo.h"

template <typename T>
class Lista {
protected:
    Nodo<T>* primero;
    int cantidad;
public:
    Lista() : primero(nullptr), cantidad(0) {}

    virtual ~Lista() {
        while (!estaVacia()) {
            eliminar(primero);
        }
    }

    Lista(const Lista&) = delete;

    Lista& operator=(const Lista&) = delete;

    void eliminarPrimero() {
        if (primero==nullptr) {return;}
        if (primero->getSiguiente() == nullptr) {delete primero; cantidad--;}
        else {
            auto aEliminar = primero;
            primero = primero->getSiguiente();
            delete aEliminar;
            cantidad--;
        }
    }
    bool estaVacia() {
        return primero == nullptr;
    }

    void agregarPrimero(T* dato) {
        auto nuevo = new Nodo<T>(dato);
        nuevo.setSiguiente(primero);
        primero = nuevo;
        cantidad++;
    }

    //iterator begin
    //iterator end
};


#endif //PROYECTO2_LISTA_H