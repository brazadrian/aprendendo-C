#include <stdio.h>
#include <stdbool.h>

int main()
{

    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    bool B_maior_C = B > C;
    bool D_maior_A = D > A;
    bool somaCD_maior_somaAB = C + D > A + B;
    bool CDpositivos = C > 0 && D > 0;
    bool Apar = A % 2 == 0;

    if (B_maior_C && D_maior_A && somaCD_maior_somaAB && CDpositivos && Apar)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
