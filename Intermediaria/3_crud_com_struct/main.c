#include "func.h"

int main()
{
    int i = 0;
    int op = !0;
    int posicao = 0;        // posicao atual no vetor de vacinados
    int totalvacinados = 0; // quantos já foram cadastrados

    // todos os eleentos do vetor serão inicializados
    for (i = 0; i < TVACINADOS; i++)
        zera(i);
    while (op != FIM)
    {
        switch (op = menu())
        {
        case CADASTRA:
            if (entraDados(posicao, totalvacinados, TVACINADOS) >= 0)
            {
                posicao++;
                totalvacinados++;
            }
            else
            {
                printf("\n Erro de cadastro. Limite alcançado\n");
            }
            break;
        case PESQUISA:
            pesquisa(posicao, totalvacinados);
            break;
        case ALTERA:
            break;
        case DELETA:
            break;
        case FIM:
            break;
        default:
            printf("\nOpção inválida");
            break;
        }
    }
    return 0;
}