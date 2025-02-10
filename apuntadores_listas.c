#include <stdio.h>
#include <stdlib.h>



int main(int argc, char * argv)
{
    int lista[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(lista)/sizeof(lista[0]);

    // Malloc = memory allocation.
    // Colocacion de memoria.
    int * apuntador; // = malloc(sizeof(int[7]));
    apuntador[0] = 364;
    apuntador[1] = 365;
    apuntador[4] = 366;

    printf("%i\n", *apuntador);
    apuntador = apuntador + sizeof(int);
    printf("%i\n", *apuntador);

    //for (int i = 0; i<size; i++) 
    //{
    //    printf("%i\n", apuntador[i]);
    //}

    //printf("%p", lista);

    //for (int i = 0; i<size; i++) 
    //{
    //    printf("%i\n", &lista[i]);
    //}

    //printf("El tamano de un numero entero es de %i.\n", sizeof(long int));

    return 0;
}