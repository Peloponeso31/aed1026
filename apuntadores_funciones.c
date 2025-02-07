#include <stdio.h>

void func(int * numero)
{
    *numero = 42;
}

// Declaracion de una funcion que recibe un callback, una lista y la longitud de esta.
void iterar(void (*callback)(int), int * lista, int len)
{
    for (int i = 0; i < len; i++)
    {
        // Manda a llamar el "callback" en todos los elementos de la lista.
        callback(lista[i]);
    }
    printf("\n");
}

void cuadrado(int n)
{
    printf("%i, ", n*n);
}

void cubo(int n)
{
    printf("%i, ", n*n*n);
}

int main(int argc, char * argv[])
{
    // Retorno de valor por medio de memoria.
    int algo;
    func(&algo);
    printf("%i\n", algo);

    int lista[] = {1, 2, 3, 4, 5};

    // Se le pasa la direccion de memoria de las funciones como argumento.
    // Los callbacks permiten la reutilizacion de codigo.
    iterar(&cuadrado, lista, 5);
    iterar(&cubo, lista, 5);
    return 0;
}