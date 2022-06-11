#include <stdio.h>

int main()
{
    // três notas de um aluno, soma e média
    double nA = 0, nB = 0, nC = 0, soma, media;
    // pesos
    double nAPeso = 2, nBPeso = 3, nCPeso = 5;

    // entrada
    scanf("%lf", &nA);
    scanf("%lf", &nB);
    scanf("%lf", &nC);

    // multiplicando cada entrada pelo seu peso correspondente e somando-as
    soma = (nA * nAPeso) + (nB * nBPeso) + (nC * nCPeso);
    // calculando a média da soma pela soma dos pesos
    media = soma / (nAPeso + nBPeso + nCPeso);

    // saída
    printf("MEDIA = %.1lf\n", media);

    return 0;
}
