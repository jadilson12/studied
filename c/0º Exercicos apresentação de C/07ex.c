/* Aluno: Jadilson b. Guedes
 * Exercicio: 06
 * Faça um programa que moste na tela de 0 até 10, depois exibe os numeros pares,e impares separado no
 * final moste quantos numeros foram pares e quantos foram impares.
 */
#include <stdio.h>

int main() {
    int x=0;
    int par, imp=0;
    printf("============= Sequecia ==========\n");
    for(x=0; x <= 10; x++){
        printf(" %d ",x);
    }
    printf("\n========== Números pares ========\n");
    for(x=0; x <= 10; x++){
        if(x%2==0){
            printf(" %d ",x);
            par++;
        }
    }
    printf("\n========= Números Ímpares =======\n");
    for(x=0; x <= 10; x++){
        if(x%2==1){
            printf(" %d ",x);
            imp++;
        }
    }
    printf("\n\n===== Resultado Finalizado ======");
    printf("\nTotal de Pares: %d",par);
    printf("\nTotal de Ímpar: %d\n",imp);
    printf("========= Fim do Programa =======\n");
}
