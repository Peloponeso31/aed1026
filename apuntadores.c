#include <stdio.h>

int main(int argc, char * argv[])
{
    int edad = 28;
    int * apuntador_edad = &edad;

    printf("%i\n", edad);

    *apuntador_edad = 42;

    printf("%i\n", edad);
}