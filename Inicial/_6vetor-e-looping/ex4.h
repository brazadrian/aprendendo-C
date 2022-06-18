#include <stdio.h>

// Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

// constante para o tamanho do vetor letra[], que armazenará todas as entradas do usuário
#define TAMVETLETRA 10


int ex4() {

    printf("Você escolheu o algoritmo para entrada de 10 caracteres, com saída das consoantes digitadas\n\n");

    //char letra[TAMVETLETRA];
    char consoante[22] = "bcdfghjklmnpqrstvwxyz";
    char letra[TAMVETLETRA], letraConsoante[TAMVETLETRA];

    int i, j, somaConsoantes = 0;

    // ENTRADA
    for(i = 0; i < TAMVETLETRA; i++){
        printf("Digite a %dª letra: ", i + 1);
        scanf("%c", &letra[i]);
        setbuf(stdin, 0); // comando para limpar o buffer
    }

////////////////////////////// LEMBRA DE USAR O TOLOWER

    // COMPARACAO
    for(i = 0; i < TAMVETLETRA; i++){
        for(j = 0; j < 22; j++){
            if(letra[i] == consoante [j]){
                letraConsoante[i] = letra[i];
                somaConsoantes ++;
            }
        }
    }

    // SAÍDA,


    printf("\nVocê digitou %d consoantes, quais foram:\n", somaConsoantes);
    for(i = 0; i < TAMVETLETRA; i++){
        printf("%c ", letraConsoante[i]);
    }

	return 0;
	
}
