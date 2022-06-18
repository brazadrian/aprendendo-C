#include <stdio.h>

/*
Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
Imprima os três vetores.
 */

// constante para o tamanho do vetor número[]
#define TAMVETNUM 5

int ex5()
{

    printf("Você escolheu o algoritmo para entrada de 20 inteiros, saída deles, dos ímpares e pares digitados:\n\n");

    // vetor de entrada
    int numero[TAMVETNUM];
    // vetor para armazenar os pares
    int numeroPares[TAMVETNUM];
    // vetor para armazenar os ímpares
    int numeroImpares[TAMVETNUM];

    int i, somaPares = 0, somaImpares = 0;

    // ENTRADA
    for (i = 0; i < TAMVETNUM; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }

    // COMPARACAO
    for (i = 0; i < TAMVETNUM; i++)
    {
        if (numero[i] % 2 == 0) // condicao par
        {
            numeroPares[i] == numero[i];
            somaPares++;
        }
        else if (numero[i] % 2 == 1)
        {
            numeroImpares[i] == numero[i];
            somaImpares++;
        }
    }

    // SAÍDA
    printf("\nVocê digitou %d números, quais foram:\n", TAMVETNUM);
    for (i = 0; i < TAMVETNUM; i++)
    {
        printf("%d ", numero[i]);
    }

    // pares
    printf("\nDos %d números digitados, %d são pares:\n", TAMVETNUM, somaPares);
    for (i = 0; i < somaPares; i++)
    {
        printf("%d ", numeroPares[i]);
    }

    // ímpares
    printf("\nDos %d números digitados, %d são ímpares:\n", TAMVETNUM, somaImpares);
    for (i = 0; i < somaImpares; i++)
    {
        printf("%d ", numeroImpares[i]);
    }

    return 0;
}
