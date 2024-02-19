#include "../headers/arvore.h"
#include <stdlib.h>

typedef struct node Node;

struct node {
    int chave;
    Node *left;
    Node *right;
};

Arvore *criar(){

    Arvore *tree;

    tree = (Arvore *)malloc(sizeof(Arvore));

    if (tree == NULL) {
        return NULL;
    }

    return tree;

}