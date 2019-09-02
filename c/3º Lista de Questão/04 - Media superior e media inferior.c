/*
4 . Você foi contratado por uma empresa de computadores,empresa está que contem 05 lojas espalhadas pelo país,
Deverá desenvolver um software que receba o lucro destas 05 empresas, mostrando a média de faturamento das
empresas, a empresa que mais faturou e a empresa que menos faturou.
 */
#include <stdio.h>

int main() {
    int i,j,idMaior,idMenor;
    float valores[5],soma,maior=0,menor;
    char *empresa[5]={"Loja DF","Loja GO","Loja SP","Loja MT","Loja BA"};

    printf("=== Sulucoes de  Informatica LTDA =====\n");
    for (i = 0; i < 5; i++) {
        printf("%d - Entre com o lucro da %s: ",i+1,empresa[i]);
        scanf("%f",&valores[i]);
        soma += valores[i];
    }

    for (j = 0; j < 5 ; j++) {
        if (valores[j] > maior) {
            maior = valores[j];
            idMaior = j;
        }
        if ( menor == 0) {
            menor = valores[j];
        } else {
            if(valores[j] < menor) {
                menor = valores[j];
                idMenor=j;
            }
        }
    }
    printf("\n\n=========Resultado=========");
    printf("\nA media dos lucro e de: R$ %.2f reais",soma/5);
    printf("\nA %s foi a mais que faturou com : R$ %.2f reais",empresa[idMaior],maior);
    printf("\nA %s foi a menos que faturou com R$ %.2f reais\n\n",empresa[idMenor],menor);

}
