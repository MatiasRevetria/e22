//
// Created by revet on 11/09/2022.
//

#ifndef E22_HEADER_H
#define E22_HEADER_H

typedef struct nodo{
    int numero;
    struct nodo * sig;
    struct nodo * ant;
}Nodo;

typedef struct lista{
    Nodo * primer;
}Lista;

Nodo * newnodo(int numero);

Lista * newlista(void);

void apilar(Lista * lista, Nodo * nodoapilar);

void mostrar(Lista * lista);

void eliminar(Lista * lista);

#endif //E22_HEADER_H
