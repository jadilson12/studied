#include <stdio.h>

int main() {
    int v1 = 0;
    int v2 = 0;
    char p;

    inicio:

    printf("Digite um valor: ");
        scanf("%d",&v1);
    printf("Digite outro valor:");
        scanf("%d", &v2);

    printf("O 1º valor foi digitado: %d\n", v1);
    printf("O 2º valor foi digitado: %d\n", v2);

    printf("Você que continuar [s/n]: ");
        scanf("%s",&p);

    if (p == 's'|| p =='S'){
        goto inicio;
    }
    printf("Fim do Programa");
}
