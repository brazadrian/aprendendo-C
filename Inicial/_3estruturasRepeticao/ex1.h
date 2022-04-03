#include <stdio.h>

void ex1(){

    float nota;

    // solicitando a entrada da nota
    printf("Digite sua nota: ");
    scanf("%f", &nota);

    // enquanto - nota for incorreta (> 10 || < 0), solicitar nota novamente
    while (nota > 10 || nota < 0)
    {
        printf("Nota inválida!\nFavor, digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
    }
    
    printf("Parabéns! Sua nota foi registrada!\nNota: %.2f", nota);

}
