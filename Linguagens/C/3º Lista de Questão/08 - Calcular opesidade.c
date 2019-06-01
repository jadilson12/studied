/*
8. Você foi contratado para fazer um sistema que calcule IMC de alunos de uma escola em uma sala de 10 alunos,
você deverá mostra o nível de obesidade do aluno com base na formula de IMC (massa/(altura*altura)) seguindo a tabela
que indica o grau de obesidade:

    ? Menor 16 = magreza grave.
    ? 16 a 17 = magreza moderada.
    ? 17 a 18,5 = magreza leve.
    ? 18,5 a 25 = saudável.
    ? 25 a 30 = sobrepeso.
    ? 30 a 35 = obesidade grau l.
    ? 35 a 40 = obesidade grau ll (severa).
    ? Acima 40 = obesidade grau lll (mórbida).
Diante dessas informações mostre:
    ? Quantos alunos estão com algum tipo de
obesidade;
    ? Quantos alunos estão saudáveis;

 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j, saudavel=0,obeso=0;
    float alunos[4][10];
    for (i = 0; i < 10; i++) {
        printf("====> %d Aluno <=====",i+1);
        printf("\nQual e o  peso ? ");
        scanf("%f",&alunos[0][i]); //Na linha 0 guarda os valores de peso
        printf("Qual e altura ? ");
        scanf("%f",&alunos[1][i]); //Na linha 1 guarda os valores da altura
        alunos[2][i] = alunos[0][i]/(alunos[1][i]*alunos[1][i]);// Na linha 2 guarda os valores IMC
    }
    for (j = 0; j < 10 ; j++) {
        if(alunos[2][j] > 18.5 && alunos[2][j] < 25){
            saudavel ++;
        }
        if(alunos[2][j] > 30){
            obeso++;
        }
    }
    system("CLS");
    printf("\n====> Informacao final <===");
    if(saudavel == 0){
        printf("\nNenhum aluno esta saudavel.");
    } else{
        printf("\nForam %d alunos que esta saudaveis. ",saudavel);
    }
    if(obeso == 0){
        printf("\nNenhum aluno esta obeso. \n\n");
    } else{
        printf("\nForam %d alunos que esta obeso \n\n",obeso);
    }

}
