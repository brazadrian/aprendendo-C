#include <stdio.h>
#include <math.h>

int main()
{

    // declaração
    double A, B, C;
    double delta, x1, x2;

    // entradas
    scanf("%lf %lf %lf", &A, &B, &C);

    // processamento
    delta = (pow(B, 2)) - (4 * A * C);

    x1 = (-B + sqrt(delta)) / (2 * A);
    x2 = (-B - sqrt(delta)) / (2 * A);

    // estruturas de decisão e saídas
    if (x1 == 0 || x2 == 0 || A == 0 || delta < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    return 0;
}
