#include <stdio.h>
#define tam 8 // definição para quantidade de valores


int main() {

    int valores[tam]={5,1,4,3,6,2,7,9};
    int j,i,aux,menor;
    printf("---------------------");
    printf("\n--Selection sort-----");
    printf("\n---------------------\n");

    //verifica
    for ( j= 0; j <( tam-1) ; j++) {

        // menor é o primeior numero ainda ele não ordenado
        menor = j;
        for (i = j+1; i < tam ; i++) {
            //caso tenha algum numero menor ele realiza a troca
            if (valores[i] < valores[menor]){
                menor = i;
            }
            printf("%2d",valores[i]);
        }
        printf("\n");
        // se o menor for diferente do primeiro ele ordena
        if (j != menor) {
            aux = valores[j];
            valores[j] = valores[menor];
            valores[menor]=aux;
        }
    }
    printf("\n---------------------");
    printf("\n----- Resultado------");
    printf("\n---------------------\n");

    //imprime os valores ordernados
    for (i = 0; i < tam; i++) {
        printf("%2d",valores[i]);
    }
}
