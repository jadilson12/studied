/*
 02. Faça um programa que leia um número indeterminado de valores, correspondentes a notas, encerrando a
    entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado). Após esta entrada
    de dados, faça:
•	Mostre a quantidade de valores que foram lidos;
•	Exiba todos os valores na ordem em que foram informados, um ao lado do
•	outro;
•	Exiba todos os valores na ordem inversa à que foram informados, um abaixo do
•	outro;
•	Calcule e mostre a soma dos valores;
•	Calcule e mostre a média dos valores;
•	Calcule e mostre a quantidade de valores acima da média calculada;
•	Calcule e mostre a quantidade de valores abaixo de sete;
•	Encerre o programa com uma mensagem;

 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int limite=0,cont,valor[1000]; //OBS no vetor usa 1000 porque não é possivel colocar valor infinito
    float somaValores,soma=0,media,acimaMedia,abaixoSete;

    // Incrementa os dados
    while (true){
        printf("Digite o %d valor: ",limite+1);
            scanf("%d",&valor[limite]);

        if(valor[limite] == -1){
            break;
        }
        soma += valor[limite];
        limite++;
        cont ++;
    }
    media = soma/cont; //Calcula media
    printf("\n%d <= Valores lidos.",cont);
    printf("\nValores que foram digitados.\n"); // Mostre os valores
    for (int i = 0; i < limite; i++) {
        printf("|%d ",valor[i]);
        if(valor[i] > media){
            acimaMedia ++;
        }
        if (valor[i] < 7){
            abaixoSete ++;
        }
    }
    printf("\nOrdem inversa.\n");
    for (int i = limite; i >= 0 ; i--) {
        if(valor[i] == -1){ // Realizar a ordem inversa
            continue;
        } else {
            printf("\n%d ", valor[i]);
        }
    }
    printf("\n\n%.0f <= A soma dos valoes",soma);
    printf("\n%.0f <= A media dos valoes.",media);
    printf("\n%.0f <= Quantidades de valoes que foi digitado acima da media.",acimaMedia);
    printf("\n%.0f <= Quantidades de valoes abaixo de sete.",abaixoSete);
    printf("\n\nObrigado volte sempre\n");
}
