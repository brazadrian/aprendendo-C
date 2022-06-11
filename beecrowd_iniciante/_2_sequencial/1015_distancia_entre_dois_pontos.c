#include <stdio.h>
#include <math.h>

int main()
{

    // declaração de variáveis
    float x, x1, x2, y, y1, y2, distancia;

    // entrada de dados
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    // processamento
    x = pow(x2 - x1, 2);
    y = pow(y2 - y1, 2);

    distancia = sqrt(x + y);

    // saida
    printf("%.4f\n", distancia);
    return 0;
}
