#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	//setando idioma pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.
	
	//declarando vari�veis
	float nota1, nota2, nota3, nota4, somaNota, mediaNota;
	
	//solicitando e "atribuindo" entradas nas vari�veis
	printf("Digite a 1� nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2� nota: ");
	scanf("%f", &nota2);
	printf("Digite a 3� nota: ");
	scanf("%f", &nota3);
	printf("Digite a 4� nota: ");
	scanf("%f", &nota4);
	
	//somando
	somaNota = nota1 + nota2 + nota3 + nota4;
	
	//calculando m�dia aritm�tica das 4 notas
	mediaNota = somaNota/4.0;
	
	//sa�da de dados: resultado
	printf("\nO resultado � igual a: %.1f", mediaNota);
	
	return 0;
}
