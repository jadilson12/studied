/*
 * Faça um programa que digite o ano ele informa se é bissexto.
 */
#include <stdio.h>

int main() {
    int ano;

    printf("**********************\n");
    printf("*   Ano Bissexto     *\n");
    printf("**********************\n");

    printf("Digite data qualquer ex: 1900: ");
        scanf("%d",&ano);
    if (ano%4 == 0 && ano%100 != 0){
        printf("Este ano %d é bissexto",ano);
    }else{
        printf("O ano que você digitou não é bissexto.");
    }
    printf("\n---FIM----\n");


}
