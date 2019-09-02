/*
 * Faça um programa que digite um valor e moste seu sucessor e antecessor
 */
#include <stdio.h>

int main() {
    int n;

    printf("*********************\n");
    printf("Sucessor e antecessor\n");
    printf("*********************\n");

    printf("Digite uma valor:");
        scanf("%d",&n);

    printf("O sucessor de %d é %d",n,n+1);
    printf("\nO Antecessor de %d é %d",n,n-1);

    printf("\n\n");


}
