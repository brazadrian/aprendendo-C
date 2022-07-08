#include "data.h"
#include "data_show.h"
#include "struct_aluno.h"


int main()
{
  Aluno alunos[5];

  alunos[0].idade = 20;
  strcpy(alunos[0].nome, "Gilmar");
  alunos[0].notas[0] = 1;
  alunos[0].notas[1] = 5;
  alunos[0].notas[2] = 1;
  alunos[0].notas[9] = 10;


  imprimir_aluno(alunos[0]);

/* 

  int opcao = !0;

  menu_show();
  opcao = escolha(opcao);

  printf("%d", opcao);

  while (opcao != 0)
  {

    switch (opcao)
    {
    case 1:
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
  } */

  return 0;
}
