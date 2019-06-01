/* Aluno: Jadilson b. Guedes
 * Exercicio: 05
 * Faça um programa que moste de 0 até 10 usando WHILE no modo vertical e horizontal.
 */
#include <stdio.h>

int main() {
    int x=1;

    printf("\n======== Némeros Vertical =========\n");
    while (x <= 10) {
        printf("%d \n", x );
        x++;
    }
    printf("\n========= Números Horizotal =======\n");
    x=1;
    while (x <= 10) {
        printf(" %d ", x );
        x++;
    }
    printf("\n========== Fim do Programa ========\n");
}
