/*
 * Faça um programa que convente de reais para o Dólar
 */
#include <stdio.h>

int main() {
    float n,vContacao,ValorFinal;

    printf("**********************\n");
    printf("* Convessor de Moeda *\n");
    printf("**********************\n");

    printf("Quantos reais você gostaria de converter R$");
        scanf("%f", &n);

    vContacao = 3.18;
    ValorFinal = n/vContacao;
    printf("Você tem U$D %.2f dolares\n\n", ValorFinal);


}
a
