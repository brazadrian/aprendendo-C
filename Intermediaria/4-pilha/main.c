/* #include <iostream>
#include <new> 
#include <string>*/
#include <stdlib.h> 
#include <stdio.h>
#include "busca_simples.h"
#include "imprime_vetor.h"

#define TAMVET 10


int main()
{
    int vetor[TAMVET] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int valor_procurado;
    int posicao;
    int valor_foi_encontrado = 0;

    imprime_vetor(vetor, TAMVET);

    printf("\nDigite o número que deseja encontrar: ");
    scanf("%d", &valor_procurado);

    valor_foi_encontrado = busca_simples(vetor, TAMVET, valor_procurado, &posicao);
    
    printf("\nteste. posição: %d", posicao);
    return 0;
}
