#include<stdio.h>
#include<string.h>

main() {

    char str[100];
    printf("\nInforme valor: ");
    gets(str);

    if((strlen(str)==0) || (strcmp(str,"0")==0))
        printf("Vazio\n");
}
