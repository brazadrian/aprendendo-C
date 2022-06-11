#include <stdio.h>

int main()
{
    // declarando variáveis
    int matricula_funcionario, horas_trabalhadas;
    double sal_hora = 0, salario;

    // entrada de dados
    scanf("%d", &matricula_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%lf", &sal_hora);

    // processando as entradas
    // onde o salário total é o produto do salario-por-hora com as horas-trabalhadas
    salario = sal_hora * horas_trabalhadas;

    // saída de dados
    printf("NUMBER = %d\n", matricula_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
