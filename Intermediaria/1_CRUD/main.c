#include <stdio.h>
#include <string.h>

#include "structs.h"
#include "d_ct.h"
#include "d_rd.h"

int main()
{
    // Aluno alunos[5];

    Aluno gilmar;

    ct_aluno(&gilmar);

    rd_aluno(gilmar);

    return 0;
}
