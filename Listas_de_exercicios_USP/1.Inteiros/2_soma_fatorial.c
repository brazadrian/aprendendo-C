// Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

#include <stdio.h>

int main()
{
    int n, i, x;

    printf("\nCalcular a soma dos n primeiros números inteiros positivos");
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        x += i;
    }
    printf("\nA soma dos n primeiros números é igual a: %d\n", x);

    return 0;
}
