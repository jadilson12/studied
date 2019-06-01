/*
 * Faça um programa que calcula a area informando pelo o usuario a altura e largura
 */
#include <stdio.h>

int main() {
    float altura,largura,area;

    printf("**********************\n");
    printf("* Calculo da area    *\n");
    printf("**********************\n");

    printf("Digite a altura: ");
        scanf("%f",&altura);
    printf("Digite a largura: ");
        scanf("%f",&largura);
    area = altura*largura;
    printf("A area é %.0f Metros\n\n", area);

}
