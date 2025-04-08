#include <stdio.h>
#include "nodo.h"
#include "cola.h"

int main()
{
    struct cola * cola = crear();

    formarse(cola, 1);
    formarse(cola, 2);
    formarse(cola, 3);
    formarse(cola, 4);

    printf("%d ", salir(cola));
    printf("%d ", salir(cola));
    printf("%d ", salir(cola));

    return 0;
}