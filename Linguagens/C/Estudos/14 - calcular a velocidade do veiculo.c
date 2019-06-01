/*
 * Faça um programa que o usuario digite a velocidade de carro, se enceder acima de 80 será combrado R$7.00
 * a cada km a mais senao informe que é um bom motorista.
 */
#include <stdio.h>

int main() {
    int velocidade;
    double multa;

    printf("**********************\n");
    printf("*  Dentran Brazil    *\n");
    printf("**********************\n");

    printf("Digite a velocidade do carro: ");
        scanf("%d",&velocidade);
    if (velocidade > 80) {
        multa = (velocidade - 80) * 7.00;
        printf("O carro encedeu %d KM acima do primitido\nO valor da multa foi de R$%.2f reais", velocidade - 80, multa);
    }else{
        printf("Bom motorista velocidade normal");
    }
    printf("\n---------fim-------------\n");


}
