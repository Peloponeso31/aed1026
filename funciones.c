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
  // Daniel participo.
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
  // Alan participo.
  if(imc<18.5){
    printf("Tu imc es de bajo peso");
  }else if(imc>=18.5&& imc<24.9){
    printf("Tu imc es peso solidable");
  }else if(imc >=25 && imc < 29.9){
    printf("Tienes sobrepeso");
  }else if(imc > 30){
    printf("Tienes obesidad ");
  }
}

// Entry point: Punto de entrada.
int main(int argc, char * argv[])
{
  printf("%f", imc(92, 1.8));
  clase_imc(imc(92, 1.8));
  return 0;
}
