
// Faça um programa, com uma função que necessite de um argumento. A função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo.
#include <stdio.h>

int main(void)
{
    int valor;

    scanf("%d", &valor);

    positividade(valor);
}

char positividade(int num)
{
    char valor = 'P';
    if (num > 0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }

    return valor;
}
