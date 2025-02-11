#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv)
{
    
    int lista[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(lista)/sizeof(lista[0]);

    printf("Las listas son, en esencia, apuntadores. Esta es la direccion de memoria del primer elemento de la lista declarada: %p.\n", lista);
    // Impresion normal de una lista:
    for (int i = 0; i<size; i++) 
    {
        printf("Direccion de memoria: %p | Contenido: %i\n", &lista[i], lista[i]);
    }
    printf("\n");

    // Se pueden apartar direcciones de memoria continuas para colocar memoria.
    // Malloc = memory allocation.
    // Colocacion de memoria.
    int * apuntador = malloc(sizeof(int[7]));

    // A su vez, podemos tratar apuntadores como listas.
    apuntador[0] = 364;
    apuntador[1] = 365;
    apuntador[4] = 366;

    // E imprimirlas como tal.
    printf("Impresion de lista apropiada con malloc():\n");
    for (int i = 0; i<size; i++) 
    {
        printf("%i\n", apuntador[i]);
    }
    printf("\n");

    // Al ser apuntadores, podemos incrementar estos e imprimir el contenido de la memoria hacia la que apuntan.
    printf("Impresion de lista sumando a la direccion de memoria del apuntador:\n");
    printf("%i\n", *apuntador);
    
    apuntador = apuntador + 1;
    printf("%i\n", *apuntador);

    apuntador = apuntador + 1;
    printf("%i\n", *apuntador);
    printf("\n");

    printf("El tamaño de un numero entero es de %i.\n", sizeof(long int));

    return 0;
}