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

// Procedimiento que escribe un saludo.
void saludo(char * nombre, char * apellido)
{
  printf("Hola, %s %s.", nombre, apellido);
}

//Procedimiento que imprime en que categoria esta segun su IMC.
void clase_imc(float imc)
{
  // Aqui algun desafortunado escribira su codigo.
}

// Entry point: Punto de entrada.
int main(int argc, char * argv[])
{
  clase_imc(imc(92, 1.8));
  return 0;
}
