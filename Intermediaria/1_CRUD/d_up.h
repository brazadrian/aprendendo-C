#include <stdio.h>
#include <string.h>

void up_aluno(Aluno *alunos)
{

    strcpy(alunos->nome, "Maria Letícia da Silva Manguinho");
    alunos->matricula = 16161801;
    alunos->notas[0] = 7;
    alunos->notas[1] = 5;
    alunos->notas[2] = 5;
    alunos->notas[3] = 10;
    alunos->media = (alunos->notas[0] + alunos->notas[1] + alunos->notas[2] + alunos->notas[3]) / 4;
    if (alunos->media >= 6)
        alunos->situacao = 'A';
    else
        alunos->situacao = 'F';
}
