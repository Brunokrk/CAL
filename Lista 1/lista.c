#include <stdlib.h>
#include <stdio.h>
typedef struct Lista
{
    int elem;
    struct Lista *ptr;
} Lista;

typedef struct Arvore{
    int elem;
    struct Arvore *esq, *dir;
}Arvore;

int fibonacci(int n); //ex1

Lista *inicializa(void); //ex 5
void imprime(Lista *l);  //ex 5
Lista *insere_inicio(Lista *lista, int elemento); //ex 5
Lista *insere_final(Lista *lista, int elemento); //ex 5

int main()
{
    //-----------------------Exercício 1--------------------------------
    //printf("fibonacci: %d \n", fibonacci(5));

    //-----------------------Exercício 5--------------------------------
    Lista *lista = inicializa(); //inicializa lista
    lista = insere_inicio(lista, 4);
    lista = insere_inicio(lista, 3);
    lista = insere_inicio(lista, 2);
    lista = insere_inicio(lista, 1);
    lista = insere_final(lista, 5);
    lista = insere_inicio(lista, 0);
    imprime(lista);
}

//Exercício 1

int fibonacci(int n)
{
    int a = 0, b = 1, aux = 0;

    if (n == 1)
        return a;
    if (n == 2)
        return b;

    for (int i = 2; i < n; i++)
    {
        aux = b;
        b = a + b;
        a = aux;
    }
    return b;
}

//----------------------Exercício 5-----------------------------------

Lista *inicializa(void)
{
    //função apenas para ajudar implementação, não necessária para o exercício
    return NULL;
}

Lista *insere_inicio(Lista *lista, int elemento)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->elem = elemento;
    novo->ptr = lista;
    return novo;
}

Lista *insere_final(Lista *lista, int elemento)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->elem = elemento;
    novo->ptr = NULL;
    Lista *aux = lista;

    while (aux->ptr != NULL)
    {
        aux = aux->ptr;
    }
    aux->ptr = novo;
    return lista;
}

void imprime(Lista *lista)
{
    //função apenas para ajudar implementação, não necessária para o exercício
    Lista *aux; 
    for (aux = lista; aux != NULL; aux = aux->ptr)
        printf("info = %d\n", aux->elem);
}



