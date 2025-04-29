#include <stdio.h>
#include "arbol.h"

int main()
{
    struct arbol * arbol = crear_arbol();
    agregar_dato(arbol, arbol->raiz, 5);
    agregar_dato(arbol, arbol->raiz, 1);
    agregar_dato(arbol, arbol->raiz, 6);
    agregar_dato(arbol, arbol->raiz, 4);
    agregar_dato(arbol, arbol->raiz, -50);
    agregar_dato(arbol, arbol->raiz, -3);

    recorrer(arbol->raiz, 0);    
    return 0;
}