#include <stdio.h>

int main()
{

    // declarando variáveis
    int X;
    float Y, consumo;

    // entrada de dados
    scanf("%d", &X);
    scanf("%f", &Y);

    // processamento
    consumo = X / Y;

    // saída de dados
    printf("%.3f km/l\n", consumo);

    return 0;
}
