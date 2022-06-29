void data_create()
{
    printf("criando");
}

void data_read()
{
    printf("lendo");
}

void data_delete()
{
    printf("deletando");
}

void data_update()
{
    printf("modificando");
}

menu_line(){
    printf("\n---------------------\n");
}

void menu_show()
{
    printf("CRUD - Menu Principal\n");
    menu_line();
    printf("1 - Cadastrar\n");
    printf("2 - Pesquisar\n");
    printf("3 - Atualizar\n");
    printf("4 - Apagar\n");
    printf("5 - Finalizar\n");
    menu_line();
}