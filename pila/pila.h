#include <stdlib.h>
#include "nodo.h"
#ifndef _HEADER_PILA_
#define _HEADER_PILA_

typedef struct pila
{
    struct nodo * tope;
    int longitud;
} pila;

struct pila * crear()
{
    struct pila * pila = malloc(sizeof(struct pila));
    pila->tope = NULL;
    pila->longitud = -1;
    return pila;
}

void push(struct pila * pila, int dato)
{
    struct nodo * nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = dato;
    nuevo->siguiente = pila->tope;
    pila->tope = nuevo;
}

int pop(struct pila * pila)
{
    int valor = pila->tope->dato;
    struct nodo * borrable = pila->tope;
    pila->tope = pila->tope->siguiente;
    free(borrable);
    return valor;
}

#endif