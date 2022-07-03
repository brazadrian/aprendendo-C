#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "data_show.h"

typedef struct alunos
{
  char nome[50];
  int matricula;
  int notas[4];
} aluno;

int main()
{
  int opcao = !0;

  menu_show();
  opcao = escolha(opcao);

  printf("%d", opcao);

  while (opcao != 0)
  {
    switch (opcao)
    {

    case 0:
      printf("Você escolheu sair, adeus!");
      break;

    case 1:
      printf("teste");
      break;

    case 5:
      printf("\n");
      int opcao_aluno = !0;
      while (opcao_aluno != 0)
      {
        menu_show_aluno();
        opcao_aluno = escolha(opcao_aluno);
        printf("deu certo");
      }
    }

    printf("\nVocê finalizou a execução. Deseja fazer mais alguma operação?\n");
    menu_show();
    opcao = escolha(opcao);
  }

  return 0;
}
