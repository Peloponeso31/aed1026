#include <stdio.h>

float cuadrado(float x)
{
  return x * x;
}

float velocidad(float distancia, float tiempo)
{
  return distancia/tiempo;
}

// Funcion que calcula el indice de masa corporal.
float imc(float peso, float altura)
{
  return peso/(altura * altura);
}

// Entry point: Punto de entrada.
int main(int argc, char * argv[])
{
  printf("%f\n", imc(92, 1.8));
  //printf("f(9) = %f\n", cuadrado(9.0));
  //printf("f(5) = %f\n", cuadrado(5.0));
  //printf("f(2) = %f\n", cuadrado(2.0));
  return 0;
}
