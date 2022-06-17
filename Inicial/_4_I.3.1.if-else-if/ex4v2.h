#include <stdio.h>

//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

// https://www.clubedohardware.com.br/forums/topic/1078955-comparar-valores-dentro-de-um-%C3%BAnico-vetor/

void ex4v2(){

  char vogCons;
  char vogais[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
  char consoantes[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'X', 'Y', 'Z'};

  int contadorVogal = 0;
  int contadorConsoante = 0;

  printf("Digite uma letra e saiba se é vogal ou consoante: ");
  scanf("%c", &vogCons);

  while(contadorVogal <= 10){
    if(vogCons == vogais[contadorVogal]){
    printf("Você digitou uma vogal!");
    }
    contadorVogal++;
  }

//  else if(vogCons == consoantes[])
//    printf("Você digitou uma consoante!");

//  else
//    printf("Valor inválido!");

}