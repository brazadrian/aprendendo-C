#include <stdio.h>
#include <math.h>

int main()
{
    int num_maior, A, B, C;

    // entrada
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    // processamento
    num_maior = maior(A, B);
    num_maior = maior(num_maior, C);

    // saída
    printf("%d eh o maior\n", num_maior);

    return 0;
}

// função pra verificar o maior entre dois números
int maior(int num1, int num2)
{
    int maior = ((num1 + num2) + abs(num1 - num2)) / 2;
    return maior;
}
