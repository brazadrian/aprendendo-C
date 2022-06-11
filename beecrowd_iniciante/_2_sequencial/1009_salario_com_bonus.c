#include <stdio.h>

int main()
{

    // declarando string
    char nome[30];
    // declarando variáveis
    double montante_vendas, salario_fixo, comissao = 0.15, salario_final;

    // entrada de dados
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &montante_vendas);

    // processando
    salario_final = salario_fixo + (montante_vendas * comissao);

    // saída
    printf("TOTAL = R$ %.2lf\n", salario_final);

    return 0;
}
