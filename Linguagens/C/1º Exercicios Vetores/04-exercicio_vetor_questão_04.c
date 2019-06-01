/* Aluno: Jadilson Guedes
 *
    4) Faça um programa em C que carregue um vetor com 15 posições, calcule e mostre:
    ̈ O maior elemento do vetor e em que posição esse elemento se encontra;
    ̈ O menor elemento do vetor e em que posição esse elemento se encontra.
 */

#include <stdio.h>

int main() {
    int i=0,valor[15],maior=0,menor=0,aux=0,posicao_maior,posicao_menor;

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
            aux = valor[i];
        }
        if(valor[i] < aux){
            menor = valor[i];
            posicao_menor = i;
        }
    }
    printf("\nO maior numero e: %d esta na posição %d",maior,posicao_maior);
    printf("\nO menor numero e: %d esta na posição %d",menor,posicao_menor);
    printf("\n\n");
}
