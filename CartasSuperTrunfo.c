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
    float densidadePopulacional1;
    float pibCapta1;
    float super_poder1;

    //variaveis para a segunda carta
    char nomeCidade2[50]; //&c
    int populacao2; //&d
    float area2; //&f
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibCapta2;
    float super_poder2;

    //Cadastro da primeira carta
    printf("****Bem vindo ao jogo Super Trunfo****\n\n\n\n");
    printf("**Cadastro de Cartas**\n\n");
    printf("**Carta 1**\n\n");
    printf("Digite o nome de uma cidade que comece com a letra A: \n");
    scanf(" %49[^\n]", nomeCidade1); // Lê até a quebra de linha
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1; //Calcula da densidade populacional e armazena
    pibCapta1 = (pib1 * 1000000) / populacao1; //Calcula da o pib per capta e armazena
    super_poder1 = populacao1 + area1 + (pib1 * 1000000) + pontosTuristicos1 + pibCapta1 + (1 / densidadePopulacional1); // Calculo do super poder

    //Cadastro da segunda carta
    printf("**Carta 2**\n\n");
    printf("Digite o nome de uma cidade que comece com a letra B:  \n");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibCapta2 = (pib2 * 1000000) / populacao2;
    super_poder2 = populacao2 + area2 + (pib2 * 1000000) + pontosTuristicos2 + pibCapta2 + (1 / densidadePopulacional2); 

    // Exibir os dados cadastrados
    printf("\n******Cartas cadastradas********\n");
    printf("Carta 1\nEstado: A\nCódigo: A01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capta: %.2f\n\n", nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibCapta1);
    printf("Carta 2\nEstado: B\nCódigo: B01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capta: %.2f\n", nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibCapta2);
   

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");

    // População (maior vence)
    int resultado = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    // Área (maior vence)
    resultado = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    // PIB (maior vence)
    resultado = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    // Pontos Turísticos (maior vence)
    resultado = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    // Densidade Populacional (menor vence)
    resultado = densidadePopulacional1 < densidadePopulacional2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    // PIB per Capita (maior vence)
    resultado = pibCapta1 > pibCapta2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    // Super Poder (maior vence)
    resultado = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
