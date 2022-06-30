#include <stdio.h>

void mostrar_linha(){
    printf("")
}
void menu_show()
{
    printf("CRUD - Menu Principal\n");
    mostrar_linha();
    printf("1 - Cadastrar\n");
    printf("2 - Pesquisar\n");
    printf("3 - Atualizar\n");
    printf("4 - Apagar\n");
    printf("5 - Finalizar\n");
    mostrar_linha();
}

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
