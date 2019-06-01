#include <stdio.h>
#define tam 8 // definição para quantidade de valores


int main() {

    int valores[tam]={5,1,4,3,6,2,7,9};
    int j,i,aux;
    printf("---------------------");
    printf("\n--Selection sort-----");
    printf("\n---------------------\n");

    //verifica
    for ( j= 1; j < tam ; j++) {
        //O segundo valor é armazenado na variavel aux
        aux = valores[j];
        // o i inicia contador para o while
        i = j - 1;
        while ((i >= 0) && (valores [i] > aux) ){
            //se for verdadeiro os valores são empurado para frete
            valores[i+1] = valores[i];
            i--;
            printf("%2d",valores[i]);
        }
        printf("\n");
        //realiza a troca
        valores[ i + 1 ] = aux;
    }
    printf("\n---------------------");
    printf("\n----- Resultado------");
    printf("\n---------------------\n");

    //imprime os valores ordernados
    for (i = 0; i < tam; i++) {
        printf("%2d",valores[i]);
    }
}
