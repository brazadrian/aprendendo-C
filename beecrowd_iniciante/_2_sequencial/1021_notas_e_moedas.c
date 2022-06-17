#include <stdio.h>

int main()
{

    // declaração
    double valor_original;
    int valor;
    int ced100, ced50, ced20, ced10, ced5, ced2;
    int cent100, cent50, cent25, cent10, cent5, cent1;

    // entrada
    scanf("%lf", &valor_original);

    // conversão
    valor = valor_original * 100;

    // processamento - cédulas
    ced100 = valor / 10000;
    valor %= 10000;

    ced50 = valor / 5000;
    valor %= 5000;

    ced20 = valor / 2000;
    valor %= 2000;

    ced10 = valor / 1000;
    valor %= 1000;

    ced5 = valor / 500;
    valor %= 500;

    ced2 = valor / 200;
    valor %= 200;

    // processamento - moedas
    cent100 = valor / 100;
    valor %= 100;

    cent50 = valor / 50;
    valor %= 50;

    cent25 = valor / 25;
    valor %= 25;

    cent10 = valor / 10;
    valor %= 10;

    cent5 = valor / 5;
    valor %= 5;

    cent1 = valor;

    // saída
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", ced100);
    printf("%d nota(s) de R$ 50.00\n", ced50);
    printf("%d nota(s) de R$ 20.00\n", ced20);
    printf("%d nota(s) de R$ 10.00\n", ced10);
    printf("%d nota(s) de R$ 5.00\n", ced5);
    printf("%d nota(s) de R$ 2.00\n", ced2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", cent100);
    printf("%d moeda(s) de R$ 0.50\n", cent50);
    printf("%d moeda(s) de R$ 0.25\n", cent25);
    printf("%d moeda(s) de R$ 0.10\n", cent10);
    printf("%d moeda(s) de R$ 0.05\n", cent5);
    printf("%d moeda(s) de R$ 0.01\n", cent1);

    return 0;
}
