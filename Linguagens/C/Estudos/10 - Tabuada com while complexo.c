/*
 * Faça uma tabuada usando o while simples
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int i = 1;
    int valor;
    char p;

    printf("******************\n");
    printf("%10s", "\tTabuada \n");
    printf("******************\n");

   while (true){
       printf("Digite um valor: ");
       scanf("%d", &valor);
        i=0;
        while (i <10) {
            i++;
            printf("%d x %d = %d\n", valor, i, valor * i);
        }
       printf("Continua [s/n]: ");
       scanf("%s", &p);
       if(p!='s'){
           break;
        }
       if(p=='s'){
           continue;
       }
    }

}
