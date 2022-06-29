int busca_simples(int *vetor, int tam_vetor, int valor_a_ser_procurado, int *posicao_encontrado)
{
    int valor_encontrado = 0;
    int valor_foi_encontrado = 0;

    // busca o valor na lista
    for (int cont = 0; cont < tam_vetor; cont++)
    {
        if (vetor[cont] == valor_a_ser_procurado)
        {
            valor_foi_encontrado = !0;
            posicao_encontrado = cont + 1;
            valor_encontrado = vetor[cont];
        }
    }

    if(valor_foi_encontrado != 0){
        printf("O valor %d foi encontrado na %dª posição", valor_a_ser_procurado, posicao_encontrado);
    }
    else{
        printf("Valor não encontrado");
    }

    return valor_encontrado;
}