#include <stdio.h>

int main()
{

    // declaração de dados
    int peca_cod1, peca_qtd1;
    double peca_val1, peca_preco1;

    int peca_cod2, peca_qtd2;
    double peca_val2, peca_preco2;

    double preco_final;

    // entrada de dados
    scanf("%d", &peca_cod1);
    scanf("%d", &peca_qtd1);
    scanf("%lf", &peca_val1);

    scanf("%d", &peca_cod2);
    scanf("%d", &peca_qtd2);
    scanf("%lf", &peca_val2);

    // processamento
    peca_preco1 = peca_qtd1 * peca_val1;
    peca_preco2 = peca_qtd2 * peca_val2;

    preco_final = peca_preco1 + peca_preco2;

    // saída
    printf("VALOR A PAGAR: R$ %.2lf\n", preco_final);

    return 0;
}
