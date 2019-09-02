/* Aluno: Jadilson b. Guedes
 * Exercicio: 08
 * Anuciado: Faça um programa que receba dois números
 *
 * a) Moste a soma, divisão e multiplicação dos números
 * b) Moste o doblo do menor número
 * c) Verifica se a soma dos dois numeros multiplicado com 10(dez) é maior que 100.
 * d) Moste se a subtração dos números é negativos
 */
#include <stdio.h>

int main() {
    float n1, n2, dobro, soma, divisao, multiplicacao, resultado,negativo=0;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("-=-=-= Exercicio: 08 -==-=-=-\n");
    printf("-=-=-=-=-=-=--==-=-=-=-=-=-=-\n");


    printf("Digite um número: ");
        scanf("%f", &n1);

    printf("Digite outro numero: ");
        scanf("%f", &n2);

    printf("\n======== Questão (A) =======\n");
    soma=n1+n2;
    printf("%.0f + %.0f = %.f (Soma) \n",n1,n2,soma);
    divisao=n1/n2;
    printf("%.0f / %.0f = %.1f (Divisão) \n",n1,n2,divisao);
    multiplicacao=n1*n2;
    printf("%.0f x %.0f = %.f (Multiplicação)\n",n1,n2,multiplicacao);

    printf("\n======== Questão (B) =======\n");
    if (n1 < n2){
        dobro=n1*2;
    } else{
        dobro=n2*2;

    }
    printf("O dobro do menor númer foi:%.0f \n",dobro);

    printf("\n======== Questão (C) =======\n");
    resultado=(n1+n2)*10;
    if(resultado > 100){
        printf("Soma dos números x 10 = %.0f foi maior que 100\n", resultado);
    } else{
        printf("Soma dos números x 10 = %.0f foi menor que 100\n", resultado);
    }

    printf("\n======== Questão (D) =======\n");
    negativo=n1-n2;
    if(negativo > 0){
        printf("A subtração de %.2f - %.2f = %.2f",n1,n2,negativo);
        printf("\nResultado: Positivo\n");
    } else{
        if(negativo == 0){
            printf("A subtração de %.2f - %.2f = %.2f",n1,n2,negativo);
            printf("\nResultado: Deu Zero\n");
        } else{
            printf("A subtração de %.2f - %.2f = %.2f",n1,n2,negativo);
            printf("\nResultado: Negativo\n");
        }
    }
    printf("\n====== Fim do Programa =====\n");
}
