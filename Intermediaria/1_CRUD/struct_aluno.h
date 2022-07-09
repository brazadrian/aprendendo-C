#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura com os dados necessários de cada aluno
typedef struct
{
    // string que receberá o nome dos alunos - máx. 40 char
    char nome[40];

    // vetor que receberá as 4 notas do aluno
    int notas[4];

    // inteiro que receberá a idade desse aluno
    int idade;

    // inteiro com a media arimetica das 4 notas do aluno
    int media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
    // int media;

    char situacao;
} Aluno;

// função para imprimir os atributos de uma estrutura de Alunos
void imprimir_aluno(Aluno a)
{

    printf("Aluno: %s", a.nome);
    printf("Idade: %d", a.idade);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ª nota: %d", i + 1, a.notas[i]);
    }

}
