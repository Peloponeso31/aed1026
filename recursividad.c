#include <stdio.h>

int variable_global = 89;

int factorial(int n)
{
    // No recibe numeros negativos
    if (n == 1) return 1;
    return n * factorial(n-1);
}

// N representa el enesimo elemento.
// Si n vale 3, entonces 0 1 1.
// Si n vale 5, entonces 0 1 1 2 3.
int fibonacci(int n)
{
    // Joshua participo.
    //printf("Aqui hubo una llamada recursiva\n");
    if (n < 2) return n;
    return fibonacci (n - 1) + fibonacci(n - 2);
}

// Implementar una solucion recusiva al problema de palabras palindromas.
// anitalavalatina = 1
// Hola = 0
// 101 = 1
int palindromo(char * palabra)
{
    // Ya se la saben...
}

void funcion()
{
    printf("%i\n", variable_global);
}


int main(int argc, char * argv)
{
    printf("%i\n", fibonacci(5));
    funcion();

    // Espacio de nombres | Namespace
    int variable_interna = 50;
    {
        printf("%i\n", variable_global);
        printf("%i\n", variable_interna);
    }

    return 0;
}