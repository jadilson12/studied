/*
11.Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a
média dos mesmos. Mostre
 */
#include <stdio.h>

int main() {
    int j,i,valor[10],soma=0;
    float media=0,valoIgualMedia;

    for (i = 0; i < 10 ; i++) {
        printf("Digite o %d valor inteiro: ",i+1);
        scanf("%d",&valor[i]);
        soma += valor[i];
    }
    printf("\n===> Valores digitadtos <===\n");
    for (j = 0; j < 10; j++) {
        printf(" %d ",valor[j]);
    }
    media = soma/10;
    printf("\nA media dos valores digitadado e: %.0f",media);
    if(media != 0){
        for (j = 0; j < 10; j++) {
            if(valor[j]== media){
                valoIgualMedia ++;
                printf("\nO valor %d e igual a media.", valor[j]);
            }
        }
    } else{
        if(soma == 0){
            printf("\nDesculpe, Nao e possivel realizar media com todos valores zerado");
        } else{
            printf("\nDesculpe, A media obteve resultado com vigula, esse programa so visualiza valores inteiros.");
        }
    }
    printf("\n\n");
}
