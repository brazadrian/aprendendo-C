#include <stdio.h>

//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

void ex4v1(){

  char vogCons;

  printf("Digite uma letra e saiba se é vogal ou consoante: ");
  scanf("%c", &vogCons);

  // dá pra criar um vetor
  if(vogCons == 'A' || vogCons == 'E' || vogCons == 'I' || vogCons == 'O' || vogCons == 'U' || vogCons == 'a' || vogCons == 'e' || vogCons == 'i' || vogCons == 'o' || vogCons == 'u')
    printf("Você digitou uma vogal!");

  else if(vogCons == 'B' || vogCons == 'C' || vogCons == 'D' || vogCons == 'F' || vogCons == 'G' || vogCons == 'H' || vogCons == 'J' || vogCons == 'K' || vogCons == 'L' || vogCons == 'M' || vogCons == 'N' || vogCons == 'P' || vogCons == 'Q' || vogCons == 'R' || vogCons == 'S' || vogCons == 'T' || vogCons == 'V' || vogCons == 'W'  || vogCons == 'X' || vogCons == 'Y' || vogCons == 'Z' || vogCons == 'b' || vogCons == 'c' || vogCons == 'd' || vogCons == 'f' || vogCons == 'g' || vogCons == 'h' || vogCons == 'j' || vogCons == 'k' || vogCons == 'l' || vogCons == 'm' || vogCons == 'b' || vogCons == 'p' || vogCons == 'q' || vogCons == 'r' || vogCons == 's' || vogCons == 't' || vogCons == 'v' || vogCons == 'w'  || vogCons == 'x' || vogCons == 'y' || vogCons == 'z')
    printf("Você digitou uma consoante!");

  else
    printf("Inválido!");
}
