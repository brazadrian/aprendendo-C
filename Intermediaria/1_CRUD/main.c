#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "data.h"
#include "data_show.h"

typedef struct alunos
{
  char nome[50];
  int matricula;
  int notas[4];
} aluno;

int main()
{
  aluno testando[20];


  int opcao = !0;

  menu_show();
  opcao = escolha(opcao);

  printf("%d", opcao);

  while (opcao != 0)
  {

    switch (opcao)
    {
    case 1:
      system("clear");
      printf("Você escolheu a opção criar, para isso é necessário informar:\n");
      printf("Matrícula do aluno: ");
      scanf("%d", testando[0].matricula);
      
      printf("Nome do aluno: ");
      scanf(" %s", testando[0].nome);
      
      data_create();
      break;

    case 2:
      system("clear");
      printf("CONSULTAR");
      data_read();
      break;

    case 3:
      system("clear");
      printf("ALTERAR");
      data_update();
      break;

    case 4:
      system("clear");
      printf("ALTERAR");
      data_delete();
      break;

    case 5:
      system("clear");
      printf("\n");
      int opcao_aluno = !0;
      while (opcao_aluno != 0)
      {
        menu_show_aluno();
        opcao_aluno = escolha(opcao_aluno);
        printf("deu certo\n");
      }
      break;

      default:
        printf("Algo deu errado! Favor, tentar novamente...");
        continue;
    }

    printf("\nVocê finalizou a execução. Deseja fazer mais alguma operação?\n");
    menu_show();
    opcao = escolha(opcao);
  }

  return 0;
}
