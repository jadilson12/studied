#include <stdio.h>
#define MAX 10

int inicio, fim;
int pilha[MAX];

void push(int x);
int pop();
int estaVazia();
int estaCheia();
int peek();

int main(){
    inicio=0;
    fim=0;
    push(2);
    push(35);
    push(60);
    int valor=pop();
    printf("O topo da pilha e %d",peek());

}
int estaVazia(){

    return ((inicio=0) && (fim ==0));

}

int estaCheia(){
    if(fim == MAX){
        return 1;
    } else{
        return 0;
    }

}
void push(int x){
    if(estaCheia()==0){
        pilha[fim++]=x;
    }
}
int peek(){
    int topo = pilha[fim-1];
    return topo;

}
int pop(){
    int  tira= pilha[fim--];
    return tira;
}
