#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define TVETCMD 4

float mn_comidas()
{

    // "INSTANCIANDO" STRUCT DE PRODUTOS → C(OMIDAS)
    Produto c[TVETCMD];
    int i, op;
    float preco = 0.0;

    // DECLARANDO OS ALIMENTOS DO CARDÁPIO
    strcpy(c[0].nome, "Feijão e arroz");
    c[0].opcao = 0 + 1;
    c[0].preco = 10.00;
    strcpy(c[1].nome, "Baião de dois");
    c[1].opcao = 1 + 1;
    c[1].preco = 10.50;
    strcpy(c[2].nome, "Carne com fritas");
    c[2].opcao = 2 + 1;
    c[2].preco = 14.50;
    strcpy(c[3].nome, "Buchada de bode");
    c[3].opcao = 3 + 1;
    c[3].preco = 15.00;

    
    printf("------  cardápio - COMIDA  ------\n\n"); // 33 caracteres
    for (i = 0; i < TVETCMD; i++)
        printf("%d - R$ %.2f - %s\n", c[i].opcao, c[i].preco, c[i].nome);
    printf("\n0 - Voltar para o menu principal\n");
    printf("---------------------------------\n"); // 33 caracteres
    scanf("%d", &op);
    system("clear");

    printf("Você escolheu comer %s, que custa R$ %.2f\n\n", c[op - 1].nome, c[op - 1].preco);
    preco = c[op - 1].preco;

    return preco;
}
