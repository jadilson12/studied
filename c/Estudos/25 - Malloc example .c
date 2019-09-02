#include <stdio.h>
#include <string.h>
#include <malloc.h>

main() {
    int i, qtd, *numeros;
    printf("Quantos números deseja informar? ");
    scanf("%d", &qtd);
    numeros = (int *)malloc(qtd * sizeof(int));
    printf("Informe %d números inteiros:\n", qtd);
    for (i = 0; i < qtd; i++)
        scanf("%d", &numeros[i]);
    printf("Dobro dos números informados em ordem inversa:\n");
    for (i = qtd - 1; i >= 0; i--) {
        numeros[i] = numeros[i] * 2;
        printf("%d\n", numeros[i]);
    }
}
