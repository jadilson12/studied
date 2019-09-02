/*
12. Os contribuintes que vendem mais de R$ 20 mil de ações na Bolsa de Valores em um mês, deverão pagar Imposto de
Renda. O pagamento do Imposto de Renda para a Receita Federal consistirá em 15% do lucro obtido com a venda das
ações.
 Faça um programa em C, utilizando cinco vendedores de ações como exemplo, que mostre qual é o lucro de
cada um em sua respectiva venda, que mostre quanto cada um deve pagar de Imposto de Renda para a receita e por fim, a
 média com os lucros de ambos e a média com os impostos de ambos. Mostre uma mensagem caso a venda do contribuinte
 seja menor que R$ 20 mil.
 */
#include <stdio.h>

int main() {
    int i,j;
    float vendedores[3][5],soma=0,mediaIR=0,somaIR=0;
    for (i = 0; i < 5; i++) {
        printf("\n=====> O %d vendedor <======",i+1);
        printf("\nDigite sua venda: ");
        scanf("%f",&vendedores[0][i]); // linha 0 será o venda
        if(vendedores[0][i] > 20000){
            vendedores[1][i] = (vendedores[0][i]*15)/100;// linha 1 será o lucro
        } else{
            vendedores[1][i] = 0;
        }
        vendedores[2][i] = vendedores[1][i] - vendedores[0][i];
        soma += vendedores[0][i];
        somaIR +=vendedores[1][i];
    }
    mediaIR = somaIR/5;
    printf("===> Lista de vendedores <=====");
    for (j = 0; j < 5; j++) {
        if(vendedores[0][j] > 20000){
            printf("\n O %d vendedor vendeu R$ %.2f reais seu IR e de : %.2f reais.",j+1,vendedores[0][j],vendedores[1][j]);
        } else{
            printf("\n O %d vendedor vendeu R$ %.2f reais seu IR e de : %.2f reais. VENDEDOR VENDEU MENOS QUE R$ 20,0000",j+1,vendedores[0][j],vendedores[1][j]);
        }

    }
    printf("\n====> Resultado <====");
    printf("\nA media das vendas e: R$ %.2f reais.",soma/5);
    if(mediaIR != 0){
        printf("\nA media dos IR e: R$ %.2f reais.",mediaIR);
    } else{
        printf("\nA media esta zerada ou seja nenhum vendedor vendeu acima de R$ 20000");
    }

    printf("\n\n");
}
