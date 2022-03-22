#include <stdio.h>

int main(void)
{

	char sexo;

	printf("Para Feminino = F\nPara Masculino = M\nPara Não-binário = N\n\nDigite o sexo: ");
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
		printf("não-binário");
	}
	else
	{
		printf("inválido!");
	}

	printf("\n\n\n");

	return 0;
}
