/*
3. Uma empresa de engenheiros necessita melhorar o seu trabalho tornando-o mais eficaz, pensando em resolver esse
problema você foi contratado para criar um programa para calcular a área de um terreno em forma de quadrado. Faça
um programa que receba os diâmetros dos lados de um terreno em metros, calcule e mostre a área do terreno.
Teste os lados para verificar se de fato é um quadrado.Formula para calcular (lado x lado) o terreno em forma de
quadrado.
Obs: Lembre-se que o quadrado é um quadrilátero regular que apresenta quatro lados congruentes (mesa medida).
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    float x,y;
    printf("Entre com um valor: ");
        scanf("%f",&x);
    printf("Entre com outro valor: ");
        scanf("%f",&y);

    system("CLS");//limpa a tela


     if(x == y){
         printf("\nOk! QUADRILATERO. \nOs valores digitados foram %.1f MT e %.1f MT",x,y);
         printf("\nA area e: %.1f metros", x*y);
     } else{
         printf("\nDesculpe! Nao e QUADRILATERO.\n");
         printf("\nOs valores digitados foram %.1f MT e %.1f MT",x,y);
         printf("\nA area e: %.1f metros", x*y);
     }

    printf("\n\n");

}
