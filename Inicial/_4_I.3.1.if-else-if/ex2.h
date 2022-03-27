#include <stdio.h>

// Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

void ex2()
{
    // declarando a variável
    float num;

    // solicitando e "atribuindo" o valor da var
    printf("Digite o valor de um número: ");
    scanf("%f", &num);

    // 1ª condição, se é positivo
    if (num > 0)
        printf("Você digitou um valor positivo");

    // 2ª condição, se é negativo
    else if (num < 0)
        printf("Você digitou um valor negativo");

    // 3ª condição, todo o resto e o 0 (não incluído anteriormente)
    else
    {
        printf("Você digitou um valor inválido ou 0");
    }
}
