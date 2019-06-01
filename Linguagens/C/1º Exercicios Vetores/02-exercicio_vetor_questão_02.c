/* Aluno: Jadilson Guedes
 *
    2) Faça um programa em C que carregue um vetor com sete números inteiros, calcule e
    mostre:
    ̈ Os números múltiplos de 2;
    ̈ Os números múltiplos de 3;
    ̈ Os números múltiplos de 2 e de 3.
    Obs: Informar para o usuário caso não tenha números múltiplos em questão.
 */

#include <stdio.h>

int main() {
    int i,valor[6];

    for (i = 0; i < 6; i++) {
        printf("Digite %d valor : ",i);
            scanf("%d",&valor[i]);
    }

    printf("\n=== Valores digitados ===\n");
    for (i = 0; i < 6; i++) {
        printf(" %d ",valor[i]);
    }

    printf("\n=== multiplos de 2; ===\n");
    for (i = 0; i < 6; i++) {
        if(valor[i]%2==0){
            printf(" %d ",valor[i]);
        }
    }
    printf("\n=== multiplos de 3; ===\n");
    for (i = 0; i < 6; i++) {
        if(valor[i]%3==0){
            printf(" %d ",valor[i]);
        }
    }
    printf("\n=== multiplos de 2 e 3; ===\n");
    for (i = 0; i < 6; i++) {
        if(valor[i]%2==0 && valor[i]%3==0){
            printf(" %d ",valor[i]);
        }
    }
    printf("\n=== Numeros que não são multiplos questão nem de 2 e 3; ===\n");
    for (i = 0; i < 6; i++) {
        if(valor[i]%2!=0 && valor[i]%3!=0){
            printf(" %d ",valor[i]);
        }
    }
    printf("\n\n");


}
