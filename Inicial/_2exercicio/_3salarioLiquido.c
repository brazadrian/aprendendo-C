#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	//setando idioma pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Ex. l.2.1 - Quest�o 15
	//Fa�a um Programa que pergunte o sal�rio, horas trabalhas e mostre o total do sal�rio ao m�s
	
	//declarando vari�veis
	float salHora, tempoTrabalho, salBruto, salLiquido;
	
	//declarando vari�veis dos impostos e valor sindical
	float irpf = 0.11, inss = 0.08, sind = 0.05;
	
	
	//solicita��o e entrada de dados
	printf("Digite quanto voc� recebe por hora: ");
	scanf("%f", &salHora);
	
	printf("Digite quantas horas voc� trabalhou esse m�s: ");
	scanf("%f", &tempoTrabalho);
	
	//realizando opera��es, atribuindo valores e mostrando resultado
	salBruto = salHora*tempoTrabalho;
	printf("\n+ Sal�rio bruto: R$ %.2f\n", salBruto);

	printf("- Pago ao IRPF: R$ %.2f\n", salBruto*irpf);
		
	printf("- Pago ao INSS: R$ %.2f\n", salBruto*inss);
	
	printf("- Pago ao Sindicato: R$ %.2f\n", salBruto*sind);
	
	salLiquido = salBruto - salBruto*inss - salBruto*irpf - salBruto*sind;
	
	printf("\n= Sal�rio l�quido: %.2f\n", salLiquido);
	
	return 0;
}
