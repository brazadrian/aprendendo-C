#include <stdio.h>

// Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.

void ex2(){

    // declarando variáveis, senha e nome como caractéres
    char nome, senha;

    //// Melhorar isso com o uso de strings
    // Entradas de dados, usuário e senha como char
    printf("Digite seu nome de usuário: ");
    scanf(" %c", &nome);

    printf("Digite sua senhas: ");
    scanf(" %c", &senha);

    // Repetir e solicitar entrada, enquanto nome e senha forem iguais
    while (nome == senha)
    {
        printf("Favor digite seu nome de usuário e senha diferentes:\n\n");
        printf("Digite seu nome de usuário: ");
        scanf(" %c", &nome);

        printf("Digite sua senhas: ");
        scanf(" %c", &senha);
    }
    printf("\nParabéns! Você digitou a senha corretamente.");
}
