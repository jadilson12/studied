/* Aluno: Jadilson Guedes
 *
 * 1) Faça um programa em C que carregue um vetor de seis elementos numéricos inteiros,
    -calcule e mostre:
    ̈ A quantidade de números pares;
    ̈ Quais os números pares;
    ̈ A quantidade de números ímpares;
    ̈ Quais os números ímpares.
 */

#include <stdio.h>

int main() {
    int i,valor[6],pares,impares;

    for (i = 0; i < 6; i++) {
        printf("Digite %d valor : ",i+1);
        scanf("%d",&valor[i]);
    }

    printf("\n=== Valores digitados ===\n");
    for (i = 0; i < 6; i++) {
        printf(" %d ",valor[i]);
    }

    printf("\n=== Numeros impares ===\n");
    for (i = 0; i < 6; i++) {
        if(valor[i]%2==1){
            printf(" %d ",valor[i]);
            impares ++;
        }
    }
    printf("\n===  Numeros pares  ===\n");
    for (i = 0; i < 6; i++) {
        if(valor[i]%2==0){
            printf(" %d ",valor[i]);
            pares ++;
        }
    }
    printf("\n\nQuatidates total \n%d impares \n%d pares\n",pares,impares);

}
