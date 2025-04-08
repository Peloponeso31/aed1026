#include <stdlib.h>
#include "nodo.h"

#ifndef _HEADER_COLA_
#define _HEADER_COLA_

typedef struct cola {
    struct nodo * frente;
    int longitud;
} cola;

struct cola * crear()
{
    struct cola * cola = malloc(sizeof(struct cola));
    cola->frente = NULL;
    cola->longitud = -1;
    return cola;
}

void formarse(struct cola * cola, int dato)
{
    if (cola->frente == NULL)
    {
        cola->frente = crear_nodo(dato, NULL);
        return;
    }

    struct nodo * actual = cola->frente;
    while (actual->siguiente != NULL) actual = actual->siguiente;
    actual->siguiente = crear_nodo(dato, NULL);
}

int salir(struct cola * cola)
{
    int valor = cola->frente->dato;
    struct nodo * borrable = cola->frente;
    cola->frente = cola->frente->siguiente;
    free(borrable);
    return valor;
}

#endif