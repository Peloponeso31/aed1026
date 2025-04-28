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

void recorrer(struct nodo * nodo)
{
    if (nodo == NULL) return;

    printf("%d", nodo->dato);
    recorrer(nodo->izquierda);
    recorrer(nodo->derecha);
}

#endif