/*
10. Faça um programa que leia um número inteiro e multiplica pela sequência de 0 a 10, depois mostre na tela os
seus resultados dos respectivos valores. No final pergunte para o usuário se queira continuar digite (s)
 senão digite (n)
para finalizar
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int valor,i;
    char resp[1];
    while (true){

        printf("Digite um valor: ");
        scanf("%d",&valor);
        for (i = 0; i < 10; i++) {
            printf("\n%d x %d = %d",valor,i,valor*i);
        }

        repita: //1/2 Usa essa função para repeti a pegunta
        printf("\nVoce deseja continuar s/n ?");
        scanf("%s",&resp);
        if(resp[0] == 'n'){
            break;
        } else{
            if(resp[0] =='s'){
            	system("CLS");
                continue;
            } else{
            	system("CLS");
                printf("\nDesculpe! Voce digitou opcao errada.\nTente novamente! ");
               goto repita;//2/2 Usa essa função para repeti a pegunta
            }
        }
    }
    printf("\nFim do programa\n\n");
}
