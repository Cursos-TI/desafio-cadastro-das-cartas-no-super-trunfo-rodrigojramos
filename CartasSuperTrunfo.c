#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    int pontosTuristicos1, pontosTuristicos2;
    int vPopulacao, vArea, vPib, vPontos, vDensidade, vPibPerCapita, vSuperPoder;
    unsigned long int populacao1, populacao2;
    char estado1, estado2;
    char codigoCarta1[4], nomeCidade1[20], codigoCarta2[4], nomeCidade2[20];
    float area1, pib1, area2, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    printf("Cadastro das cartas\n");
    printf("Carta 1:\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);
    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a area desta cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Calculo da Densidade Populacional - Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    //Calculo do PIB per Capita - Carta 1
    pibPerCapita1 = pib1 / (float)populacao1;
    // Calculo do Super Poder - Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    printf(" \n");
    printf("Carta 2:\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);
    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a area desta cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Calculo da Densidade Populacional - Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    //Calculo do PIB per Capita - Carta 2
    pibPerCapita2 = pib2 / (float)populacao2;
    // Calculo do Super Poder - Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);
    
    // Exibição dos Dados das Cartas:
    printf(" \n");
    printf("Cartas cadastradas \n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

    printf(" \n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);
    
    printf(" \n");
    printf("Comparação de Cartas:\n");

    vPopulacao = populacao1 > populacao2;
    vArea = area1 > area2;
    vPib = pib1 > pib2;
    vPontos = pontosTuristicos1 > pontosTuristicos2;
    vDensidade = densidadePopulacional1 < densidadePopulacional2;
    vPibPerCapita = pibPerCapita1 > pibPerCapita2;
    vSuperPoder = superPoder1 > superPoder2;

    printf("População: Carta 1 venceu (%d)\n", vPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    return 0;
}
