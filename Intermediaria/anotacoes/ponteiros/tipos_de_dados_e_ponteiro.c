#include <stdio.h>

int main()
{
    
    int x = 10;
    double y = 20.50;
    char z = 'a';

    // int *pontX;
    // pX = &x;
    // *pX = &x -> aqui atribuiria o endereço de memória da variável ao ponteiro
    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("valX = %d\npntX = %d\n", x, pX);
    printf("valY = %f\npntY = %d\n", y, pY);
    printf("valY = %c\npntY = %d\n", z, pZ);

    return 0;
}
