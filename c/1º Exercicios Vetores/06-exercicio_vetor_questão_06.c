/* Aluno: Jadilson Guedes
 *
    6) Faça um programa em C que receba o nome de cinco produtos e seus respectivos preços,
    armazene-os em dois vetores separados, um para os produtos e outro para os preços. O
    programa deve calcular e mostrar:
         ̈ A quantidade de produtos com preço inferior a R$ 50,00;
         ̈ O nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
         ̈ A média dos preços dos produtos com preço superior a R$ 100,00.
 */

#include <stdio.h>

int main() {
    int i=0,menor50,entre50e100,maior100;
    float preco[5],maior100soma,maior100Media;
    char  produto[5][10];

    //Incrementa os dados
    for (i = 0; i < 5; i++) {
        printf("%d-Digite o nome do produto : ",i+1);
            scanf("%s",produto[i]);
        printf("-> Agora digite o preco do %s R$: ",produto[i]);
            scanf("%f",&preco[i]);
    }
    printf("\n=== Tabela de preco ===\n");
    //Mostre a tabela de preços
    for (i = 0; i < 5; i++) {
        printf("%d- %.10s custa R$ %0.2f\n",i+1,produto[i],preco[i]);
        if(preco[i] < 50){
            menor50 ++;
        }
        if(preco[i] > 100){
            maior100++;
            maior100soma += preco[i];
        }
    }
    //Mostre o valor menor
    printf("\n̈A quantidade de produtos com preco inferior a R$ 50,00: %d\n",menor50);
    printf("O nome dos produtos com preco entre R$ 50,00 e R$ 100,00 sao;\n");
    for (i = 0; i < 5; i++) {
        if(preco[i] > 50 && preco[i] < 100 ) {
            //Mostre o nome do produto
            printf("-> %s  custando R$ %.2f reais \n", produto[i],preco[i]);
        }
    }
    maior100Media = maior100soma/maior100;
    //Mostre media superior a 100
    printf("\nA media dos precos dos produtos com preco superior a R$ 100,00 : R$ %.2f \n\n",maior100Media);

}
