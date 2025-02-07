#include <stdio.h>

int main(int argc, char * argv[])
{
    int edad = 28;
    int * apuntador_edad = &edad; // Se le asigna la direccion de memorial.

    printf("Direccion: %p | Contenido: %i\n", &edad, edad);
    *apuntador_edad = 42; // Asignacion por medio de manipulacion de memoria.
    printf("Direccion: %p | Contenido: %i\n", &edad, edad);

    printf("Direccion del apuntador: %p | Direccion de memoria guardada: %p\n", &apuntador_edad, apuntador_edad);
}