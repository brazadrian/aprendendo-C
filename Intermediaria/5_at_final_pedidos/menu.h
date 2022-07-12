#include <stdio.h>
#include <string.h>
#include "structs.h"

int mn_cardapio(int o) // o -> opcao
{
    printf("Olá, seja bem vindo!\n");
    printf("----- CARDÁPIO -----\n");
    printf("1 - Comidas\n");
    printf("2 - Bebidas\n");
    printf("0 - Finalizar pedido\n");
    printf("--------------------\n");
    printf("Faça seu pedido, digite sua opção: \n");
    scanf("%d", &o);

    return o;
}



int mn_comidas(int o)
{

    Produto c;
    
    c.opcao = 1;
    strcpy(c.nome, "Feijão e arroz");
    c.preco = 10.00;
    
    printf("----------\n");
    printf("%d - %s - R$ %.2f", c.opcao, c.nome, c.preco);
    printf("1 - Feijão e arroz\n");
    printf("2 - \n");
    printf("0 - Finalizar pedido\n");
    printf("--------------------\n");
    scanf("%d", &o);

    return o;
}