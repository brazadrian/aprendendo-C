#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

    char nome[40];
    int notas[4];
    int idade;

} Aluno;

void imprimir_aluno(Aluno a)
{

    printf("Aluno: %s", a.nome);
    printf("Idade: %d", a.idade);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ª nota: %d", i + 1, a.notas[i]);
    }
}
