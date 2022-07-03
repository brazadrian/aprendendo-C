// https://wiki.python.org.br/ExerciciosFuncoes - 4ª Questão

#include <stdio.h>
#include "polaridade.h" // cabeçalho para a função polaridade()

int main(void) {
	// Declarando variáveis
  int valor;
	char pol_valor;

	// Entrada de dados
	printf("Digite um valor e saiba sua polaridade: ");
  scanf("%d", &valor);

	// Processamento com chamada de função
  pol_valor = polaridade(valor, &pol_valor);

	// Saída de dados
	printf("P - Positivo\nN - Negativo\nO valor digitado foi: ");
	printf("%c", pol_valor);
}
