/*
7. Fazer um programa em C para ler 10 alunos. Ler a nota de cada um dos 10 alunos e calcular a média das notas. Contar
quantos alunos estão com a nota acima de 5.0.  Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir
mensagem: Não há nenhum aluno com nota acima de 05.

 */
#include <stdio.h>

int main() {

    int i,j,cont=0;
    float notas[10],soma;

    for (i = 0; i < 10 ; i++) {
        printf("Digite a nota do %d aluno : ",i+1);
        scanf("%f",&notas[i]);
        soma += notas[i];
    }
    for (j = 0; j < 10; j++) {

        if(notas[j] > 5){
            cont++;
        }
    }
    printf("\n====> RESULTADOS <====");
    printf("\nA media dos 10 alunos e: %.1f",soma/10);
    if (cont ==0){
        printf("\nNenhum aluno nao obteve a nota acima de 5\n\n");
    } else{
        printf("\nForam %d alunos que obteve a nota acima de 5\n\n",cont);
    }
}
