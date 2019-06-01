/*  Faça um programa que realiza a contagem de cedulas e moeda simulando um caixa eletronico,
 *  que usário possa digitar qualquer valor
 */
#include <stdio.h>

int main() {
    float dinheiro=0;
    int r1=0,r2=0,r5=0,r10=0,r20=0,r50=0,r100=0,c1=0,c5=0,c10=0,c25=0,c50=0;

    printf("**********************\n");
    printf("*   BRANCO CCC     *\n");
    printf("**********************\n");


    printf("Qual o valor quer sacar: ");
        scanf("%f",&dinheiro);
    int cedulas=(int)dinheiro;
    int centavos=(dinheiro-cedulas) *100;

    do{    //loop para realizar a contagem de cedulas
        if (cedulas >=100){
            cedulas -=100;
            r100++;
        } else if(cedulas>=50){
            cedulas-=50;
            r50++;
        } else if(cedulas>=20){
            cedulas-=20;
            r20++;
        } else if(cedulas>=10){
            cedulas-=10;
            r10++;
        } else if(cedulas>=5){
            cedulas-=5;
            r5++;
        } else if(cedulas>=2){
            cedulas-=2;
            r2++;
        } else if(cedulas>=1){
            cedulas-=1;
            r1++;
        }
    }while(cedulas != 0);
    do{   //loop para realizar a contagem de moedas
        if (centavos >=50){
            centavos -=50;
            c50++;
        } else if(centavos>=25){
            centavos-=25;
            c25++;
        } else if(centavos>=10){
            centavos-=10;
            c10++;
        } else if(centavos>=5){
            centavos-=5;
            c5++;
        } else if(centavos>=1){
            centavos-=1;
            c1++;
        }
    }while(centavos != 0);
    if (r100 != 0) {
        printf("\n%d nota(s) de 100 Reais.", r100);
    }
    if (r50 != 0) {
        printf("\n%d nota(s) de 50 Reais.", r50);
    }
    if (r20 != 0) {
        printf("\n%d nota(s) de 20 Reais.", r20);
    }
    if (r10 != 0) {
        printf("\n%d nota(s) de 10 Reais.", r10);
    }
    if (r5 != 0) {
        printf("\n%d nota(s) de 5 Reais.", r5);
    }
    if (r2 != 0) {
        printf("\n%d nota(s) de 2 Reais.", r2);
    }
    if (r1 != 0) {
        printf("\n%d nota(s) de 1 Real.", r1);
    }
    if (c50 != 0) {
        printf("\n%d moeda(s) de 50 centavos.", c50);
    }
    if (c25 != 0) {
        printf("\n%d moeda(s) de 25 centavos.", c25);
    }
    if (c10 != 0) {
        printf("\n%d moeda(s) de 10 centavos.", c10);
    }
    if (c5 != 0) {
        printf("\n%d moeda(s) de 5 centavos.", c5);
    }
    if (c1 != 0) {
        printf("\n%d moeda(s) de 1 centavo.",c1);
    }
    printf("\n\nVolte sempre ao BANCO CCC! Tenha um bom dia\n");

}
