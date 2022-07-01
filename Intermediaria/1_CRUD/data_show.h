#include <stdio.h>

typedef struct
{
    int opcao;
    char nome[20]; // estudar como adicionar linha de código como string ou como atributo, ou pelo menos a chamada de função
} opcoes;

void line_show()
{
    printf("—————————————————————\n");
}

// Função para exibição de menu de CRUD
void menu_show()
{
    // declarando as opções do CRUD através de vetor de struct pré-definido
    opcoes OP[5];
    // opcoes e numeracao do menu
    OP[0].opcao = 0;
    strcpy(OP[0].nome, "Sair");
    OP[1].opcao = 1;
    strcpy(OP[1].nome, "Criar");
    OP[2].opcao = 2;
    strcpy(OP[2].nome, "Consultar");
    OP[3].opcao = 3;
    strcpy(OP[3].nome, "Mudar");
    OP[4].opcao = 4;
    strcpy(OP[4].nome, "Deletar");

    line_show();
    printf("CRUD - Menu Principal\n");
    for (int i = 0; i < 5; i++)
        printf("%d - %s\n", OP[i].opcao, OP[i].nome);
    line_show();
}
