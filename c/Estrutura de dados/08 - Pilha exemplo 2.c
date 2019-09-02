#include <stdio.h>
#define LIMITE 10

int tijolos[LIMITE];
 void push(int x);
 int peek();
 int espacovazio();
 int alturafim();
 int pop();
 int count=0;


int main(){
    int inicio=0;

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    int valor = pop();
    printf("o topo é: %d ", peek());
}

int peek(){
    int topo = tijolos[count-1];
    return topo;
}
void push(int x){
    if(alturafim() == 0){
      tijolos[count++] = x;
    }
}
int alturafim(){
    return (count== LIMITE);
}

int pop(){
    if(espacovazio() == 0){
     int tira= tijolos[count--];
        return tira;
    }
}

int espacovazio(){
    return (count == 0);
}
