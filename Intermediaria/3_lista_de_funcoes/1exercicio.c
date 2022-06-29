#include <stdio.h>
/*

https://wiki.python.org.br/ExerciciosFuncoes

 */

int main(void)
{
    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    imprimir_ate(num);
}

void imprimir_ate(int limite)
{
    printf("Limite: %d:\n", limite);
    for (int i = 0; i < limite; i++)
    {
        printf("%d ", limite);
    }
}
