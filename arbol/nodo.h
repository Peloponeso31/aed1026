#include <stdlib.h>

#ifndef _HEADER_NODO_
#define _HEADER_NODO_

typedef struct nodo
{
    int dato;
    struct nodo * izquierda;
    struct nodo * derecha;
} nodo;

struct nodo * crear_nodo(int dato, struct nodo * izquierda, struct nodo * derecha)
{
    struct nodo * nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = dato;
    nuevo->izquierda = izquierda;
    nuevo->derecha = derecha;
    return nuevo;
}

void imprimir_espacios(int numero)
{
    for (int i = 0; i < numero-1; i++) printf(" ");
}

void recorrer(struct nodo * nodo, int nivel)
{
    if (nodo == NULL) return;
    nivel++;

    recorrer(nodo->izquierda, nivel);
    imprimir_espacios(nivel);
    printf("%d\n", nodo->dato);
    recorrer(nodo->derecha, nivel);
}

#endif