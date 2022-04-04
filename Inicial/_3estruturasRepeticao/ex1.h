#include <stdio.h>

// Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

void ex1(){

    float nota;

    // solicitando a entrada da nota
    printf("Digite sua nota: ");
    scanf("%f", &nota);

    // enquanto - nota for incorreta (> 10 || < 0), solicitar nota novamente
    while (nota > 10 || nota < 0)
    {
        printf("\nNota inválida!\nFavor, digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
    }
    
    printf("\nParabéns! Sua nota foi registrada!\nNota: %.2f", nota);

}
