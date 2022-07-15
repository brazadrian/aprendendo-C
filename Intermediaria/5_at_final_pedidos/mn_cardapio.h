#include <stdio.h>

/*
Função para exibição das opções do menu principal
- recebe inteiro da escolha do usuário
- retorna inteiro segundo as escolhas do usuário
*/
int mn_cardapio(int o)
{
    printf("\n--------- MENU PRINCIPAL --------\n\n"); // 33 caracteres
    printf("1 - Comidas\n");
    printf("2 - Bebidas\n");
    printf("0 - Finalizar pedido\n");
    printf("\n---------------------------------\n"); // 33 caracteres
    printf("Faça seu pedido, digite sua opção: \n");
    scanf("%d", &o);

    return o;
}
