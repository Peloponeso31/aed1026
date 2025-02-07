#include <stdio.h>

/**
 * @brief Funcion que estima la derivada de otra funcion con el metodo del cociente de diferencia simetrica.
 * 
 * @param f Funcion a derivar expresada en C.
 * @param x punto de la funcion que se desea derivar.
 * @param orden Orden de la derivada.
 * @param h Cantidad pequeña necesaria para poder realizar la operacion de cociente de diferencia simetrica.
 * @return Aproximacion de la derivada dada f(x): (f^[orden](x)). 
 */
double derivar(double (* f)(double), double x, int orden, double h){
    if (orden > 1) {
        return (derivar(f, x+h, orden-1, h) - derivar(f, x-h, orden-1, h)) / (2.0*h);
    }
    return (f(x+h) - f(x-h)) / (2.0*h);
}

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

double cuadrado(double n)
{
    return n*n;
}

void cuadrado_int(int n)
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
    iterar(&cuadrado_int, lista, 5);
    iterar(&cubo, lista, 5);

    double resultado = derivar(&cuadrado, 4, 1, 0.001);
    printf("%f", resultado);
    return 0;
}