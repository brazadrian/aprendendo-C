#include <stdio.h>

int main()
{
    /*
    Leia quatro valores inteiros A, B, C e D.
    A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D
    segundo a fórmula: DIFERENCA = (A * B - C * D).
    */

    // declaração das variáveis
    int A, B, C, D, diferenca;

    // entrada de dados
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    // processamento
    diferenca = A * B - C * D;

    // saída
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
