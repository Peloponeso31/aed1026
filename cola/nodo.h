#include <stdlib.h>

#ifndef _HEADER_NODO_
#define _HEADER_NODO_

typedef struct nodo
{
    int dato;
    struct nodo * siguiente;
} nodo;

struct nodo * crear_nodo(int dato, struct nodo * siguiente)
{
    struct nodo * nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = dato;
    nuevo->siguiente = siguiente;
    return nuevo;
}

#endif