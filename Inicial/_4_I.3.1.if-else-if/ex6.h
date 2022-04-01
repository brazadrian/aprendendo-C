#include <stdio.h>

// Faça um Programa que leia três números e mostre o maior deles.
// usando-se de operadores lógicos

float ex6()
{

    // declarando variáveis
    float num1, num2, num3, numMaior;

    // entrada de dados
    printf("Digite o 1º número: ");
    scanf("%f", &num1);

    printf("Digite o 2º número: ");
    scanf("%f", &num2);

    printf("Digite o 3º número: ");
    scanf("%f", &num3);

    // condições a fim de saber qual maior valor dentre as três variáveis
    // usando-se de operador lógico E (&&)
    if (num1 > num2 && num1 > num3)
    {
        numMaior = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        numMaior = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        numMaior = num3;
    }

    // saída de dados: dizendo qual dos valores é o maior
    printf("\nO maior número dentre os valores digitados é: %.2f", numMaior);

    return numMaior;
}