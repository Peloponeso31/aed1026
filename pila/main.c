#include <stdio.h>
#include "nodo.h"
#include "pila.h"

int main()
{
    struct pila * pila = crear();

    push(pila, 1);
    push(pila, 2);
    push(pila, 3);
    push(pila, 4);

    printf("%d, ", pop(pila));
    printf("%d, ", pop(pila));
    printf("%d, ", pop(pila));

    return 0;
}