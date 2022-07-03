// https://wiki.python.org.br/ExerciciosFuncoes - 1ª Questão

#include <stdio.h>

void imprimir_ate(int limite)
{
    printf("Limite igual a %d:\n", limite);
    for (int i = 0; i < limite; i++)
    {
        printf("%d ", limite);
    }
}

int main(void)
{
    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    while(num <= 0)
    {
        printf("Você digitou um número nulo!");
        printf("Digite um número (maior que 0): ");
        scanf("%d", &num);
    }

    imprimir_ate(num);
    printf("\n");
}
