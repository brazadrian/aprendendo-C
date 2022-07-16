#include <stdio.h>

/*
Função para exibição das opções do menu principal
- recebe inteiro da escolha do usuário
- retorna inteiro da opção do usuário
*/
int mn_cardapio(int o)
{
    printf("\n--------- MENU PRINCIPAL --------\n\n"); // cabeçalho do menu principal
    printf("1 - Comidas\n");
    printf("2 - Bebidas\n");
    printf("0 - Finalizar pedido\n");
    printf("\n---------------------------------\n"); // rodapé do menu principal
    
    // ENTRADA DE DADOS
    printf("Faça seu pedido, digite sua opção: \n");
    scanf("%d", &o);

    return o;
}
