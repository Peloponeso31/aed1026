#include <Windows.h>
#include <stdio.h>
#include <string.h>
#include "arbol.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("Lee el siguiente codigo y en base a este, dibuja el arbol que produce 🌚.\n");
    struct arbol * arbol_1 = crear_arbol();
    agregar_dato(arbol_1, arbol_1->raiz, 11);
    agregar_dato(arbol_1, arbol_1->raiz, -7);
    agregar_dato(arbol_1, arbol_1->raiz, 0);
    agregar_dato(arbol_1, arbol_1->raiz, 8);
    agregar_dato(arbol_1, arbol_1->raiz, -1);
    agregar_dato(arbol_1, arbol_1->raiz, -2);
    agregar_dato(arbol_1, arbol_1->raiz, -8);
    agregar_dato(arbol_1, arbol_1->raiz, 13);
    print_tree(arbol_1->raiz, "", 0);
    printf("\n");
    
    printf("¿Que orden de insercion produce el siguiente arbol?.\n");
    struct arbol * arbol_2 = crear_arbol();
    agregar_dato(arbol_2, arbol_2->raiz, -15);
    agregar_dato(arbol_2, arbol_2->raiz,  5);
    agregar_dato(arbol_2, arbol_2->raiz,  7);
    agregar_dato(arbol_2, arbol_2->raiz,  3);
    agregar_dato(arbol_2, arbol_2->raiz, -3);
    agregar_dato(arbol_2, arbol_2->raiz, 12);
    print_tree(arbol_2->raiz, "", 0);
    printf("\n");

    printf("Imprime el siguiente arbol en inorden, preorden y post orden.\n");
    struct arbol * arbol_3 = crear_arbol();
    agregar_dato(arbol_3, arbol_3->raiz, -9);
    agregar_dato(arbol_3, arbol_3->raiz, 6);
    agregar_dato(arbol_3, arbol_3->raiz, 1);
    agregar_dato(arbol_3, arbol_3->raiz, -14);
    agregar_dato(arbol_3, arbol_3->raiz, 4);
    agregar_dato(arbol_3, arbol_3->raiz, -5);
    
    printf("Inorden: ");
    inorden(arbol_3->raiz);
    printf("\n");
    
    printf("Preorden: ");
    preorden(arbol_3->raiz);
    printf("\n");
    
    printf("Postorden: ");
    postorden(arbol_3->raiz);
    printf("\n");

    return 0;
}