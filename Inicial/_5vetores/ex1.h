#include <stdio.h>

// Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500.

void ex1()
{

    // declarando variáveis
    int soma = 0, num = 0;

    printf("\nEstes são os números ímpares e múltiplos de 3, entre 0 e 500:\n");

    // Limitando que os valores sejam até 500
    while (num <= 500)
    {
        // primeira condição testa se é ímpar
        // segunda condição testa se é múltiplo de 3
        if (num % 2 == 1 && num % 3 == 0)
        {
            //imprimindo os valores ímpares e múltiplos de 3
            printf("%d, ", num);
            // somando dentro do if, apenas os valores enquadrados
            soma = soma + num;
        }
        // incrementando
        num++;
    }
    // saída com a soma de todos os números em questão
    printf("\n\nA soma de todos os números é igual a: %d", soma);
}
