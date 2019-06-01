#include <stdio.h>
#include <stdbool.h>
#define LIMITE 4

int pessoa[LIMITE];
void adiciona(int x);
bool filavazia();
bool filacheia();
int retira();


int primeiro=0;
int ultimo=0;
int total=0;


int main(){

    adiciona(1);
    adiciona(2);
    adiciona(3);
    adiciona(4);
    while (!filavazia()){
        int y = retira();
        printf("Foi retirado: %d \n",y);
    }


}
void adiciona(int x){
    if(!filacheia()){
        pessoa[ultimo] = x;
        ultimo = (ultimo + 1) % LIMITE;
        total++;
    }

}

bool filacheia(){
    return (total==LIMITE);
}

bool filavazia(){

    return (total==0);
}

int retira(){
    int fila= pessoa[primeiro];
    if(!filavazia()){
        pessoa[primeiro] = fila;
        primeiro = (primeiro + 1) % LIMITE;
        total --;
    }
    return fila;
}
