#include <stdio.h>

int main()
{

    // declarando variáveis
    int tempo, velocidade, distancia = 0;
    float litros;

    // entrada de dados
    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    // processamento
    distancia = tempo * velocidade;
    litros = (float)distancia / 12.0;

    // saída
    printf("%.3f\n", litros);

    return 0;
}
