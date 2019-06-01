/*
6. Uma loja de discos anota ao final de cada mês a quantidade de discos vendidos. Determinar em qual mês
ocorreu a maior quantidade de vendas de discos e qual a  média de vendas por ano

 */
#include <stdio.h>

int main() {

    float DiscoVendas[2][12],media,maior,total;
    char *mes[12]={"Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};
    char nomeMaior[3];
    int id,j,i;

    for (i = 0; i < 12 ; i++) { //Enclementa volores
        printf("Em %s a loja vendeu quantos disco ? ",mes[i]);
        scanf("%f",&DiscoVendas[0][i]);
        printf("--> %s, vendeu %.0f discos e recardou quantos ? R$ ",mes[i],DiscoVendas[0][i]);
        scanf("%f",&DiscoVendas[1][i]);
        total +=DiscoVendas[1][i];
    }
    for (j = 0; j < 12; j++) { //Verifica o mes que mais vendeu
        if(maior==0){
            maior= DiscoVendas[0][j];
            id = j;
        } else{
            if (DiscoVendas[0][j] > maior){
                maior = DiscoVendas[0][j];
                id = j;
            }
        }
    }
    printf("\n=====> RESULTADO <=====");
    if(maior == 0){
        printf("\nNao foi vendido nenhum disco entre JAN e DEZ.");
    }else {
        printf("\nO mes que mais vedeu foi %s com %.0f discos ", mes[id], maior);
    }

    if(total/12 == 0){
        printf("\nImpossivel calcular a media pois não houve vendas.\n\n");
    } else{
        printf("\nA media de vendas do ano em disco e: R$ %.2f reais.\n\n", total/12);
    }
}
