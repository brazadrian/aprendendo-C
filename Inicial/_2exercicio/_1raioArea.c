#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese_Brasil");

	//Ex. l.2.1 - Questão 6
	//Fazer um Programa que peça o raio de um círculo, calcule e mostre sua área.
	
	float raio, area, pi;
	
	pi = 3.14;
	
	printf("Olá, por favor, digite o RAIO do círculo a fim de obter sua área: ");
	scanf("%f", &raio);
	
	//area = pi*(raio*raio);
	area = pi*pow(raio, 2);
	
	printf("%.2f", area);
		
	//descobrir função para elevar a potência no C

	return 0;
}