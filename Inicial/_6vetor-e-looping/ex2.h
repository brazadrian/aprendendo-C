#include <stdio.h>
#define TAMVETNUM 10

// Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

int ex2()
{

    printf("Você escolheu o algoritmo para entrada de 10 reais e a saída inversa destes:\n\n");

    float numeros[TAMVETNUM];

    for (int cont = 0; cont < TAMVETNUM; cont++)
    {
        printf("Digite o %dº número: ", cont + 1);
        scanf("%f", &numeros[cont]);
    }

    printf("\nOs números digitados, na ordem inversa foram:\n");

    for (int cont = TAMVETNUM - 1; cont >= 0; cont--)
    {
        printf("%.2f\n", numeros[cont]);
    }

    return 0;
}
