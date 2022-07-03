// https://wiki.python.org.br/ExerciciosFuncoes - 5ª Questão

#include <stdio.h>
#include "somaImposto.h"

int main() {
	float taxa_de_imposto = 10;
	float preco_com_imposto = 0.0;
	float preco = 20.00;

	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	
	preco_com_imposto = somaImposto(taxa_de_imposto, preco);
	
	printf("O preço com imposto de 10%% é de: %.2f", preco_com_imposto);
	
	return 0;
}
