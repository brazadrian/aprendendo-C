#include <stdio.h>
#include <string.h>
#include "structs.h"

#define TVETCMD 3

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

    Produto c[TVETCMD];
    int i;

    strcpy(c[0].nome, "Feijão e arroz");
    c[0].opcao = 1;
    c[0].preco = 10.00;
    
    strcpy(c[1].nome, "Baião de dois");
    c[1].opcao = 2;
    c[1].preco = 10.50;

    strcpy(c[2].nome, "Carne com fritas");
    c[2].opcao = 3;
    c[2].preco = 14.50;
    
    printf("------- CARDÁPIO - COMIDA -------\n");

    for(i =0; i < TVETCMD; i++)
        printf("%d - R$ %.2f - %s\n", c[i].opcao, c[i].preco, c[i].nome);
        
    // printf("%d - %s - R$ %.2f\n", c->opcao, c->nome, c->preco);
    printf("0 - Voltar para o menu principal\n");
    printf("---------------------------------\n");
    scanf("%d", &o);

    return o;
}