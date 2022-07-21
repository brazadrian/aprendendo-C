/* Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
    Exemplo: Para n=4 a saída deverá ser 1,3,5,7. */

#include <stdio.h>

int main()
{
    /* Declaração de variáveis */
    int n, /* para a entrada do usuário */
        i; /* contador para laço de repetição */

    /* Entrada de dados */
    printf("\nPara um n qualquer, será impresso os n primeiros naturais ímpares a ele");
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    /* Saída de dados */
    i = 1;
    printf("Os ímpares anteriores ao n foram: ");
    while (i <= n)
    {
        printf(", %d", i);

        // incremento duplo para ir de ímpar em ímpar
        i++;
        i++;
    }

    printf("\n");

    return 0;
}
