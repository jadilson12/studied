/*
9. Faça um programa que receba 08 valores, leia e imprima. Os valores inseridos:
    ? I - A soma dos valores maiores que 10;
    ? II - Quantidade de valores negativos, caso contrário mostre uma mensagem;
    ? III - O programa não pode somar os valores negativos.

 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    float valores[8],soma=0,negativos=0;

    for (i = 0; i < 8; i++) {
        printf("Entre com o %d valor: ",i+1);
        scanf("%f", &valores[i]);
    }
    system("cls");
    printf("\n====> Valores digitados <===\n");
    for (j = 0; j < 8; j++) {
        printf(" %.0f ",valores[j]);
        if(valores[j] > 10){
            soma += valores[j];
        }
        if (valores[j] < 0){
            negativos++;
        }
    }

    if (soma != 0){
        printf("\nA soma dos valores acima de 10 e : %.2f",soma);
    } else{
        printf("\nNemhum numero acima de 10 foi digitado");
    }
    if(negativos !=0){
        printf("\nA quantidade de numeros negativos foram : %.0f\n\n",negativos);
    } else{
        printf("\nNemhum numero negativo foi digitado\n\n");
    }
}
