//
// Created by revet on 11/09/2022.
//

#include "header.h"
#include <stdlib.h>
#include <stdio.h>

Nodo *newnodo(int numero) {

    Nodo * auxnodo = malloc(sizeof (Nodo));

    if (auxnodo ==  NULL){
        printf("no memory\n");
        exit(-1);
    }

    auxnodo->numero = numero;
    auxnodo->sig = NULL;
    auxnodo->ant = NULL;

    return auxnodo;
}

Lista *newlista(void) {

    Lista * auxlista = malloc(sizeof (Lista));

    if (auxlista == NULL){
        printf("no memory");
        exit(-1);
    }

    auxlista->primer = NULL;

    return auxlista;
}

void mostrar(Lista *lista) {

    Nodo * aux = lista->primer;

    for (; aux != NULL; aux = aux->sig){
        printf("%d\n",aux->numero);
    }
}

void eliminar(Lista *lista) {

    if (lista->primer != NULL) {
        Nodo *aux = lista->primer;
        Nodo *aux2;

        for (;aux != NULL; aux = aux->sig){
            aux2 = aux->sig;
            for (;aux2 != NULL; aux2 = aux2->sig){
                if (aux->numero == aux2->numero){
                    aux2->ant->sig = aux2->sig;
                    if(aux2->sig != NULL)
                    aux2->sig->ant = aux2->ant;
                }
            }
        }
    }
}


void apilar(Lista * lista, Nodo *nodoapilar) {

    if (lista->primer == NULL){
        lista->primer = nodoapilar;
    }else{
        nodoapilar->sig = lista->primer;
        lista->primer->ant = nodoapilar;
        lista->primer = nodoapilar;
    }
}

