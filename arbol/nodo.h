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

void print_arbol(struct nodo * nodo, int nivel)
{
    if (nodo == NULL) return;
    nivel++;

    print_arbol(nodo->izquierda, nivel);
    imprimir_espacios(nivel);
    printf("%d\n", nodo->dato);
    print_arbol(nodo->derecha, nivel);
}


void inorden(struct nodo * nodo)
{
    if (nodo == NULL) return;

    inorden(nodo->izquierda);
    printf("%d ", nodo->dato);
    inorden(nodo->derecha);
}

void preorden(struct nodo * nodo)
{
    if (nodo == NULL) return;

    printf("%d ", nodo->dato);
    preorden(nodo->izquierda);
    preorden(nodo->derecha);
}

void postorden(struct nodo * nodo)
{
    if (nodo == NULL) return;

    postorden(nodo->izquierda);
    postorden(nodo->derecha);
    printf("%d ", nodo->dato);
}

// Box drawings
void print_tree(struct nodo * nodo, const char  *prefix, int es_izquierdo) {
    if (nodo == NULL) return;

    printf("%s", prefix);
    printf(es_izquierdo ? "├── " : "└── ");
    printf("%d\n", nodo->dato);

    char new_prefix[256];
    snprintf(new_prefix, sizeof(new_prefix), "%s%s", prefix, es_izquierdo ? "│   " : "    ");

    if (nodo->izquierda || nodo->derecha) {
        if (nodo->derecha) print_tree(nodo->derecha, new_prefix, 1);
        if (nodo->izquierda)  print_tree(nodo->izquierda, new_prefix, 0);
    }
}

#endif