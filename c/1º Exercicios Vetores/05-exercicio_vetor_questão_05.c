/* Aluno: Jadilson Guedes
 *
    5) Faça um programa em C que leia um vetor de 15 posições de números inteiros e
    multiplique todos os elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.
 */

#include <stdio.h>

int main() {
    int i=0,valor[15],maior=0,menor=0,aux=0,posicao_maior,posicao_menor;

    //Entre com os dados
    for (i = 0; i < 15; i++) {
        printf("Digite %d valor : ",i+1);
            scanf("%d",&valor[i]);
    }
    printf("\n=== Valores digitados ===\n");
    for (i = 0; i < 15; i++) {
        printf(" %d ",valor[i]);
        if(valor[i] > maior){
            maior = valor[i];
            posicao_maior = i;
        }
    }

    printf("\nO maior numero e: %d esta na posição %d" , maior, posicao_maior );
    printf("\n=== Valores multiplicados pelo maior ===\n");
    //Mostre a Soma dos valores
    for (i = 0; i < 15; i++) {
        printf(" %d ",valor[i]*maior);
    }
    printf("\n\n");

}
