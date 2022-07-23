/* Dados um inteiro x (base) e um inteiro não-negativo n(expoente), calcular x^n.*/

#include <stdio.h>
#include <math.h>

int main()
{
    /* Declaração de variáveis */
    int x, /* base */
        n, /* expoente */
        i, /* contador */
        r; /* resultado */

    /* Entrada de dados */
    printf("\nPara um x e n qualquer, será calculada a potência entre eles");
    printf("\nDigite o valor da base (x): ");
    scanf("%d", &x);

    printf("Digite o valor do expoente (n): ");
    scanf("%d", &n);

    /* Processamento de dados */
    r = x;

    for (i = 0; i < n; i++)
    {
        r *= x;
    }

    /* Saída de dados */
    printf("%d^%d = %d\n", x, n, r);

    return 0;
}
