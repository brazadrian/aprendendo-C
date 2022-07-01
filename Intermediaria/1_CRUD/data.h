#include <stdio.h>

void data_create(char *string, int tamString)
{
    printf("create\n");
    scanf("%s", string);
    printf("Parabuains!");
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

void mostrar_linha()
{
    printf("\n---------------------------\n");
}
