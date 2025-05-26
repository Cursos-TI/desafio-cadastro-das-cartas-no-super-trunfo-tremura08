#include <stdio.h>

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
    int atributoParaComparar = 1;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (Uma letra de 'A'-'H'): ");
    scanf(" %c", &estado1); // Note o espaço antes de %c para consumir a quebra de linha anterior
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // Lê até 49 caracteres ou encontrar uma nova linha
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (Uma letra de 'A'-'H'): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calculos de ambas as cartas
    // Calculo das densidades
    densidadePopulacional1 = populacao1 / area1;
    
    densidadePopulacional2 = populacao2 / area2;

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
    printf("População: %lu\n", populacao1);
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
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");

    // Comparação entre as cartas
    printf("--- Comparação de cartas ---\n");
    if (atributoParaComparar == 1) {
        printf("Atributo: População\n");
        printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else {
            printf("Sem vencedores!\n");
        }
    }

    return 0;
}