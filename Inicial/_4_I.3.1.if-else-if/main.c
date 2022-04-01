#include <stdio.h>

#include "ex1.h"
#include "ex2.h"
#include "ex6.h"

// Método main, que consite em um pequeno "menu" para execução de alguns algoritmos simples

int main(int argc, char const *argv[])
{
    //// Tentar colocar essa estrutura do menu em loop a fim de que só saia dele quando digitar 0

    // declarando variável da escolha do usuário sobre qual algoritmo deseja
    int qualgoritmo;

    printf("\n1 - Maior valor entre dois números;");
    printf("\n2 - Se o número digitado é negativo ou positivo;");
    printf("\n6 - Maior valor entre três números.\n");
    printf("\nEscolha o número de um dos algoritmos descritos:\n");
    scanf("%i", &qualgoritmo);

    printf("\n");

    // Switch-case para a execução do algoritmo escolhido
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

