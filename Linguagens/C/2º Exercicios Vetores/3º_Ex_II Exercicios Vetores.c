/*
 * 03. Em uma competição de salto em distância cada atleta tem direito a cinco saltos.
 * O resultado do atleta será determinado pela média dos cinco valores restantes.
 * Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta
 * em seus saltos e depois informe o nome, os saltos e a média dos saltos. O programa deve ser
 * encerrado quando não for informado o nome do atleta. A saída do programa deve ser conforme o exemplo abaixo:
•	Atleta: Rodrigo Curvêllo
•	Primeiro Salto: 6.5 m
•	Segundo Salto: 6.1 m
•	Terceiro Salto: 6.2 m
•	Quarto Salto: 5.4 m
•	Quinto Salto: 5.3 m
•	Resultado final:
•	Atleta: Rodrigo Curvêllo
•	Saltos: 6.5 - 6.1 - 6.2 - 5.4 - 5.3
•	Média dos saltos: 5.9 m


*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {
    int limite=0,cont;
    char nome[1000][10]; //OBS no vetor usa 1000 porque não é possivel colocar valor infinito
    char salto[5][10] = {"Primeiro","Segundo","Terceiro","Quarto","Quito"};
    float dadosSaltos[5],soma;

    // Incrementa os dados
    while (limite < 3){
        printf("Entre com o nome do %d atleta: ",limite+1);
        scanf("%s",nome[limite]);
        for (int i = 0; i < 5; i++) {
            printf("%s salto em m:", salto[i]);
            scanf("%f", &dadosSaltos[i]);
            cont++;
            soma += dadosSaltos[i];
        }
        limite++;
    }

    for (int i = 0; i < limite ; ++i) {
      printf("\n===========================\n");
      printf("Atleta: %s",nome[i]);
        for (int s = 0; s < 5; ++s) {
            printf("\n%s Salto: %.1f m",salto[s],dadosSaltos[s]);

        }
      printf("\nResultado final:");
      printf("\nAtleta: %s",nome[i]);
      printf("\nSaltos: %.1f - %.1f - %.1f - %.1f - %.1f",dadosSaltos[0],dadosSaltos[1],dadosSaltos[2],dadosSaltos[3],dadosSaltos[4]);
      printf("\nMedia dos saltos: %.1f m",soma/cont);
    }

    printf("\n\nObrigado volte sempre\n");
}
