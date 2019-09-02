#include <stdio.h>
//#define tam 9 // definição para quantidade de valores

void SelectionSort(int A[],int n){

    int i,j,aux,menor;

        for (i = 0; i < n; i++) {

            menor = i;

            // verificar se valor
            for (j = i+1; j < n; j++) {
                if (A[j] < A[menor]) {
                menor = j;
                }
            }

            //Realiza a troca
            aux = A[i];
            A[i] = A[menor];
            A[menor]=aux;

        }

        //Mostar na resultado
        for (i = 0; i < n ; i++) {
            printf(" %d ",A[i]);

        }
    }

int main() {

    int arrey[9]={20,1,32,8,5,12,6,42,2};
    int i;

    SelectionSort(arrey,9);


}
