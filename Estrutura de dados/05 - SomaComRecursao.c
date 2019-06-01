#include <stdio.h>

int somaComRecursao(int num) {
    int aux=0;

    //Verificar se valor para sair do loop
    if(num == 0){
        return 0;
    }
    printf("Digite um valor para soma e 0 para parar: ");
    scanf("%d",&aux);

    return num + somaComRecursao(aux);

}

int main() {

    int valor;

    printf("Digite um valor para soma e 0 para parar: ");
    scanf("%d",&valor);

    printf("\n---- Resultado é :%d          ----\n", somaComRecursao(valor));
}
