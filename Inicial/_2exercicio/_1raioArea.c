#include <stdio.h>

int main(int argc, char** argv)
{
	//Ex. l.2.1 - Quest�o 6
	//Fazer um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
	
	float raio, area, pi;
	
	pi = 3.14;
	
	printf("Ol�, por favor, digite o RAIO do c�rculo a fim de obter sua �rea: ");
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	
	printf("%.2f", area);
		
	//descobrir fun��o para elevar a pot�ncia no C

	return 0;
}