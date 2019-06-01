/* Aluno: Jadilson b. Guedes
 * Exercicio: 03
 * Faça um programa que o usuario digite 2 numeros inteiros e dois numeros reais
 * depois mostes a somas dos números inteiros e reais.
 */
#include <stdio.h>

int main() {
    int numero1 = 0;
    int numero2 = 0;
    int soma1=0;

    float numero3 = 0;
    float numero4 = 0;
    float soma2=0;


    printf("Digite primeiro valor inteiro: ");
        scanf("%d", &numero1);

    printf("Digite segundo valor inteiro: ");
        scanf("%d", &numero2);

    printf("Digite primeiro valor Real: ");
        scanf("%f", &numero3);

    printf("Digite segundo valor Real: ");
        scanf("%f", &numero4);

    soma1 = numero1 + numero2;
    soma2 = numero3 + numero4;

    printf("\n");
    printf("1º-Valor inteiro digitado foi: %d\n", numero1);
    printf("2º-Valor inteiro digitado foi: %d\n", numero2);
    printf("1º-Valor Real digitado foi: %.2f\n", numero3);
    printf("2º-Valor Real digitado foi: %.2f\n", numero4);

    printf("\n=====Soma dos valores====\n");
    printf("\nA soma do valores inteiro foi: %d",soma1 );
    printf("\nA soma do valores reais foi: %.2f",soma2 );

    printf("\n=====Fim do prgrama======\n");

}
