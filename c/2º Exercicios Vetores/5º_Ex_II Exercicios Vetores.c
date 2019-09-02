/*
05. Faça um programa que carregue uma lista com os modelos de cinco carros (exemplo de modelos: FUSCA, GOL,
 VECTRA etc). Carregue uma outra lista com o consumo desses carros, isto é, quantos quilômetros cada um
 desses carros faz com um litro de combustível. Calcule e mostre:
a. O modelo do carro mais econômico;
b. Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1000
 quilômetros e quanto isto custará, considerando um que a gasolina custe R$ 2,25 o litro. Abaixo segue uma tela
 de exemplo. O disposição das informações deve ser o mais próxima possível ao exemplo. Os dados são fictícios e
 podem mudar a cada execução do programa.
Comparativo de Consumo de Combustível
•	Veículo 1
•	Nome: fusca
•	Km por litro: 7
•	Veículo 2
•	Nome: gol
•	Km por litro: 10
•	Veículo 3
•	Nome: uno
•	Km por litro: 12.5
•	Veículo 4
•	Nome: Vectra
•	Km por litro: 9
•	Veículo 5
•	Nome: Peugeout
•	Km por litro: 14.5
•	Relatório Final
•	1 - fusca - 7.0 - 142.9 litros - R$ 321.43
•	2 - gol - 10.0 - 100.0 litros - R$ 225.00
•	3 - uno - 12.5 - 80.0 litros - R$ 180.00
•	4 - vectra - 9.0 - 111.1 litros - R$ 250.00
•	5 - peugeout - 14.5 - 69.0 litros - R$ 155.17
1.	O menor consumo é do peugeout.


*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    char nomecar[5][12],nomecarEco[12][12];
    float kmPorLt[5],gasolina=2.25;
    float  distancia=1000,totalkm,totalValor,aux=1,maior;
    int id;

    for (int i = 0; i < 5 ; i++) {
        printf("\nVeiculo %d\n",i+1);
        printf("Entre com no nome do carro: ");
             scanf("%s",nomecar[i]);
        printf("Km por litros: ");
            scanf("%f",&kmPorLt[i]);

    }
    //system("CLS"); //fuciona apenas no windows
    
    printf("Relatório Final");
    for (int j = 0; j <  5; ++j) {
        totalkm = distancia / kmPorLt[j];
        totalValor = totalkm * gasolina;
        printf("\n%d - %s - %.1f - %.2f litros - R$ %.2f", j + 1, nomecar[j], kmPorLt[j], totalkm, totalValor);

        if (kmPorLt[j] > aux) {
            for (int i = 0; i < 5; i++) {
                nomecarEco[j][i] = nomecar[j][i];
            }
            id=j;
            aux = kmPorLt[j];
        }
    }
    printf("\nO menor consumo é do %s .",nomecarEco[id]);
}
