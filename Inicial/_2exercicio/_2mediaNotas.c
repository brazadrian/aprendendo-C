#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	//setando idioma pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
	
	//declarando variáveis
	float nota1, nota2, nota3, nota4, somaNota, mediaNota;
	
	//solicitando e "atribuindo" entradas nas variáveis
	printf("Digite a 1ª nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2ª nota: ");
	scanf("%f", &nota2);
	printf("Digite a 3ª nota: ");
	scanf("%f", &nota3);
	printf("Digite a 4ª nota: ");
	scanf("%f", &nota4);
	
	//somando
	somaNota = nota1 + nota2 + nota3 + nota4;
	
	//calculando média aritmética das 4 notas
	mediaNota = somaNota/4.0;
	
	//saída de dados: resultado
	printf("\nO resultado é igual a: %.1f", mediaNota);
	
	return 0;
}
