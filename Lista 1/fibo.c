#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int fibonacciB(int n);
unsigned int fib (unsigned int n);

int main (){
    clock_t t;
    t = clock();
    printf("fibo: %d",fib(55));
    t=clock() - t;

    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
    return 0;
}

int fibonacciB(int n)
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

unsigned int fib (unsigned int n)
{
if (n < 2)
 return n;
 return fib (n-2) + fib (n-1);
}