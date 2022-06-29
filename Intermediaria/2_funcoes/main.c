#include <stdio.h>

    // colocar condições para os textos digitados -> serem convertidos em números 
    // https://classroom.google.com/u/0/c/NDYwNjA4NzM1NzM3/a/NTE1NzQ0MDA2MDQz/details
    // https://wiki.python.org.br/ExerciciosFuncoes
    // http://linguagemc.com.br/a-biblioteca-string-h/
    

int main()
{
    int num_controle;
    int n1, n2;

    printf("Bem vindo à calculadora!\n\n");
    printf("1 - Soma;\n2 - Subtração;\n3 - Multiplicação;\n4 - Divisão.\n");
    printf("\nEscolha uma das operações a serem realizadas: ");
    scanf("%i", &num_controle);

    printf("Certo.\nDigite o 1º número: "); // mudar para %d dentro de um for
    scanf("%i", &n1);

    printf("Digite o 2º número: "); // mudar para %d dentro de um for
    scanf("%i", &n2);

    switch (num_controle)
    {
    case 1:
        printf("O resultado da soma de %d e %d");

        break;
    
    default:
        break;
    }



    

    return 0;
}