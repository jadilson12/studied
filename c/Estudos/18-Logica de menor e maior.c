#include<stdio.h>
#include<stdlib.h>
int main()
{
    int valor,maior=0,menor=0;
    printf("digite os valores:");
     scanf("%d",&valor);
    maior=valor;
    menor=valor;
    while(valor!=0){
        if(valor>0){
            if(valor>maior){
                maior=valor;
            }
            if(valor < menor){
                menor=valor;}
        }
        else
            printf("Valor invalido.\n");
        printf("digite os valores:");
         scanf("%d",&valor);
    }

    printf("O maior numero digitado é:%d\n",maior);
    printf("O menor numero digitado é:%d\n",menor);
    system("Pause");
}
