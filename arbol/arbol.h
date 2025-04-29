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

//Daniel participo 3 ---------------------------------------------------
nodo *encontrar_minimo(nodo *n) {
    while (n && n->izquierda != NULL)
        n = n->izquierda;
    return n;
}

nodo *eliminar_recursivo(nodo *raiz, int dato, int *contador) {
    if (raiz == NULL) return NULL;

    if (dato < raiz->dato) {
        raiz->izquierda = eliminar_recursivo(raiz->izquierda, dato, contador);
    } else if (dato > raiz->dato) {
        raiz->derecha = eliminar_recursivo(raiz->derecha, dato, contador);
    } else {
        *contador = *contador - 1;

        if (raiz->izquierda == NULL) {
            nodo *temp = raiz->derecha;
            free(raiz);
            return temp;
        } else if (raiz->derecha == NULL) {
            nodo *temp = raiz->izquierda;
            free(raiz);
            return temp;
        }

        nodo *temp = encontrar_minimo(raiz->derecha);
        raiz->dato = temp->dato;
        raiz->derecha = eliminar_recursivo(raiz->derecha, temp->dato, contador);
    }

    return raiz;
}

void eliminar_dato(arbol *a, int dato) {
    a->raiz = eliminar_recursivo(a->raiz, dato, &a->tamano);
}
// ---------------------------------------------------------------------------------
#endif