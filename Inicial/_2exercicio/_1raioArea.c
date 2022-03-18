#include <stdio.h>

int main(int argc, char** argv)
{
	//Ex. l.2.1 - Questão 6
	//Fazer um Programa que peça o raio de um círculo, calcule e mostre sua área.
	
	float raio, area, pi;
	
	pi = 3.14;
	
	printf("Olá, por favor, digite o RAIO do círculo a fim de obter sua área: ");
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	
	printf("%.2f", area);
		
	//descobrir função para elevar a potência no C

	return 0;
}