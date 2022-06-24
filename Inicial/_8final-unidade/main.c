#include <stdio.h>
#include "estetica.h"
#include "manipula_vetor.h"
#include "operacoes.h"
#include "teste.h"

int main()
{
    // DECLARAÇÃO - variáveis comuns
    int escolha = 0, quantidade = 0;

    // SAÍDA - do logo e das opções de operações
    out_logo();
    out_operacoes();

    // ENTRADA - escolha
    scanf("%d", &escolha);

    // TESTA - se a escolha está entre 1 e 2
    escolha = testar_escolha(escolha, 1, 2);

	
    // ENTRADA - qtd de números a serem operados
    printf("Escolha com quantos números você deseja realizar essa operação: ");
    scanf("%d", &quantidade);

    // TESTA - se a quantidade é adequada, sendo o segundo parâmetro o limite mínimo
    teste_qtd(quantidade, 2);

    // DECLARAÇÃO - vetor baseado em quantos números o usuário quer operar
    int numeros[quantidade]; // TALVEZ ISSO SEJA UM PROBLEMA

    // ENTRADA - valores
    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

	// SAÍDA DOS VALORES QUE O USUÁRIO COLOCOU
    imprimir(numeros, quantidade);

    switch (escolha)
    {
    case 1:
        somar(numeros, quantidade);
        break;
        
    case 2:
        multiplicar(numeros, quantidade);
        break;
    
    default:
        printf("Comando não reconhecido.");
        break;
    }

    return 0;
}

int imprimir(int *V, int tamV)
{
    printf("(");
    for (int i = 0; i < tamV; i++)
    {
        printf("%d ", V[i]);
    }
    printf(")\n");

    return 0;
}
