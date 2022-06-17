#include <stdio.h>

int main()
{

    // declaração
    int seg, min, hora;
    int tempo;

    // entrada
    scanf("%d", &tempo);

    // processamento
    // a unidade correspondente vai equivaler a entrada dividida pela unidade (em segundos)
    hora = tempo / 3600;
    tempo %= 3600;
    
    min = tempo / 60;
    tempo %= 60;

    seg = tempo;
    
    // saída
    printf("%d:%d:%d\n", hora, min, seg);

    return 0;
}