// Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

#include <stdio.h>

int main()
{
    int num = !0, pow;
    do
    {
        printf("\n\nPara descobrir o quadrado de certo valor");
        printf("\nPara sair digite \'0\'");
        printf("\nDigite um número: ");
        scanf("%d", &num);
        pow = num * num;
        printf("\nO quadrado de %d é: %d", num, pow);
    } while (num != 0);

    return 0;
}
