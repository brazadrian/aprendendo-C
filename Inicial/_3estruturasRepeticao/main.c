#include <stdio.h>

#include "ex1.h"
#include "ex2.h"
#include "ex12.h"

// Método main, que consite em um pequeno "menu" para execução de alguns algoritmos simples

int main()
{
    //// Tentar possibilitar a finalização dessa execução dentro dos arquivos de cabeçalho

    // declarando variável da escolha do usuário sobre qual algoritmo deseja utilizar
    int qualgoritmo = 1;

    // While para repetição do switch até usuário desejar finalizar
    while (qualgoritmo != 0)
    {
        printf("\n——————————————————————————————————————————————————————————");
        printf("\n\n0 - Finalizar a execução;");
        printf("\n1 - Digitar nota entre 0 e 10;");
        printf("\n2 - Nome de usuário diferente da sua senha;");
        printf("\n12 - Para tabuada entre 1 e 10.\n");

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
                printf("\nVocê escolheu o algoritmo para digitar uma nota entre 0 e 10:\n\n");
                ex1(qualgoritmo);
                break;
                
            case 2:
                ex2();
                break;

            case 12:
                ex12();
                break;

            default:
                printf("Número não encontrado");
            }

    }
    printf("\n——————————————————————————————————————————————————————————\n\n");
    
    return 0;
}

