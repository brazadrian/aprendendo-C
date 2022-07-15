
int rd_aluno(Aluno a)
{

    printf("Aluno: %s\n", a.nome);
    printf("Matricula: %d ", a.matricula);
    printf("| Situação: %c\n", a.situacao);
    printf("Notas: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%dª: %d | ", i + 1, a.notas[i]);
    }
    printf("Média: %d\n", a.media);

    return 0;
}


