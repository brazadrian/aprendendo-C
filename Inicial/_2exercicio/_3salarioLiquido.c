#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	//setando idioma pt-br
	setlocale(LC_ALL, "Portuguese");

	//Ex. l.2.1 - Questão 15
	//Faça um Programa que pergunte o salário, horas trabalhas e mostre o total do salário ao mês
	
	//declarando variáveis
	float salHora, tempoTrabalho, salBruto, salLiquido;

	//declarando variáveis dos impostos e valor sindical
	float irpf = 0.11, inss = 0.08, sind = 0.05;
	
	//declarando variáveis resultantes das taxações
	float restIrpf, restInss, restSind;

	//solicitação e entrada de dados
	printf("Digite quanto você recebe por hora: ");
	scanf("%f", &salHora);

	printf("Digite quantas horas você trabalhou esse mês: ");
	scanf("%f", &tempoTrabalho);

	//realizando operações, atribuindo valores e mostrando resultado
	salBruto = salHora * tempoTrabalho;
	printf("\n+ Salário bruto: R$ %.2f\n", salBruto);

	restIrpf = salBruto*irpf;

	printf("- Pago ao IRPF: R$ %.2f\n", restIrpf);

	restInss = salBruto * inss;
	printf("- Pago ao INSS: R$ %.2f\n", restInss);

	restSind = salBruto * sind;
	printf("- Pago ao Sindicato: R$ %.2f\n", restSind);

	salLiquido = salBruto - restInss - restIrpf - restSind;

	printf("\n= Salário líquido: %.2f\n", salLiquido);

	return 0;
}
