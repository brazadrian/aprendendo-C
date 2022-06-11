#include <stdio.h>
#include <math.h>

// definindo constante
#define PI 3.14159

int main()
{

    // declaração de variáveis
    double raio, volume = 0.0;

    // entrada de dado
    scanf("%lf", &raio);

    // processamento
    volume = (4 / 3.0) * PI * pow(raio, 3);

    // saída
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
