// Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

#include <stdio.h>

int main()
{
    /* Declarando variáveis */
    int num = !0, /* para a entrada do usuário */
        pow;      /* para o quadrado da entrada */

    /* Laço de repetição para cumprir com a sequência */
    do
    {
        printf("\n\nPara descobrir o quadrado de certo valor");
        printf("\nPara sair digite \'0\'");

        /* Entrada de dados */
        printf("\nDigite um número: ");
        scanf("%d", &num);

        /* Processamento de dados */
        pow = num * num;
        /* Saída de dados */
        printf("\nO quadrado de %d é: %d", num, pow);
    } while (num != 0);

    return 0;
}
