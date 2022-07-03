#include <stdio.h>

void data_create(char *string, int tamString)
{
    printf("create\n");
    scanf("%s", string);
    printf("!");
}

void data_read(char *string, int tamString)
{
    printf("read\n");
    printf("%s", string);
}

void data_delete()
{
    printf("delete");
}

void data_update()
{
    printf("update");
}



int operacoes(opcao_escolhida)
{
    switch(opcao_escolhida)
    {
        case 0:
            printf("0");
            opcao_escolhida = 0;
            break;
            
        case 0:
            printf("0");
            opcao_escolhida = 0;
            break;
    }
    return 0;
}