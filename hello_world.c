// Se incluye la libreria estandar.
// Esta lbreria denota que estamos creando un programa C.
// stdio = standard input/output.
#include <stdio.h>

// Esta es la funcion "main". Esto es el punto de entrada de un programa en C.
// Esta retorna un codigo, el cual es un numero entero.
// Esta recibe argumentos de la linea de comando.
// argc = Argument Count. Numero de argumentos pasados.
// argv = Argument Vector. Contenido de texto de los argumentos pasados.
int main(int argc, char * argv[])
{
  // Salida por texto.
  printf("Hello, world!");
  
  // Todo lo que no sea 0 es un error.
  return 0;
}
