#include <stdio.h>
#include "arbol.h"

int main()
{
    struct arbol * arbol = crear_arbol();
    agregar_dato(arbol, arbol->raiz, 5);
    agregar_dato(arbol, arbol->raiz, 1);
    agregar_dato(arbol, arbol->raiz, 6);
    agregar_dato(arbol, arbol->raiz, 4);

    recorrer(arbol->raiz);    
    return 0;
}