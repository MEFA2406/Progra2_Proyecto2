//
// Created by Manol on 10/14/2026.
//

#ifndef PROYECTO2_NODO_H
#define PROYECTO2_NODO_H

template <typename T>
class Nodo {
private:
    T* dato;
    Nodo<T>* siguiente;
public:
    Nodo(T* dato) {
        this->dato = dato;
        this->siguiente = nullptr;
    }

    T * getDato() {
        return dato;
    }

    void setDato(T *dato) {
        this->dato = dato;
    }

    Nodo<T> * getSiguiente() {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente) {
        this->siguiente = siguiente;
    }
};


#endif //PROYECTO2_NODO_H