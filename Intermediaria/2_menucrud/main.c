#include <stdio.h>
#include "data.h"

int main(void)
{
  int opcao = 0;

  while (opcao != 5)
  {
    menu_show();
    scanf("%i", &opcao);
    switch (opcao)
    {
    case 1: // incluir dados (C)
      data_create();
      break;

    case 2: // pesquisar dados (R)
      data_read();
      break;

    case 3: // atualizar dados (U)
      data_update();
      break;

    case 4: // deletar dados (D)
      data_delete();
      break;

    case 5: // Finalização do algoritmo
      printf("\n Fim. Obrigado por utilizar nosso APP");
      break;

    default:
      printf("\n Opcao Invalida\n");
    }
  }
  return 0;
}
