#include <stdio.h>

// Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido. - adaptar para não-binário

void ex3(){
	//declarando variável
	char sexo;

	//solicitaçãoo do sexo (character)
	printf("Para Feminino = F\nPara Masculino = M\nPara Não-binário = N\n\nDigite o sexo: ");
	scanf("%c", &sexo);

	//primeira parte da saída de dados
	printf("\nSexo digitado: ");

	//segunda parte da saída, com condições (if e else)
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
	
}
