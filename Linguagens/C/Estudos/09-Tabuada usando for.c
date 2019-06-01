/*
 * Faça uma tabuada usando o for simples
 */
#include <stdio.h>

int main() {
    //int i=0;
    int valor;
    printf("******************\n");
    printf("%10s","\tTabuada \n");
    printf("******************\n");
    printf("Digite um valor: ");
        scanf("%d",&valor);

    for (int i = 0; i < 10; ++i) {
        printf("%d x %d = %d\n",valor,i,valor*i);
    }

}
