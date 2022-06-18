#include <stdio.h>
#define TAMVETNUM 5

// Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.

int ex1()
{

    printf("Você escolheu o algoritmo para entrada de 5 inteiros e a saída destes:\n\n");

    int numeros[TAMVETNUM];

    for (int cont = 0; cont < TAMVETNUM; cont++)
    {
        printf("Digite o %dº número: ", cont + 1);
        scanf("%d", &numeros[cont]);
    }

    printf("\nOs números digitados foram:\n");

    for (int cont = 0; cont < TAMVETNUM; cont++)
    {
        printf("%dº número do vetor é = %d\n", cont + 1, numeros[cont]);
    }

    return 0;
}
