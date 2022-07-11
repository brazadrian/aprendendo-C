#include <stdio.h>

int mn_show(int *opcao)
{
    printf("------- Menu -------\n");
    printf("1 - Cadastrar alunos\n");
    printf("2 - Pesquisar alunos\n");
    printf("3 - Avaliar alunos\n");
    printf("4 - Excluir alunos\n");
    printf("--------------------\n");
    printf("Digite a opção escolhida: ");
    
    scanf("%i", *opcao);
    printf("%i", opcao);

    return 0;
}