/* Aluno: Jadilson Guedes
 *
 3) Faça um programa em C que carregue um vetor com dez números reais, calcule  e mostre
  a quantidade de números negativos e a soma dos números positivos desse vetor.
 */

#include <stdio.h>

int main() {
    int i,valor[10],somaPosi;

    for (i = 0; i < 10; i++) {
        printf("Digite %d valor : ",i+1);
            scanf("%d",&valor[i]);
    }

    printf("\n=== Valores digitados ===\n");
    for (i = 0; i < 10; i++) {
        printf(" %d ",valor[i]);
    }

    printf("\n=== Numeros positivos; ===\n");
    for (i = 0; i < 10; i++) {
        if (valor[i] > 0) {
            somaPosi += valor[i];
            printf(" %d ", valor[i]);
        }
    }
    printf("\nA soma dos numeros positivos e: %d",somaPosi);
    printf("\n=== Numeros Negativos; ===\n");
    for (i = 0; i < 10; i++) {
        if (valor[i] < 0) {
            printf(" %d ", valor[i]);
        }
    }
    printf("\n=== Numeros Neutro; ===\n");
    for (i = 0; i < 10; i++) {
        if (valor[i] == 0) {
            printf(" %d ", valor[i]);
        }
    }
    printf("\n\n");

}
