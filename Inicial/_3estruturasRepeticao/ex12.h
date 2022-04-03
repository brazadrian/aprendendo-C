#include <stdio.h>

/* 
Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:
Tabuada de 5:
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50
 */

void ex12(){
    
    int numMultiplicado, resultado;

    printf("Digite um valor entre 1 e 10 para descobri sua tabuada: ");
    scanf("%i", &numMultiplicado);

    // tenta fazer com vetor
    int contador = 0;

    // repetir enquanto não for um número entre 1 e 10
    while(numMultiplicado > 10 || numMultiplicado < 1)
        {
            printf("Favor digite um valor entre 1 e 10: ");
            scanf("%i", &numMultiplicado);
        }

    // Saída para melhor visualização do usuário
    printf("A tabuada de %d é: ", numMultiplicado);

    // For de de 0 até 10 
    for(contador = 0; contador<=10; contador++)
        {
            resultado = numMultiplicado*contador;
            printf("\n%i X %i = %i", numMultiplicado, contador, resultado);
        }

}
