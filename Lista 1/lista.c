#include <stdlib.h>
#include <stdio.h>

//Exercício 1
int fibonacci(int n);

int fibonacci(int n){
    int a = 0;
    int b = 1;
    int aux =0;

    for(int i=2; i<n; i++){
        aux = b;
        b = a + b;
        a = aux;
    }
    return b;
}

//Exercício 5

//função 1
void insere_inicio (int elemento);

//função 2
void insere_final(int elemento);

typedef struct Lista{
    int elem;
    struct Lista *ptr;
}Lista;

/*
int main(){

}
*/