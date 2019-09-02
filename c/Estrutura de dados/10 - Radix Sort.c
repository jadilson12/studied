#include<stdio.h>
#include<stdlib.h>
#define TAM 4

void radixsort(int vetor[], int tamanho) {
    int i;
    int *b;
    int maior = vetor[0];
    int exp = 1;

    /*
     * calloc() faz a mesma coisa que malloc(), aloca memória no heap de acordo com o tamanho passado e retorna um ponteiro para o local
     * onde houve a alocação, com um extra, ela zera toda espaço alocado.
     *
     */
    b = (int *)calloc(tamanho, sizeof(int));

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    while (maior/exp > 0) {
        //Criar um vetor com todos valores zerado para armazernar o indice do valores
        int balde[10] = { 0 };

        //verica a posição do indice unidades
        for (i = 0; i < tamanho; i++)
            balde[(vetor[i] / exp) % 10]++;

        //criar ordenação dos valores menor para o maior
        for (i = 1; i < 10; i++)
            balde[i] += balde[i - 1];

        //verica a posição do indice dezenas e outros
        for (i = tamanho - 1; i >= 0; i--)
            b[--balde[(vetor[i] / exp) % 10]] = vetor[i];
       
        //Vetor recebem os  valores do ponteiro ordernados
        for (i = 0; i < tamanho; i++)
            vetor[i] = b[i];
        exp *= 10;
    }

    //Libera memoria
    free(b);
}

int main(){
    int i;
    int valores [4] = {45,34,13,16,};

    //mostre o array sem ordenação
    for ( i= 0; i < TAM; i++){
        printf(" %d " ,valores[i]);
    }

    printf("\n");


    radixsort(valores,TAM);

    //mostre o array ordenado
    for ( i= 0; i < TAM; i++){
        printf(" %d " ,valores[i]);
    }



}

