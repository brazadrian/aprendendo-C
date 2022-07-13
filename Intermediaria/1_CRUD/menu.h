#include <stdio.h>

int mn_show(int *o)
{
    printf("------- Menu -------\n");
    printf("1 - Cadastrar alunos\n");
    printf("2 - Pesquisar alunos\n");
    printf("3 - Avaliar alunos\n");
    printf("4 - Excluir alunos\n");
    printf("--------------------\n");
    printf("Digite a opção escolhida: ");
    
    scanf("%i", &o);
    printf("%i", o);

    return o;
}