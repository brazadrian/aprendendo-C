# Cardápio

Software desenvolvido para exibição de cardápio simples de um restaurante ou lanchonete.

Seu funcionamento diz respeito à uma soma simples dos preços de alguns produtos que serão escolhidos pelo cliente do estabelecimento e retornará o valor de pagamento necessário.

## Origem

Foi baseado em um problema da plataforma beecrowd[[1](#referências)], onde são escolhidos alguns produtos de um cardápio e é retornado o valor a ser pago por estes.

![Imagem extraída do problema da plataforma, com uma tabela que contém o código, especificação/nome de alguns produtos e o preço destes, com uns 5 exemplos de produtos listados](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1038_pt.png)

## Finalidade (problema)

Devido às rotinas agitadas nos restaurantes, faz-se necessária a digitalização de alguns serviços, para tanto foi desenvolvida esta solução que visa possibilitar a escolha dentre as opções de comida por parte do usuário, bem como da soma automática do preço dos produtos escolhidos.

Tem o objetivo de agilizar os pedidos feitos em certos estabelecimentos à medida que computabiliza os produtos e seus respectivos valores em uma operação simples a fim de verificar o preço de uma refeição completa.

Apesar de ser muito simples, o código pode ser utilizado na vida diária, fazendo-se necessária a adição manual no código-fonte dos produtos e valores destes, além de um pequeno esforço para utilização de linha de comando (CLI)[[2](#referências)].

> *Além de garantir meu conceito na disciplina de Coding ministrada por [Arnott](https://www.linkedin.com/in/arnottcaiado/)* 😄

## Requisitos

É necessário haver 3 menus:

1. Principal
   * Que encaminhará para os 2 cardápios
   * Ou para a finalização do algoritmo
     * Imprimindo o preço total
2. Cardápio dos alimentos
3. Cadápio das bebidas

É necessário que seja impresso o custo do produto escolhido

É neceessário que, no final, seja impresso o custo total dos produtos escolhidos

## Desenvolvimento

### [Fluxograma](https://lucid.app/lucidchart/3c6b9458-25c6-4742-a989-6e2efd4b445d/edit?viewport_loc=-77%2C107%2C2676%2C1125%2C0_0&invitationId=inv_24741dbf-1032-4974-8e45-acf23f80efd8#)

### Recursos

Foram usados neste software os seguintes recursos[[4](#referências)]:

* Estrutura de decisão;
* Laço de repetição;
* Vetor;
* Struct;
* Funções;

### Struct

Foi definido no arquivo *[structs.h](https://github.com/brazadrian/aprendendo-C/blob/master/Intermediaria/5_at_final_pedidos/structs.h)*, o struct Produto, o qual apresenta a seguinte estrutura:

- **Opção** concernete ao produto
- **Nome** do produto
- **Preço** do produto em questão

Podendo ser utilizado para comidas, bebidas e afins.

### Menu principal

Dentro do arquivo [*mn_cardapio.h*](https://github.com/brazadrian/aprendendo-C/blob/master/Intermediaria/5_at_final_pedidos/mn_cardapio.h) são exibidas as possibilidades de tipos de produtos do estabelecimento, nesse caso só comidas e bebidas, além da opção de finalização do pedido.

A função recebe um tipo inteiro ***opcao* → o**, e retorna a opção escolhida pelo usuário.

~~~c
int mn_cardapio(int o)
{
    printf("Exibição de todas as opções...");
    printf("Faça seu pedido. Digite sua opção: \n");
    scanf("%d", &o);

    return o;
}

~~~

a

### Menu de comidas e bebidas

Nos arquivos [*mn_comidas.h*](https://github.com/brazadrian/aprendendo-C/blob/master/Intermediaria/5_at_final_pedidos/mn_bebidas.h) e [*mn_bebidas.h*](https://github.com/brazadrian/aprendendo-C/blob/master/Intermediaria/5_at_final_pedidos/mn_bebidas.h) foram declaradas vetores do tipo c(omida) e b(ebida) e preenchidos com os dados necessários segundo o struct Produto, como no exemplo a seguir:

~~~c
strcpy(x[0].nome, "Feijão e arroz");
x[0].opcao = 0 + 1;
x[0].preco = 10.00;
~~~

> 'x' significa qualquer variável declarada a partir do struct Produto

Depois de declarados os itens do cardápio, faz-se uso de estrutura de repetição (for) para percorrer todo o vetor e imprimir as partes de estrutura Produto:

~~~c
for (i = 0; i < tamanho_do_vetor; i++)
        printf("%d - R$ %.2f - %s\n", x[i].opcao, x[i].preco, x[i].nome);
~~~

No que diz respeito a entrada de dados, há uma estrutura de repetição (while) que visa validar a entrada do usuário:

~~~c
while (op < 0 || op > tamanho_do_vetor)
{
  scanf("%d", &op);
}
~~~

Ainda há umt este usando-se de estrutura de decisão (if) para que, se o usuário escolha sair da tela do menu (digitando o 0 que será atribuído na variável *op*, haverá a saída do software, sem passar pelas instruições internas do if em questão:

~~~c
if (op != 0)
    {
        printf("Você escolheu comer/beber %s, que custa R$ %.2f\n\n", x[op - 1].nome, x[op - 1].preco);
        preco = x[op - 1].preco;
    }
~~~

A função não recebe parâmetros e retorna tipo float, que será o preço do produto escolhido:

~~~c
float mn_comidas(void)
{
  float preco = 0.0;

  // o usuário faz sua escolha, então imprime-se:

  printf("Você escolheu comer %s, que custa R$ %.2f\n\n", x[op - 1].nome, x[op - 1].preco);
  preco = x[op - 1].preco; // atribui à variável preco o valor do preço pré-cadastrado no item escolhido pelo usuário

  return preco;
}
~~~

## Referências

1. Problema ("lanche") nº [**1038**](https://www.beecrowd.com.br/judge/pt/problems/view/1038) do beecrowd.
2. Andrei L. **[O que é um CLI?](https://www.hostinger.com.br/tutoriais/o-que-e-cli)**, 2021.
3. Linguagem C descomplicada. [**Material complementar**](https://programacaodescomplicada.wordpress.com/complementar/)
4. PEREIRA, S.L. [**Linguagem C**.](https://www.ime.usp.br/~slago/slago-C.pdf)
5. BACKES, A. [**Linguagem C completa e descomplicada**](https://www.amazon.com.br/Linguagem-C-ANDR%C3%89-BACKES/dp/8535291067)
