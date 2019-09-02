/*
    01. Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13
    anos possuem altura inferior à média de altura desses alunos.
 */

#include <stdio.h>

int main() {
    int i=0,idade[10],totalAlunos=30,maior13;
    float altura[10],mediaAltura,somaAltura;

    // Incrementa os dados
    for (i = 0; i < totalAlunos; i++) {
        printf("%d Aluno digite:",i+1);
        printf("\n-> A Idade:");
            scanf("%d",&idade[i]);
        printf("-> A Altura Ex:1.5 ");
            scanf("%f",&altura[i]);
        somaAltura += altura[i];
    }
    mediaAltura = somaAltura/totalAlunos; //Calcula media dos alunos

    //Mostrar a lista de aluno
    for (i = 0; i < totalAlunos; i++) {
        printf("\nO %d aluno  tem %d anos com altura de %.1f Mt",i+1,idade[i],altura[i]);
        if(idade[i] > 13 && altura[i] < mediaAltura){
            maior13 ++;
        }
    }
    printf("\nForam %d alunos com idade superior a 13 e altura menor que media\n\n",maior13);

}
