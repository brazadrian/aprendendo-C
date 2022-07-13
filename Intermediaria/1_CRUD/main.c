#include <stdio.h>
#include <string.h>

#include "structs.h" // Arquivo onde está formada a estrutura Aluno, usada ao longo do código
#include "menu.h"
#include "d_ct.h" // C
#include "d_rd.h" // R
#include "d_up.h" // U
#include "d_dt.h" // D

int main()
{

    /* Declarando vetor de alunos, "uma turma" */
    // Aluno turma[5];
    Aluno teste;

    int opcao = !0;

    while (opcao != 0)
    {
        opcao = mn_show(opcao);

        switch (opcao)
        {
        case 1:
            printf("1 - Criar");
            // ct_aluno(&teste);
            break;
        /* case 2:
            printf("2 - Ler");
            rd_aluno(turma[0]);

            break; */
/*         case 3:
            printf("3");
            up_aluno(turma[0]);
            break;
        case 4:
            printf("4");
            up_aluno(turma[0]);
            break; */
        case 0:
            printf("Você escolheu sair\n");
            break;
        }
    }

    return 0;
}
