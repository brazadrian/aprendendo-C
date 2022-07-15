#include <stdio.h>
#include <stdlib.h>

#include "structs.h"
#include "mn_cardapio.h"
#include "mn_comidas.h"
#include "mn_bebidas.h"

int main()
{
    // DECLARANDO VARIÁVEIS
    int opcao_menu = !0;
    float preco = 0.0;

    // REPETIÇÃO DO MENU ATÉ O USUÁRIO ESCOLHER SAIR DESTE
    while (opcao_menu != 0)
    {
        // chamada de função para exibição de menu
        opcao_menu = mn_cardapio(opcao_menu);

        system("clear");

        // SWITCH PARA ESCOLHA DE 3 OPÇÕES DO MENU
        switch (opcao_menu)
        {
        // CHAMADA DO MENU DE COMIDAS
        case 1:
            preco += mn_comidas();
            break;

        // CHAMADA DO MENU DE BEBIDAS
        case 2:
            preco += mn_bebidas();
            break;

        // CHAMADA DA FINALIZAÇÃO DO ALGORITMO
        case 0:
            printf("Seus pedidos foram registrados\n");
            printf("O total a pagar é de R$ %.2f\n\n", preco);
            break;

        default:
            printf("Opção não encontrada, tente novamente: \n"); // MENSAGEM DE ERRO
            break;
        }
    }
    return 0;
}
