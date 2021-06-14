#include <stdlib.h>
#include <stdio.h>
typedef struct Lista
{
    int elem;
    struct Lista *ptr;
} Lista;

int fibonacci(int n);//ex1


Lista *inicializa(void);//ex 5
void imprime(Lista *l); //ex 5
//função 1
Lista *insere_inicio(Lista *lista, int elemento);//ex 5
//função 2
Lista *insere_final(Lista *lista, int elemento);//ex 5

int main()
{
    //-----------------------Exercício 5--------------------------------
    Lista *lista = inicializa(); //inicializa lista
    lista = insere_inicio(lista, 4);
    lista = insere_inicio(lista, 3);
    lista = insere_inicio(lista, 2);
    lista = insere_inicio(lista, 1);
    lista = insere_final(lista, 5);
    imprime(lista);
}

//Exercício 1

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int aux = 0;

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

void imprime(Lista *l)
{
    Lista *p; /* variável auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->ptr)
        printf("info = %d\n", p->elem);
}
