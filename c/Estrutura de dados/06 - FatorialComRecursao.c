#include <stdio.h>

int fatorial(int aux) {

    if(aux == 1){
        return 1;
    }
    return aux * fatorial(aux -1) ;

}

int main() {

    int valor;

    printf("Digite um valor: ");
    scanf("%d",&valor);

    int total = fatorial(valor);

    printf("\nO fatorial e:%d \n", total);
}
