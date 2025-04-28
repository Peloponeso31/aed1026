#ifndef _HEADER_ARBOL_
#define _HEADER_ARBOL_
#include <stdlib.h>
#include "nodo.h"

typedef struct arbol {
    struct nodo * raiz;
    int tamano;
} arbol;

struct arbol * crear_arbol()
{
    struct arbol * arbol = malloc(sizeof(arbol));
    arbol->raiz = NULL;
    int tamano = -1;
}

int agregar_nodo(struct arbol * arbol, struct nodo * actual, struct nodo * nodo)
{
    if (arbol->raiz == NULL)
    {
        arbol->raiz = nodo;
        arbol->tamano++;
        return 1;
    }

    if (nodo->dato > actual->dato)
    {
        if (actual->derecha == NULL)
        {
            actual->derecha = nodo;
            arbol->tamano++;
            return 1;
        }
        agregar_nodo(arbol, actual->derecha, nodo);
    }

    if (nodo->dato < actual->dato)
    {
        if (actual->izquierda == NULL)
        {
            actual->izquierda = nodo;
            arbol->tamano++;
            return 1;
        }
        agregar_nodo(arbol, actual->izquierda, nodo);
    }

    return 1;
}

int agregar_dato(struct arbol * arbol, struct nodo * actual, int dato)
{
    if (arbol->raiz == NULL)
    {
        arbol->raiz = crear_nodo(dato, NULL, NULL);
        arbol->tamano++;
        return 1;
    }

    if (dato > actual->dato)
    {
        if (actual->derecha == NULL)
        {
            actual->derecha = crear_nodo(dato, NULL, NULL);
            arbol->tamano++;
            return 1;
        }
        agregar_dato(arbol, actual->derecha, dato);
    }

    if (dato < actual->dato)
    {
        if (actual->izquierda == NULL)
        {
            actual->izquierda = crear_nodo(dato, NULL, NULL);
            arbol->tamano++;
            return 1;
        }
        agregar_dato(arbol, actual->izquierda, dato);
    }

    return 1;
}

#endif