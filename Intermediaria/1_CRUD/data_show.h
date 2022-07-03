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
void menu_show()
{
    // declarando as opções do CRUD através de vetor de struct das opções pré-definido
    opcoes OP[6];
    // OPCOES E NUMERAÇÃO DO MENU PRINCIPAL
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
    OP[5].opcao = 5;
    strcpy(OP[5].nome, "Calcular média");

    // Exibição das opções e seus respectivos valores no menu
    line_show();
    printf("CRUD - Menu Principal\n");
    for (int i = 0; i < 6; i++)
        printf("%d - %s\n", OP[i].opcao, OP[i].nome);
    line_show();
}

// opcoes baseadas no menu_show(), o qual tem um CRUD
// recebe um inteiro e não retorna nada
int escolha(int opcao_escolhida)
{
    printf("Digite o valor correspondente à sua escolha: ");
    scanf("%d", &opcao_escolhida);

    return opcao_escolhida;
}

void menu_show_aluno()
{
    // declarando as opções do menu "Calcular média"
    opcoes OpAl[4];
    // OPÇÕES PARA A MÉDIA DOS ALUNOS
    OpAl[0].opcao = 0;
    strcpy(OpAl[0].nome, "Sair");
    OpAl[1].opcao = 1;
    strcpy(OpAl[1].nome, "Média de UM aluno");
    OpAl[2].opcao = 2;
    strcpy(OpAl[2].nome, "Aprovados");
    OpAl[3].opcao = 3;
    strcpy(OpAl[3].nome, "Reprovados");
    
}