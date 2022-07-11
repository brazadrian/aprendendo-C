#include <stdio.h>
#include <string.h>

void ct_aluno(Aluno *alunos)
{
    // recebendo nome do aluno
    char nome[40 + 1];
    printf("Digite o nome do(a) aluno(a): ");
    fgets(nome, 40 + 1, stdin);
    strcpy(alunos->nome, nome);

    printf("Digite a matrícula do(a) aluno(a): ");
    scanf("%d", &alunos->matricula);
    // alunos->matricula = 16161801;
    alunos->notas[0] = 7;
    alunos->notas[1] = 5;
    alunos->notas[2] = 5;
    alunos->notas[3] = 4;
    alunos->media = (alunos->notas[0] + alunos->notas[1] + alunos->notas[2] + alunos->notas[3]) / 4;
    if (alunos->media >= 6)
        alunos->situacao = 'A';
    else
        alunos->situacao = 'R';
}
