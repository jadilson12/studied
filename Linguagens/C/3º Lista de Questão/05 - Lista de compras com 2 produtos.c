/*
5. Você foi contratado por uma empresa para construir um script para calcular o valor dos aros de carro com base na
cor e tamanho, sendo que para:
    ? Aros 15 custam 300,00 por roda
    ? Aros 17 custam 350,00 por roda
    ? Aros 20 custam 450,00 por roda
Assim sendo que o cliente pode customizar a cor.
    ? Azul: 55,00 por roda
    ? Vermelha: 60,00 por roda
    ? Dourada: 80,00 por roda
Faça um programa que receba 04 compras de quatro clientes e mostre:
    a) Quais aros foram mais vendidos;
    b) Quais foram as cores que saíram mais
    c) Qual á media de venda dos produtos levando em consideração a venda de 04 itens. (Aros e Cor);
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,tipoAro,tipoCor,aroMaisVendidos=0,corMaisVendidos=0;
    int cliente[4],clientearo[4],clientecor[4];
    char *nomeAro[4]={"0","Aro 15","Aro17","Aro20"};
    char *nomecor[4]={"0","Azul","Vermelha","Dourada"};
    float valorTotal=0;

    for ( i = 0; i < 4 ; i++) {
        printf("====> %d cliente <====",i+1);
        printf("\nSeleciona o Aro abaixo:");
        printf("\n\t0 - Nenhum");
        printf("\n\t1 - Aros 15 custam 300,00 por roda");
        printf("\n\t2 - Aros 17 custam 350,00 por roda");
        printf("\n\t3 - Aros 20 custam 450,00 por roda\n");
        scanf("%d",&tipoAro);
        clientearo[i]=tipoAro;

        printf("\nSeleciona uma cor abaixo:");
        printf("\n\t0 -Nenhum");
        printf("\n\t1 -Azul: 55,00 por roda");
        printf("\n\t2 -Vermelha: 60,00 por roda");
        printf("\n\t3 -Dourada: 80,00 por roda\n");
        scanf("%d",&tipoCor);
        clientecor[i]=tipoCor;

        //Somar valores dos aros
        if(tipoAro==1){
            valorTotal += 300;
        }
        if(tipoAro==2){
            valorTotal += 350;
        }
        if(tipoAro==3){
            valorTotal += 450;
        }
        //Soma valores das cores
        if(tipoCor==1){
            valorTotal += 55;
        }
        if(tipoCor==2){
            valorTotal += 60;
        }
        if(tipoCor==3){
            valorTotal += 60;
        }
        system("CLS");
    }
    for ( j = 0; j < 4 ; j++) {
        if(aroMaisVendidos == 0){// Calcular o aro mais vendido
            aroMaisVendidos =clientearo[j];
        } else{
            if (clientearo[j] > aroMaisVendidos){
                aroMaisVendidos = clientearo[j];
            }
        }
        if(corMaisVendidos == 0){ //Calcular a cor mais verdido
            corMaisVendidos =clientecor[j];
        } else{
            if (clientecor[j] > corMaisVendidos){
                corMaisVendidos= clientecor[j];
            }
        }
    }
    printf("=====> RESULTADO <=====");
    if(nomeAro[aroMaisVendidos] == "0"){
        printf("\nNenhum aro foi escolhido");
    }else{
        printf("\nO aro mais vendidos e: %s",nomeAro[aroMaisVendidos]);
    }
    if(nomecor[corMaisVendidos] == "0"){
        printf("\nNenhum  cor foi escolhido");
    }else{
        printf("\nA cor que mais saiu e: %s",nomecor[corMaisVendidos]);
    }
    printf("\nA media de todos produtos e: R$ %.2f reais. \n\n",valorTotal/8); // Calcula a media pela quatidade de vendas

}
