#include <stdlib.h>
#include <stdio.h>
#include "../headers/lista.h"

typedef struct elemento Elemento;

struct elemento {
    int valor;
    Elemento *prox;
};

Lista *criar(){
    Lista *ldse;

    ldse = (Lista *)malloc(sizeof(Lista));

    if(ldse != NULL){
        *ldse = NULL;
    }

    return ldse;
}

int inserir(Lista *ldse, int novoValor){
    
    if(ldse == NULL) return 1;
    
    Elemento *novoElemento = (Elemento *)malloc(sizeof(Elemento));
    
    novoElemento->prox = NULL;
    novoElemento->valor = novoValor;
    
    if(*ldse == NULL){ 
        *ldse = novoElemento;
        return 0;
    }
    
    Elemento *aux = *ldse;
    
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    
    aux->prox = novoElemento;
    
    return 0;
}

int ler(Lista *ldse, int index){

    if(ldse == NULL) return -1;

    if (*ldse == NULL) return -1;

    Elemento *aux = *ldse;
    
    for (int i = 0; i < index; i++) {
        if(aux->prox == NULL) return -1;

        aux = aux->prox;
    }

    return aux->valor;
}

int separar(Lista *ldse, Lista *par, Lista *impar){

    if(ldse == NULL) return 1;
    if(par == NULL) return 1;
    if(impar == NULL) return 1;

    if (*ldse == NULL) return 1;


    Elemento *aux = *ldse;

    *ldse = NULL;

    Elemento *prox = NULL; 
    Elemento *auxPar = NULL; 
    Elemento *auxImpar = NULL; 

    do{

        prox = aux->prox;

        aux->prox = NULL;

        if (aux->valor % 2 == 0) {
            if (*par == NULL) {
                *par = aux;
                auxPar = aux;
            }else{
                auxPar->prox = aux;
                auxPar = auxPar->prox;
            }
        }else {
        
            if (*impar == NULL) {
                *impar = aux;
                auxImpar = aux;
            }else{
                auxImpar->prox = aux;
                auxImpar = auxImpar->prox;
            }

        }

        aux = prox;

    }while(aux != NULL);

    auxImpar->prox = NULL;
    auxPar->prox = NULL;

    return 0;
}

void escreva(Lista *ldse){

    if (ldse == NULL) return;

    if (*ldse == NULL) {

        printf("Lista Esta vazia! \n");

        return;
    };

    Elemento *aux = *ldse;

    while (aux != NULL) {
        
        printf("[%i]; ", aux->valor);

        aux = aux->prox;

    }

    return;

}