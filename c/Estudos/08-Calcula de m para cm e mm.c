/*
 * Faça um programa que calcula metros para centimentos e milimetros!
 */
#include <stdio.h>

int main() {
    printf("%15s","\t\tCM PARA ML\n");
    float valor,cm,mm=0;

    printf("Digite uma quatidade em Metros: ");
        scanf("%f",&valor );
    cm=valor*100;
    mm=cm*100;

    printf("O valor %.2f coresponde: \n [%.0f] Centimentos \n [%.0f] Melimetros\n\n",valor,cm, mm);
    printf("Fim do programa volte sempre");

}
