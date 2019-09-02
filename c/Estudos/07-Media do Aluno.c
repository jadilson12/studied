/*
 * Faça um programa que adiciciona o aluno e calcula a media entre 2 avaliação!
 */
#include <stdio.h>

int main() {
    printf("%30s","\t\tMÉDIA DO ALUNO\n");

    char aluno[256]; // 256 é a quantidade de caractere q varieal irar acupar
    float nt1,nt2,m=0;
    printf("Digite o nome do aluno: ");
        scanf("%s",&aluno ); // use %s para aparece o nome
    printf("Digite primeira nota: ");
        scanf("%f",&nt1 );
    printf("Digite segunda nota:  ");
        scanf("%f",&nt2 );

    m=((nt1+nt2)/2);
    printf("\t\nO %s obteve a média de %.2f\n\n",aluno, m);

}
