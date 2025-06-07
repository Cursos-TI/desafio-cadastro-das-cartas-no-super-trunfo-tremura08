#include <stdio.h>
#include <string.h>

int main() {
// Declaração das variáveis para a Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibpercapita1, superpoder1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibpercapita2, superpoder2;
    int pontosTuristicos2;

    //Declaração do atributo a ser calculado
    int atributoParaComparar;

    // Definição das cartas cadastradas para uso futuro
    // Carta 1
    estado1 = 'A'; // Correção: Atribuição de char único
    strcpy(codigo1, "A01");
    strcpy(nomeCidade1, "São Paulo");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    pontosTuristicos1 = 50;

    // Carta 2
    estado2 = 'B'; // Correção: Atribuição de char único
    strcpy(codigo2, "B02");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    pontosTuristicos2 = 30;

    // Calculos de ambas as cartas
    // Calculo das densidades
    densidadePopulacional1 = (float)populacao1 / area1; // Correção: Cast para float
    
    densidadePopulacional2 = (float)populacao2 / area2; // Correção: Cast para float

    // Calculo dos pibs
    pibpercapita1 = pib1 * 1000000000.0f / populacao1;

    pibpercapita2 = pib2 * 1000000000.0f / populacao2;

    // Calculo dos superpoderes
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpercapita1 + (1.0f / densidadePopulacional1);

    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpercapita2 + (1.0f / densidadePopulacional2);

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); // Correção: %lu para unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2); // Correção: %lu para unsigned long int
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");

    // Comparação entre as cartas
    printf("\nEscolha o atributo para comparação:\n");
    printf("Estado 1: %s\n", nomeCidade1);
    printf("Estado 2: %s\n", nomeCidade2);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: \n");
    scanf("%d", &atributoParaComparar);

    switch (atributoParaComparar)
    {
    case 1:
        printf("Atríbuto: População\n");
        printf("%s: %lu\n", nomeCidade1, populacao1);
        printf("%s: %lu\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("%s Venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("%s Venceu!\n", nomeCidade2);
        } else {
            printf ("Empate!\n");
        }
        break;

    case 2:
        printf("Atríbuto: Área\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2) {
            printf("%s Venceu!\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("%s Venceu!\n", nomeCidade2);
        } else {
            printf ("Empate!\n");
        }
        break;

    case 3:
        printf("Atríbuto: PIB\n");
        printf("%s: %.2f\n", nomeCidade1, pib1);
        printf("%s: %.2f\n", nomeCidade2, pib2);
        if (pib1 > pib2) {
            printf("%s Venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("%s Venceu!\n", nomeCidade2);
        } else {
            printf ("Empate!\n");
        }
        break;

    case 4:
        printf("Atríbuto: Número de Pontos Turísticos\n");
        printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("%s Venceu!\n", nomeCidade1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("%s Venceu!\n", nomeCidade2);
        } else {
            printf ("Empate!\n");
        }
        break;

    case 5:
        printf("Atríbuto: Densidade Demográfica\n");
        printf("%s: %.2f\n", nomeCidade1, densidadePopulacional1);
        printf("%s: %.2f\n", nomeCidade2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("%s Venceu!\n", nomeCidade1);
        } else if (densidadePopulacional2 < densidadePopulacional1) {
            printf("%s Venceu!\n", nomeCidade2);
        } else {
            printf ("Empate!\n");
        }
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}