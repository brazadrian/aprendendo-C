#define TVETBBD 4

int mn_bebidas(int o)
{

    Produto b[TVETBBD];
    int i;

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

    printf("------- CARDÁPIO - BEBIDA -------\n");
    for (i = 0; i < TVETBBD; i++)
        printf("%d - R$ %.2f - %s\n", b[i].opcao, b[i].preco, b[i].nome);
    printf("\n0 - Voltar para o menu principal\n");
    printf("---------------------------------\n");
    scanf("%d", &o);

    return o;
}
