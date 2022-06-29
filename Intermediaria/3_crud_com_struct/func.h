// DÁ PRA FAZER AS OPÇÕES DO MENU SEGUNDO UM STRUCT MENU
#include <stdio.h>  // standar input output
#include <string.h>

#define TNOME 41
#define TVACINADOS 100

#define CADASTRA 1
#define PESQUISA 2
#define ALTERA 3
#define DELETA 4
#define FIM 0

struct cadastro {
  int codigo;
  char nome[TNOME];
  int idade;
  int nvacinas;
};

struct cadastro vacinados[TVACINADOS];


void zera(int pos){
  vacinados[pos].codigo=0;
  vacinados[pos].idade=0;
  vacinados[pos].nvacinas=0;
  strcpy( vacinados[pos].nome, "Vazio" ); 
}


void mostra(int pos){
  printf("\n Indice: %d", pos);
  printf(" Codigo:%d", vacinados[pos].codigo);
  printf(" Nome:%s", vacinados[pos].nome );
  printf(" Idade:%d", vacinados[pos].idade );
  printf(" Nvacinas:%d", vacinados[pos].nvacinas );
}

void pesquisa( int pos, int usados){
  int i=0;
  for( i=0;i < usados ; i++)
    mostra(i);
}


int entraDados(int pos, int usados, int posmax){

  if ( usados < posmax){
    printf("\n Indice: %d", pos);
    printf("\n Codigo:");
    scanf(" %d", &vacinados[pos].codigo);
    printf("\n Nome:");
    scanf("%s", vacinados[pos].nome );
    printf(" Idade:");
    scanf(" %d", &vacinados[pos].idade);
    printf(" Nvacinas:");
    scanf(" %d", &vacinados[pos].nvacinas );
    printf("\n");
    return pos;
  }
 else
    return -1;
}


int menu(){
  int op;
  printf("\n\n Menu APP Vacinas\n");
  printf("\n 1 - Incluir Cadastro");
  printf("\n 2 - Pesquisar");
  printf("\n 3 - Alterar");
  printf("\n 4 - Deletar");
  printf("\n 0 - Fim");
  printf("\n Opção:");
  scanf(" %d", &op);
  return op;
}