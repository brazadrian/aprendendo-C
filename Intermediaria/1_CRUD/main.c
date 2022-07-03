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
    case 5:
      printf("asdlkajdlsanjln");
      break;
    }

    menu_show();
    opcao = escolha(opcao);
  }

  return 0;
}
