#include <stdio.h>

// Faça um Programa que peça dois números e imprima o maior deles.

void ex1()
{

    float num1, num2, numMaior;

    // solicitando e "atribuindo" os dois valores
    printf("Digite o 1º número: ");
    scanf("%f", &num1);

    printf("Digite o 2º número: ");
    scanf("%f", &num2);

    // condições para, se, o número em questão for maior, atribuí-lo à variável 'numMaior' e imprimí-la
    if (num1 > num2)
    {
        numMaior = num1;
        printf("O maior número é: %.2f", numMaior);
    }
    else if (num2 > num1)
    {
        numMaior = num2;
        printf("O maior número é: %.2f", numMaior);
    }

    else
        printf("Os números digitados são iguais\n");
}
