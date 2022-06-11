#include <stdio.h>
#include <math.h>

// definindo constante PI
#define PI 3.14159

int main(int argc, char const *argv[])
{

    // declarando variáveis
    double A, B, C;
    double a_triangulo, a_circulo, a_trapezio, a_quadrado, a_retangulo;

    // entrada de dados
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    // processamento
    a_triangulo = A * C / 2;
    a_circulo = PI * pow(C, 2.0);
    a_trapezio = (A + B) * C / 2.0;
    a_quadrado = pow(B, 2.0);
    a_retangulo = A * B;

    // saída
    printf("TRIANGULO: %.3lf\n", a_triangulo);
    printf("CIRCULO: %.3lf\n", a_circulo);
    printf("TRAPEZIO: %.3lf\n", a_trapezio);
    printf("QUADRADO: %.3lf\n", a_quadrado);
    printf("RETANGULO: %.3lf\n", a_retangulo);
    return 0;
}
