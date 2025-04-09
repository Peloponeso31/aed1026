#include <stdio.h>

void imprimir_arreglo(int arreglo[], int longitud)
{
    printf("[");

    for (int i = 0; i < longitud; i++)
    {
        if (i == longitud-1)
        {
            printf("%d", arreglo[i]);
        }
        else {
            printf("%d, ", arreglo[i]);
        }
    }

    printf("]");
}

int main()
{
    int arreglo[5] = {1, 4, 3, 2, 5};
    imprimir_arreglo(arreglo, 5);
    return 0;
}