#include <stdio.h>
#include <stdlib.h>

int main(int argv, char * argc[])
{
    int size = 8;
    int * lista = malloc(sizeof(int[size]));
    
    if (lista == NULL) {
        printf("error al asignar la memoria\n");
        return 1;
    }

    lista[0] = 8;
    lista[1] = 7;
    lista[2] = 6;
    lista[3] = 5;
    lista[4] = 4;
    lista[5] = 3;
    lista[6] = 2;
    lista[7] = 1;

    for (int i = 0; i < size; i++){
        // Daniel participo
        // Daniel participo
        // Aylin/2 participo
        printf("posicion %d Direccion %p, valor %d\n ", i, (void*)lista, *lista);
        lista++;
    }

    return 0;
}