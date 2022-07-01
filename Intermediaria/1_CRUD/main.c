#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char login[6] = "teste";
char senha[9] = "teste123";

struct cadastro
{
  char nome[50];
  int idade;
  char rua[50];
  int numero_casa;
};

int main()
{
  struct cadastro c;

  // Atribui a string “Carlos” para o campo nome
  strcpy(c.nome, "Carlos"); 

  // Atribui o valor 18 para o campo idade
  c.idade = 18;

  // Atribuiastring "Avenida Brasil" para o campo rua
  strcpy(c.rua, "Avenida Brasil");

  // Atribuiovalor 1082 paraocampo numero
  c.numero_casa = 1082;
  system("pause");


  printf("\n%s, tem %d anos, residente à %s, nº %d", c.nome, c.idade, c.rua, c.numero_casa);

/* 
  printf("Nome: %s\n", c.nome);
  printf("Idade: %d\n", c.idade);
  printf("Endereço: %s, nº %d\n", c.rua, c.numero_casa);
   */

  return 0;
}
