#include <stdio.h>
// constante para o tamanho do vetor nota[], que dirá quantas notas o algoritmo receberá
#define TAMVETNOTA 4

// Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

int ex3() {

    printf("Você escolheu o algoritmo para entrada de 4 notas, saída delas e sua média:\n\n");

    // vetor das notas
	float nota[TAMVETNOTA];

    // declarando variáveis
    float media, soma = 0;

    // for para as vezes em que serão inseridas as notas (nesse caso são 4 vezes)
    for (int cont = 0; cont < TAMVETNOTA; cont++)
    {
        printf("Digite a %dª nota: ", cont + 1);
        scanf("%f", &nota[cont]);
        soma = soma + nota[cont];
    }
	
    media = soma/TAMVETNOTA;

    printf("\nAs notas digitadas foram:\n\n");

    // for para a saída de dados, que serão todas as notas digitadas anteriormente
    for (int cont = 0; cont < TAMVETNOTA; cont++)
    {
        printf("%dª nota: %.2f\n", cont + 1, nota[cont]);
    }
    printf("\nA média entre as notas acima é: %.2f\n", media);


	return 0;
	
}
