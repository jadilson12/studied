#include <stdio.h>

void InsertSort(int A[],int n){

    int i,indice,valor;

    for (i = 0; i < n; i++) {
        valor = A[i];
        indice = i;
        while (indice > 0 && A[indice - 1] > valor){
            A[indice] = A[indice - 1];
            indice --;
        }
        //troca
        A[indice]=valor;
    }
    for (i = 0; i < n; i++) {
        printf(" %d ",A[i]);

    }

}

int main() {

    int arrey[6]={85,12,59,45,72,51};
    int i;
    InsertSort(arrey,6);
}
