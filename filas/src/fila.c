#include <stdio.h>
#include <stdlib.h>
#include "../headers/fila.h"

typedef struct elemento Elemento;

struct elemento {
    int valor;
    Elemento *prox;
};

Fila *criar(){
    Fila *fdse;

    fdse = (Fila *)malloc(sizeof(Fila));

    
}