/* Desafio: Jadilson Guedes */

#include <stdio.h>

int main() {
    int valor[5];
    int i=0;

    for (i = 1; i <=5; ++i) {
       printf("Digite o %d valor do vetor: ",i);
        scanf(" %d", &valor[i]);
    }

    i=0;
    for (i = 1; i <=5; ++i) {
       printf("A Posicao do vetor he %d está o valor  da valor -> %d\n",i, valor[i]);
    }

}
