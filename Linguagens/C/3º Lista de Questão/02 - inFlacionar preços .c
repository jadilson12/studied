/*
2. Você foi contratado por um mercado para criar um programa que auxilie no preço dos produtos de limpeza,
sendo assim crie um programa que receba 06 produtos com  seus respectivos preços e inflacione esse preço em 18%, se o
valor for maior que 100$ mostre uma mensagem ao usuário que os produtos estão inflacionados, caso contrário mostre o
preço individual novo e antigo de cada produto,
 */
#include <stdio.h>

int main() {
    char produtos[6][10];
    float preco[6],inflacionado[6];
    int i,j, maior=0,menor=0;
    for (i = 0; i < 6; i++) {
        printf("Entre com o nome do %d produto: ",i+1);
            scanf("%s",produtos[i]);
        printf("Entre com preco do %s: ",produtos[i]);
            scanf("%f",&preco[i]);
    }
    printf("\n===> Acima de 100 reais <===");
    for (j = 0; j < 6 ; j++) { //Vericar valor acima de 100
        inflacionado[j] =preco[j] +((preco[j]*18)/100);
        if(inflacionado[j] > 100){
            printf("\nO %s esta inflacionados",produtos[j]);

        } else{
        	maior++;
            continue;
        }
    }
    if (maior == 6 ){
        printf("\nNenhum valor \n");
    }
    printf("\n===> Abaixo de 100 reais <===");
    for (j = 0; j < 6 ; j++) { //Vericar valor Abaixo de 100
        inflacionado[j] =preco[j] +((preco[j]*18)/100);
        if(inflacionado[j] > 100){
        	menor ++;
            continue;
        } else{
            printf("\nO %s o novo valor e R$ %.2f e antigo valor era R$ %.2f",produtos[j],inflacionado[j],preco[j]);
        }
    }
    if (menor == 6 ){
        printf("\nNenhum valor \n");
    }
    printf("\n\n");

}
