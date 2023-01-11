#include <stdio.h>
#include "header.h"

int main() {

    Lista * lista = newlista();

    printf("Lista sin eliminar duplicado:\n");
    apilar(lista, newnodo(10));
    apilar(lista, newnodo(10));
    apilar(lista, newnodo(20));
    apilar(lista, newnodo(30));
    apilar(lista, newnodo(20));
    mostrar(lista);

    printf("Lista eliminando duplicados:\n");
    eliminar(lista);
    mostrar(lista);

    return 0;
}
