#include <stdio.h>

int main(void) {

    int x;
    x=50; //enclema valor na variavel
    int y;
    y=60;

    // * referencia para ponteiro
    int *ponteirox = &x; // enclementa a posição
    ponteirox = &x; // ponteiro recebe posição
    int *ponteiroy =&x;
    ponteiroy = &y;


    printf("%d %d\n",*ponteirox,*ponteiroy); //valores da memória
    printf("%i %i\n",&x,&y);// Endereço na memoria

    return 0;

}
