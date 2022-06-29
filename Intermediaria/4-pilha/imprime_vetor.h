#include <stdio.h>

// função para imprimir o vetor
// recebe o endereço do vetor
// recebe o tamanho do vetor
void imprime_vetor(int *vetor, int tam_vetor)
{
    // imprime lista
    for (int cont = 0; cont < tam_vetor; cont++)
    {
        printf("%d - ", vetor[cont]);
    }
}