// Faça um programa, com uma função que necessite de três argumentos, e que forneça a soma desses três argumentos.

#include <stdio.h>

int main(void)
{
    int num[3];
    int soma;
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
    }

    soma = soma_tres(num[0], num[1], num[2]);
}

int soma_tres(int n1, int n2, int n3)
{
    int soma = n1 + n2 + n3;
    printf("A soma dos três números e igual a: %d", soma);
    return soma;
}
