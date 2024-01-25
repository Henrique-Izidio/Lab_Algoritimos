#include "../headers/lista.h"
#include <stdio.h>

int main()
{

    Lista *ldse = criar();
    Lista *par = criar();
    Lista *impar = criar();

    inserir(ldse, 1);
    inserir(ldse, 2);
    inserir(ldse, 3);
    inserir(ldse, 4);
    inserir(ldse, 5);
    inserir(ldse, 6);

    escreva(ldse);

    printf("\n\n");

    separar(ldse, par, impar);

    escreva(par);

    printf("\n\n");

    escreva(impar);

    printf("\n\n");

    escreva(ldse);

    return 0;
}
