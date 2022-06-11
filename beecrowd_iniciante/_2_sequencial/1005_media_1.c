#include <stdio.h>

int main()
{
    // duas notas de um aluno, soma e média
    double nA = 0, nB = 0, soma, media;
    // pesos
    double nAPeso = 3.5, nBPeso = 7.5;

    // entrada
    scanf("%lf", &nA);
    scanf("%lf", &nB);

    // somando as entradas com seus pesos
    soma = (nA * nAPeso) + (nB * nBPeso);
    // calculando a média da soma pela soma dos pesos
    media = soma / (nAPeso + nBPeso);

    // saída
    printf("MEDIA = %.5lf\n", media);

    return 0;
}
