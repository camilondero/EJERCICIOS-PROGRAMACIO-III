
/*Diseñar una aplicación que permita:
Cargar en un array 30 números generados aleatoriamente entre 100 y 500.
Imprimir los números.
Crear un árbol binario de búsqueda con los datos del array. */

#include <iostream>
#include "../Arbol/ArbolBinario.h"
#include<stdlib.h>
#include <time.h>

int main() {
    
    ArbolBinario<int> arbol;
    
    int a[30];
    
    srand(time(NULL));
    
    for (int i = 0; i < 30 ; ++i) {
        
        a[i]=100+(rand()%(501-100));
        
        arbol.put(a[i]);
    }
    arbol.print();
}