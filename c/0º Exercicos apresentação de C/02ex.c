/* Aluno: Jadilson b. Guedes
 * Exercicio: 02
 * Dia: 07/03/2018
 */
#include <stdio.h>

int main() {
    int numero1 = 0;
    int numero2 = 0;

    float numero3 = 0;
    float numero4 = 0;

    printf("Digite primeiro valor inteiro: ");
     scanf("%d", &numero1);

    printf("Digite segundo valor inteiro: ");
     scanf("%d", &numero2);

    printf("Digite primeiro valor Real: ");
     scanf("%f", &numero3);

    printf("Digite segundo valor Real: ");
     scanf("%f", &numero4);

    printf("\n====== Valores inteiro =====\n");

    printf("1º-Valor inteiro digitado foi: %d\n", numero1);
    printf("2º-Valor inteiro digitado foi: %d\n", numero2);

    printf("\n====== Valores Real =====\n");
    printf("1º-Valor Real digitado foi: %.2f\n", numero3);
    printf("2º-Valor Real digitado foi: %.2f\n", numero4);

    printf("\n====== Fim do Programa =====\n");
}
