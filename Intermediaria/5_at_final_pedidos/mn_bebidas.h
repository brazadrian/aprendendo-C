#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define TVETBBD 4

float mn_bebidas()
{

    // "INSTANCIANDO" STRUCT DE PRODUTOS → B(EBIDAS)
    Produto b[TVETBBD];
    int i, op = !0;
    float preco = 0.0;

    // DECLARANDO VARIÁVEIS
    strcpy(b[0].nome, "Água");
    b[0].opcao = 0 + 1;
    b[0].preco = 2.50;
    strcpy(b[1].nome, "Suco da laranja");
    b[1].opcao = 1 + 1;
    b[1].preco = 5.00;
    strcpy(b[2].nome, "Guaraná Antártica");
    b[2].opcao = 2 + 1;
    b[2].preco = 6.50;
    strcpy(b[3].nome, "Coca-cola");
    b[3].opcao = 3 + 1;
    b[3].preco = 8.50;

        printf("------  cardápio - BEBIDA  ------\n\n"); // 33 caracteres
        for (i = 0; i < TVETBBD; i++)
            printf("%d - R$ %.2f - %s\n", b[i].opcao, b[i].preco, b[i].nome);
        printf("\n0 - Voltar para o menu principal\n");
        printf("---------------------------------\n"); // 33 caracteres

        scanf("%d", &op);
        system("clear");

        // AQUI É OBSERVADO O VALOR A SER COBRADO
        printf("Você escolheu beber %s, que custa R$ %.2f\n\n", b[op - 1].nome, b[op - 1].preco);
        // ATRIBUIÇÃO NA VARIÁVEL DE RETORNO DO PREÇO A SER COBRADO

        preco = b[op - 1].preco;

    return preco;
}
