#include <stdio.h>
#include "structs.h"
#include "menu.h"

int main()
{
    int opcao_menu = !0;

    while (opcao_menu != 0)
    {
        opcao_menu = mn_cardapio(&opcao_menu);
        system("clear");

        switch (opcao_menu)
        {
        case 1:

            printf("1 - Comidas\n");
            break;
        case 2:
            printf("2 - Bebidas\n");
            break;

        case 0:
            printf("Seus pedidos foram registrados\n");
            opcao_menu = 0; // desnecessário, só para esclarecimento
            break;
        default:
            printf("Opção não encontrada, tente novamente: \n");
            break;
        }
    }

    return 0;
}
