int mn_cardapio(int o)
{
    printf("Olá, seja bem vindo!\n");
    printf("-------------CARDÁPIO------------\n"); // 33
    printf("1 - Comidas\n");
    printf("2 - Bebidas\n");
    printf("0 - Finalizar pedido\n");
    printf("---------------------------------\n"); // 33
    printf("Faça seu pedido, digite sua opção: \n");
    scanf("%d", &o);

    return o;
}
