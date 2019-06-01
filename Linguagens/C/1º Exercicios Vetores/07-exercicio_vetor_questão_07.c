/* Aluno: Jadilson Guedes
 *
   7) Faça um programa em C que receba o total das vendas de cada vendedor e  armazene-as
   em um vetor. Receba também o percentual de comissão de cada vendedor e armazene-os
   em outro vetor. Receba os nomes desses vendedores e armazene-os em um terceiro vetor.
   Existem apenas dez vendedores. Calcule e mostre:
 ¨ Um relatório com os nomes dos vendedores e os valores a receber;
 ¨ O total das vendas de todos os vendedores;
 ¨ O maior valor a receber e quem o receberá;
 ¨ O menor valor a receber e quem o receberá.
 */

#include <stdio.h>

int main() {
    int i=0;
    float comissao[10],receber,venda[10],maiorValor=0,menorValor,somavendas;
    char vendedor[10][10];
    char *maiorVendedor,*menorVendedor;

    // Incrementa os dados
    for (i = 0; i < 10; i++) {
        printf("Digite o nome do %d vendedor : ",i+1);
            scanf("%s",vendedor[i]);
        printf("Quanto que %s vedeu R$? ",vendedor[i]);
        scanf("%f",&venda[i]);
        printf("Qual e a comissao do(a) %s que conseguiu as vendas de R$%.2f reais? ",vendedor[i],venda[i]);
        scanf("%f",&comissao[i]);
    }
    printf("\n=== Relatorio de vendedores ===\n");
    // Mostre o relatório
    for (i = 0; i < 10; i++) {
        receber =(venda[i] * comissao[i])/100;
        printf("%10s - Vendeu R$ %.2f reais com a comissao de %.1f%%  vai receber R$ %.2f reais\n",vendedor[i],venda[i],comissao[i],receber);
        somavendas +=venda[i];
        if(receber > maiorValor){
            maiorValor =receber;
            maiorVendedor = vendedor[i];
            menorValor=receber;
        }
        if (receber < menorValor) {
            menorValor= receber;
            menorVendedor = vendedor[i];
        }
    }
    //Mostre os resultado
    printf("\nO total das vendas de todos os vendedores e: R$ %.2f reais\n",somavendas);
    printf("-> Foi %s que recebeu o maior valor que e R$ %.2f\n",maiorVendedor, maiorValor);
    printf("-> Foi %s que recebeu o menor valor que e R$ %.2f\n",menorVendedor, menorValor);

}
