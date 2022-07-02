#include <stdio.h>

// struct concernente às opções a serem apresentadas para o usuário
typedef struct
{
    int opcao;
    char nome[20]; // estudar como adicionar linha de código como string ou como atributo, ou pelo menos a chamada de função
} opcoes;

// função puramente estética para a impressão de linha
void line_show()
{
    printf("—————————————————————\n");
}

// Função para exibição de menu de CRUD
// Recebe inteiro de opção e o retorna para uso
int menu_show(int *opcao)
{
    // declarando as opções do CRUD através de vetor de struct das opções pré-definido
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

    // Exibição das opções e seus respectivos valores no menu
    line_show();
    printf("CRUD - Menu Principal\n");
    for (int i = 0; i < 5; i++)
        printf("%d - %s\n", OP[i].opcao, OP[i].nome);
    line_show();

    opcao = escolha(opcao);
    return opcao;
}

// opcoes baseadas no menu_show(), o qual tem um CRUD
// recebe um inteiro e não retorna nada
int escolha(int opcao_escolhida)
{
    printf("Digite o valor correspondente à sua escolha: ");
    scanf("%d", &opcao_escolhida);

    return opcao_escolhida;
}

void operacoes(opcao_escolhida)
{
    switch(opcao_escolhida)
    {
        case 0:
            printf("0");
            opcao_escolhida = 0;
            break;    
    }
}