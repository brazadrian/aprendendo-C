#include <stdio.h>

#include "ex1.h"
#include "ex2.h"
#include "ex6.h"

// Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido. - adaptar para não-binário

int main(int argc, char const *argv[])
{
        int qualgoritmo;

    printf("\n1 - Maior valor entre dois números;");
    printf("\n2 - Se o número digitado é negativo ou positivo;");
    printf("\n6 - Maior valor entre três números.\n");
    printf("\nEscolha o número de um dos algoritmos descritos:\n");
    scanf("%i", &qualgoritmo);

    printf("\n");

    switch (qualgoritmo)
    {
    case 1:
        ex1();
        break;

    case 2:
        ex2();
        break;

    case 6:
        ex6();
        break;

    default:
        printf("Número não encontrado");
    }

    return 0;
}

