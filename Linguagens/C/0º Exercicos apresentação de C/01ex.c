/* Aluno: Jadilson b. Guedes
 * Exercicio: 01
 * Faça um programa que exibe na tela o valores que está na variavel
 */
#include <stdio.h>

int main() {
    int valor1 = 5;
    int valor2 = 8;

    float valor3 = 3.9;
    float valor4 = 9.3;

    printf("\n====== Valores inteiro =====\n");
    printf("1° Valor inteiro definido: %d ", valor1);
    printf("\n2° Valor inteiro definido: %d ", valor2);

    printf("\n====== Valores Real =====\n");
    printf("1° Valor real definido: %.2f ", valor3);
    printf("\n2° Valor real definido: %.2f ", valor4);

    printf("\n====== Fim do exercicio ========\n"); // Informa para usuário que o programa chegou ao fim

}
