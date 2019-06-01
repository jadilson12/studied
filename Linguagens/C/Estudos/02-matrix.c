/* Desafio: Jadilson Guedes */

#include <stdio.h>

int main() {
    int valor[4][4];
    int l=0,c=0;

    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("Digite o valor do matrix linha %d  coluna %d : ", l, c);
            scanf(" %d", &valor[l][c]);
        }
    }
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%d", valor[l][c]);
        }
        printf("\n");
    }
}
