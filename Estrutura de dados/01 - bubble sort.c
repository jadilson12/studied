#include <stdio.h>
#define tam 5 // definição para quantidade de valores


int main() {

    int valores[tam]={5,1,4,3,6};
    int j,i,aux;
    printf("--------------------");
    printf("\n----Bubble sort-----");
    printf("\n---------------------\n");

    //verifica
    for ( j= 0; j <tam-1 ; j++) {
        for (i = 0; i < (tam-j-1) ; i++) {
            if (valores[i] > valores[i+1]){
                //aux recebe 5
                aux = valores[i];
                // prosição do 5 recebe 1
                valores[i] = valores[i+1];
                //posição 1 recebe  5
                valores[i+1]=aux;
            }
            printf("%2d",valores[i]);
        }
        printf("\n");
    }
    printf("\n---------------------");
    printf("\n----- Resultado------");
    printf("\n---------------------\n");

    //mostre o valores ordernados
    for (j = 0; j < tam; j++) {
        printf("%2d",valores[j]);
    }
}
