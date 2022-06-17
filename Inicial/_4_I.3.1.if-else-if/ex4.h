#include <stdio.h>

//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

void ex4(){

  char vogCons;

  printf("Digite uma letra e saiba se é vogal ou consoante: ");
  scanf("%c", &vogCons);

  // dá pra, criar um vetor e/ou fazer com operador lógico
  if(vogCons == 'A')
    printf("Você digitou uma vogal!");

  else if(vogCons == 'E')
    printf("Você digitou uma vogal!");

  else if(vogCons == 'I')
  printf("Você digitou uma vogal!");

  else if(vogCons == 'O')
  printf("Você digitou uma vogal!");

  else if(vogCons == 'U')
  printf("Você digitou uma vogal!");

  else if(vogCons == 'a')
  printf("Você digitou uma vogal!");

  else if(vogCons == 'e')
    printf("Você digitou uma vogal!");

  else if(vogCons == 'i')
    printf("Você digitou uma vogal!");

  else if(vogCons == 'o')
    printf("Você digitou uma vogal!");

  else if(vogCons == 'u')
    printf("Você digitou uma vogal!");

  else
    printf("Você digitou uma consoante!");
}