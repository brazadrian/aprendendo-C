#include <stdio.h>

int testar_escolha(int variavel, int limiteN, int limiteP)
{
    while (variavel < limiteN || variavel > limiteP)
    {
        printf("Valor não encontrado!\nDigite um valor (entre %d e %d) correspondente às operações: ", limiteN, limiteP);
        scanf("%d", &variavel);
    }
    return variavel;
}

void teste_qtd(int variavel, int variavelMinimo)
{
    while(variavel < variavelMinimo){
        printf("Erro. Digite um número maior que 1: ");
        scanf("%d", &variavel);
    }
}
