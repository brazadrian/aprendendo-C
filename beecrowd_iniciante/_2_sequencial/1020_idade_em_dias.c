#include <stdio.h>
#define QTANO 365
#define QTMES 30

int main()
{

    int idade;
    int ano, mes, dia;

    scanf("%d", &idade);

    ano = idade / QTANO;
    idade %= QTANO;

    mes = idade / QTMES;
    idade %= QTMES;

    dia = idade;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}