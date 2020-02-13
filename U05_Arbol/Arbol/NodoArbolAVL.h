#ifndef NODOARBOL_H
#define NODOARBOL_H

template<class T>
class NodoArbolAVL {

public:
    T dato;
    NodoArbolAVL<T> *izq, *der;
    char altura;
    int ocurrencia;
    int tamanio;

    NodoArbolAVL()
    {
        der = izq = nullptr;
        altura = 0;
        ocurrencia = 1;
    }


    NodoArbolAVL(T dato) : dato(dato) {

        der = izq = nullptr;
        altura = 0;
        ocurrencia = 1;

    }

    int getocurrencia() { return ocurrencia; }

    int gettamanio(){ return tamanio; }
};

#endif