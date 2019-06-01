/*
1. Você foi contratado por uma empresa de contabilidade e a sua primeira tarefa é fazer um programa que resolva a
seguinte situação.
    Suponha que os brasileiros consomem arroz por região, queremos saber a media ponderada de
consumo de arroz por região no Brasil, na região norte eles consomem 100 kilos de arroz, na região sul são 186 kilos,
no Nordeste são 89 kilos, Centroeste 146 kilos com base nos dados calcule a média por região uma vez que temos os
seguintes pesos: Norte 03, sul 05, Nordeste 07 e centroeste.
09.
 */
#include <stdio.h>

int main() {
    int norte=100,sul=186, nordeste=89,centroeste=146;
    float m_norte,m_sul,m_nordeste,m_centroeste,media;

    m_norte=norte*03;
    m_sul=sul*05;
    m_nordeste=nordeste*07;
    m_centroeste=centroeste*9;
    media=(m_centroeste+m_nordeste+m_norte+m_sul)/(3+5+7+9); //Calcular a media

    printf("\nA media das regioes e: %.2f\n\n",media);

}
