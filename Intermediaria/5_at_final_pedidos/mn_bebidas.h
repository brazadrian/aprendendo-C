#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define TVETBBD 4

float mn_bebidas()
{

    // DECLARAÇÃO DE VARIÁVEIS
    Produto b[TVETBBD]; // declarando vetor b(ebidas) do tipo Produto (definido em structs.h)
    int i, op = -1;
    float preco = 0.0;

    // INSERÇÃO DE DADOS DAS BEBIDAS DO CARDÁPIO
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

    system("clear");

    // SAÍDA DE DADOS
    printf("------  cardápio - BEBIDA  ------\n\n"); // cabeçalho
    for (i = 0; i < TVETBBD; i++)                    // for para percorrer todo o vetor de itens do cardápio
        printf("%d - R$ %.2f - %s\n", b[i].opcao, b[i].preco, b[i].nome);
    printf("\n0 - Voltar para o menu principal\n");
    printf("---------------------------------\n"); // rodapé

    // VERIFICANDO SE A ESCOLHA É VÁLIDA
    while (op < 0 || op > TVETBBD)
    {
        // ENTRADA DE DADOS
        scanf("%d", &op);
    }

    system("clear");

    // VERIFICANDO SE
    if (op != 0)
    {
        printf("Você escolheu beber %s, que custa R$ %.2f\n\n", b[op - 1].nome, b[op - 1].preco);
        preco = b[op - 1].preco;
    }

    preco = b[op - 1].preco;

    return preco;
}
