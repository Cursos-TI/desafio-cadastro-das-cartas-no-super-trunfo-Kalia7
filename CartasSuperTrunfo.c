#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    //linha de códifo para impressão de caracteres com acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //variaveis para a primeira carta
    char nomeCidade1[50]; //&c
    int populacao1 = 0; //&d
    float area1 = 0; //&f
    float pib1 = 0;
    int pontosTuristicos1 = 0;

    //variaveis para a segunda carta
    char nomeCidade2[50]; //&c
    int populacao2 = 0; //&d
    float area2 = 0; //&f
    float pib2 = 0;
    int pontosTuristicos2 = 0;

    //Cadastro da primeira carta
    printf("****Bem vindo ao jogo Super Trunfo****\n\n\n\n");
    printf("**Cadastro de Cartas**\n\n");
    printf("**Carta 1**\n\n");
    printf("Digite o nome de uma cidade que comece com a letra A: \n");
    scanf("%49s", &nomeCidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);
    float densidadePopulacional1 = populacao1 / area1; //Calcula da densidade populacional e armazena
    float pibCapta1 = pib1 / populacao1; //Calcula da o pib per capta e armazena
    
    //Cadastro da segunda carta
    printf("**Carta 2**\n\n");
    printf("Digite o nome de uma cidade que comece com a letra B: \n");
    scanf("%49s", &nomeCidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);
    float densidadePopulacional2 = populacao2 / area2;
    float pibCapta2 = pib2 / populacao2;

    // Exibir os dados cadastrados
    printf("\n******Cartas cadastradas********\n");
    printf("Carta 1\nEstado: A\nCódigo: A01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capta: %.2f\n\n", nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibCapta1);
    printf("Carta 2\nEstado: B\nCódigo: B01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capta: %.2f\n", nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional1, pibCapta1);
   

    return 0;
}
