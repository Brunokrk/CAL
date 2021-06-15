#include <stdio.h>
#include <stdlib.h>

unsigned int potencia (unsigned int b, unsigned int e)
{
    unsigned int r;
    if (e == 0)
        return 1;
    r = potencia(b, e/2);
    if (e % 2 == 0)
        return r*r;
    else
        return r*r*b;
    
}

int main(){
    printf("%d", potencia(2,30));

    return 0;
}