#include <stdio.h>
#include "nodo.h"
#include "pila.h"

int main()
{
    struct pila * pila = crear();
    
    // Samantha participo 2
    struct pila * pila_secundaria = crear();

    push(pila, 1);
    push(pila, 2);
    push(pila, 3);

    
    // Alan Villagran participo 2
    push(pila_secundaria, pop(pila));
    push(pila_secundaria, pop(pila));
    push(pila_secundaria, pop(pila));

    //printf("%d\n", peek(pila));

    printf("%d, ", pop(pila_secundaria));
    printf("%d, ", pop(pila_secundaria));
    printf("%d, ", pop(pila_secundaria));

    return 0;
}