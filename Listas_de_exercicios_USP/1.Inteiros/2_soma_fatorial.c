// Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

#include <stdio.h>

int main()
{
    /* Declaração de variáveis */
    int n, /* para a entrada do usuário */
        i, /* contador para laço de repetição */
        x; /* para o resultado da soma geral */

    /* Entrada de dados */
    printf("\nCalcular a soma dos n primeiros números inteiros positivos");
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    /* Processamento de dados */
    for (i = n; i > 0; i--)
    {
        x += i;
    }

    /* Saída de dados */
    printf("\nA soma dos n primeiros números é igual a: %d\n", x);

    return 0;
}
