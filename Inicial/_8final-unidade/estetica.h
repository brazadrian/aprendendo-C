#include <stdio.h>

void out_linha(){
    printf("\n——————————————————————————\n");
}

void out_logo(){
		out_linha();
    printf("—————— CALCULADORA ———————");
		out_linha();
}

void out_operacoes(){
    printf("1 - Somar\n2 - Multiplicar");
		out_linha();
    printf("Escolha uma das operações acima: ");
}
