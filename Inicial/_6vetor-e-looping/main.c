#include <stdio.h>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"

// Método main, que consite em um pequeno "menu" para execução de alguns algoritmos simples
int main(void)
{

    // declarando variável da escolha do usuário sobre qual algoritmo deseja utilizar
    int qualgoritmo = 1;

    // While para repetição do switch até usuário desejar finalizar
    while (qualgoritmo != 0)
    {
        printf("\n——————————————————————————————————————————————————————————");
        printf("\n\n0 - Finalizar a execução;");
        printf("\n1 - Entrada e saída de cinco valores;");
        printf("\n2 - Entrada de 10 números reais e saída invertida destes;");
        printf("\n3 - Entrada de 4 notas, saída com elas e a média;");
        printf("\n4 - Entrada de 10 caractéres e saída das consoantes;");
        printf("\n5 - Entrada de 20 inteiros, saída com os 20, os pares e ímpares digitados.\n");

        printf("\nEscolha o número de um dos algoritmos descritos: ");
        scanf("%i", &qualgoritmo);
        printf("——————————————————————————————————————————————————————————\n");

        // Switch-case para a execução do algoritmo escolhido
        switch (qualgoritmo)
        {

        case 0:
            printf("\nVocê escolheu sair do programa! Até mais...\n");
            qualgoritmo = 0;
            break;

        case 1:
            ex1();
            break;

        case 2:
            ex2();
            break;

        case 3:
            ex3();
            break;

        case 4:
            ex4();
            break;
        
        case 5:
            ex5();
            break;


        default:
            printf("Número não encontrado");
        }
    }
    printf("\n——————————————————————————————————————————————————————————\n\n");

    return 0;
}
