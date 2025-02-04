#include <stdio.h>

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
    // Uy...
}

int main(int argc, char * argv)
{
    printf("%i", factorial(5));
    return 0;
}