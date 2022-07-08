#include "struct_aluno.h"

#define TAMNOME 50+1

void data_create()
{
    char string[20];
    printf("create-de-dentro-da-funcao\n");
    scanf("%s", string);
    printf("!");
}

void data_read()
{
    char string[20];
    printf("pesquisa-de-dentro-da-funcao\n");
    printf("%s", string);
}

void data_delete()
{
    printf("delete-de-dentro-da-funcao");
}

void data_update()
{
    printf("update-de-dentro-da-funcao");
}
