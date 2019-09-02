/*
04. Uma empresa de pesquisas precisa tabular os resultados da seguinte enquete feita a
 uma grande quantidade de organizações: "Qual o melhor Sistema Operacional para uso em
 servidores?" As possíveis respostas são:
•	1- Windows XP
•	2- Unix
•	3- Linux
•	4- Netware
•	5- Mac OS
•	6- Outro

Você foi contratado para desenvolver um programa em C que leia o resultado da enquete e informe ao final o
 resultado da mesma. O programa deverá ler os valores até ser informado o valor 0, que encerra a entrada dos
 dados. Não deverão ser aceitos valores além dos válidos para o programa (0 a 6). Os valores referentes a cada
 uma das opções devem ser armazenados num vetor. Após os dados terem sido completamente informados, o programa
 deverá calcular a percentual de cada um dos concorrentes e informar o vencedor da enquete. O formato da saída
 foi dado pela empresa, e é o seguinte:

•	Sistema Operacional Votos %
•	------------------- ----- ---
•	Windows XP 1500 17%
•	Unix 3500 40%
•	Linux 3000 34%
•	Netware 500 5%
•	Mac OS 150 2%
•	Outro 150 2%
•	------------------- -----
•	Total 8800
O Sistema Operacional mais votado foi o Unix, com 3500 votos, correspondendo a 40% dos votos.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>


int main() {
    int id,cont,resposta,votos[1000],os;
    char nomeOS[1000][12]={"Windows XP","Unix","Linux","Netware","Mac OS", "Outro"};
    double somaVoltos[1000],maiosvotadoPocentagem,maiosvotado=0;
    char maiosvotadoNome[1000][12];

    // Incrementa os dados
    do {
        printf("\nQual o melhor Sistema Operacional para uso em servidores?");
        printf("\n•\t1- Windows XP\n•\t2- Unix\n•\t3- Linux\n•\t4- Netware\n•\t5- Mac OS\n•\t6- Outro");
        printf("\nAs possíveis respostas são:");
        scanf("%d",&resposta);
        switch (resposta) { // Escolha na enquete
            case 1:
                os=1;
                printf("\nSeu voto escolhido foi %s.\n",nomeOS[os-1]);
                break;
            case 2:
                os=2;
                printf("\nSeu voto escolhido foi %s.\n",nomeOS[os-1]);
                break;
            case 3:
                os=3;
                printf("\nSeu voto escolhido foi %s.\n",nomeOS[os-1]);
                break;
            case 4:
                os=4;
                printf("\nSeu voto escolhido foi %s.\n",nomeOS[os-1]);
                break;
            case 5:
                os=5;
                printf("\nSeu voto escolhido foi %s.\n",nomeOS[os-1]);
                break;
            case 6:
                os=6;
                printf("\nSeu voto escolhido foi %s.\n",nomeOS[os-1]);
                break;
            default:
                if(resposta == 0){
                    break;
                } else{
                    printf("\nValor invalido favor tente novamente!\n");
                    break;
                }
        }
        votos[cont]= os;
        if(resposta == 0){
            break;
        }
        if (resposta < 0 || resposta > 6){
            continue;
        } else{
            cont++;
        }

        //system("CLS"); //fuciona apenas no windows
    }while (true);
    for (int i = 0; i < cont; ++i) { // realizar soma de  votos
        if (votos[i]== 1){
            somaVoltos[0]++;
        }
        if (votos[i]== 2){
            somaVoltos[1]++;
        }
        if (votos[i]== 3) {
            somaVoltos[2]++;
        }
        if (votos[i]== 4) {
            somaVoltos[3]++;
        }
        if (votos[i]== 5) {
            somaVoltos[4]++;
        }
        if (votos[i]== 6) {
            somaVoltos[5]++;
        }

    }
    for (int m = 0; m < 6; m++) { //Verificar o mais voltado
        if (somaVoltos[m] > maiosvotado){
            maiosvotado = somaVoltos[m];
            maiosvotadoPocentagem = (maiosvotado*100)/cont;
            if(votos[m] == 1){
                id=0;
            }
            if(votos[m] == 2){
                id=1;
            }
            if(votos[m]== 3){
                id=2;
            }
            if(votos[m]== 4){
                id=3;
            }
            if(votos[m] == 5){
                id=4;
            }
            if(votos[m] == 6){
                id=5;
            }

        }
    }
    printf("\nSistema Operacional Votos %%");
    printf("\n•	-----------------------------");
    printf("\n•	Windows XP %.0f %.0f%%",somaVoltos[0],(somaVoltos[0]*100)/cont);
    printf("\n•	Unix %.0f %.0f%%",somaVoltos[1],(somaVoltos[1]*100)/cont);
    printf("\n•	Linux %.0f %.0f%%",somaVoltos[2],(somaVoltos[2]*100)/cont);
    printf("\n•	Netware %.0f %.0f%%",somaVoltos[3],(somaVoltos[3]*100)/cont);
    printf("\n•	Mac OS %.0f %.0f%%",somaVoltos[4],(somaVoltos[4]*100)/cont);
    printf("\n•	Outro %.0f %.0f%%",somaVoltos[5],(somaVoltos[5]*100)/cont);
    printf("\n•	-----------------------------");
    printf("\nTotal %d  ",cont);
    printf("\nO Sistema Operacional mais votado foi o %s, com %.0f votos, correspondendo a %.0f%% dos votos.",nomeOS[id],maiosvotado,maiosvotadoPocentagem);

    printf("\n\nFim do programa,Obrigado!\n");

}
