#include <stdio.h>

int main(void)
{

	char sexo;

	printf("Para Feminino = F\nPara Masculino = M\nPara N�o-bin�rio = N\n\nDigite o sexo: ");
	scanf("%c", &sexo);

	printf("\nSexo digitado: ");

	if (sexo == 'M')
	{
		printf("masculino.");
	}
	else if(sexo == 'F')
	{
		printf("feminino.");
	}
	else if(sexo == 'N')
	{
		printf("n�o-bin�rio");
	}
	else
	{
		printf("inv�lido!");
	}

	printf("\n\n\n");

	return 0;
}
