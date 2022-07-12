#include <stdio.h>
/*
https://www.youtube.com/watch?v=AdyGxhYWhoM
*/
int main()
{
    int x;
    x = 10;

    int *ponteiro; // mesmo tipo de dado do valor
    ponteiro = &x; // atribuindo o endereço de memória

    printf("End. de memória: %i\n", &x);
    printf("Valor: %i\n", x);

    printf("Ponteiro: %i\n", ponteiro);          // acessando o endereço
    printf("Val. do ponteiro: %i\n", *ponteiro); // acessando o valor da memória

    int y = x;
    x = 20;
    printf("\n\nOutra coisa:\n");
    printf("X = %i\nY = %i\n", x, y);

    return 0;
}
