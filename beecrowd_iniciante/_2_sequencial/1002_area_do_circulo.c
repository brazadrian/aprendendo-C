#include <stdio.h>

int main()
{
	// declarando variáveis
	double pi = 3.14159;
	double area, raio;

	// entrada de dado
	scanf("%lf", &raio);

	// processamento
	area = (raio * raio) * pi;

	// saída (interessante o lf para double)
	printf("A=%.4lf\n", area);

	return 0;
}
