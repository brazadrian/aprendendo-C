#include <stdio.h>
#include "manipula_vetor.h"

// SOMAR
void somar(int *numero, int quantidade)
{
    int resultado = 0;
    for (int i = 0; i < quantidade; i++)
    {
        resultado += numero[i];
    }
    printf("A soma dos números digitados é = %d", resultado);
}

// MULTIPLICAR
void multiplicar(int *numero, int quantidade)
{
    int resultado = 1;
    for (int i = 0; i < quantidade; i++)
    {
        resultado *= numero[i];
    }
    printf("O produto dos números digitados é = %d", resultado);
}
