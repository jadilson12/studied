/* Aluno: Jadilson b. Guedes
 * Exercicio: 04
 * Faça um programa que moste de 0 até 10 usando o FOR do modo vertical e Horizotal
 */
#include <stdio.h>

int main() {
    int x=1;
    printf("\n==========Némeros Vertical=========\n");
        for (x=1; x<=10; x++) {
            printf("%d \n", x );
    }
    printf("\n==========Némeros Horizotal=========\n");
        for (x=1; x<=10; x++) {
            printf(" %d ", x );
    }
    printf("\n========== Fim do Programa =========\n");
}
