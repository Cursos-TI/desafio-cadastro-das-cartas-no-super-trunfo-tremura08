#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a CvalorAtributo1_Carta1 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibpercapita1, superpoder1;
    int pontosTuristicos1;

    // Declaração das variáveis para a CvalorAtributo1_Carta1 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibpercapita2, superpoder2;
    int pontosTuristicos2;

    //Declaração dos atributos a serem calculados e somas
    int escolhaAtributo1, escolhaAtributo2;
    float valorAtributo1_Carta1, valorAtributo2_Carta1;
    float valorAtributo1_Carta2, valorAtributo2_Carta2;
    float somaAtributos_Carta1, somaAtributos_Carta2;

    // Definição das cvalorAtributo1_Carta1s cadastradas
    // CvalorAtributo1_Carta1 1
    estado1 = 'A';
    strcpy(codigo1, "A01");
    strcpy(nomeCidade1, "São Paulo");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    pontosTuristicos1 = 50;

    // CvalorAtributo1_Carta1 2
    estado2 = 'B';
    strcpy(codigo2, "B02");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    pontosTuristicos2 = 30;

    // Calculos de ambas as cvalorAtributo1_Carta1s
    // Calculo das densidades
    densidadePopulacional1 = (float)populacao1 / area1;
    densidadePopulacional2 = (float)populacao2 / area2;

    // Calculo dos pibs
    pibpercapita1 = pib1 * 1000000000.0f / populacao1;
    pibpercapita2 = pib2 * 1000000000.0f / populacao2;

    // Calculo dos superpoderes (não usados neste desafio, mas mantidos do código original)
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpercapita1 + (1.0f / densidadePopulacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpercapita2 + (1.0f / densidadePopulacional2);

    // Exibição dos dados da CvalorAtributo1_Carta1 1
    printf("CvalorAtributo1_Carta1 1:\n");
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

    // Exibição dos dados da CvalorAtributo1_Carta1 2
    printf("CvalorAtributo1_Carta1 2:\n");
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

    // Escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaAtributo1);

    if (escolhaAtributo1 == 0) {
        printf("Saindo do jogo.\n");
        return 0;
    }

    // Validação do primeiro atributo
    if (escolhaAtributo1 < 1 || escolhaAtributo1 > 5) {
        printf("Opção inválida para o primeiro atributo!\n");
        return 1;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o SEGUNDO atributo para comparação (não pode ser o mesmo do primeiro):\n");
    // Menus dinâmicos
    if (escolhaAtributo1 != 1) printf("1. População\n");
    if (escolhaAtributo1 != 2) printf("2. Área\n");
    if (escolhaAtributo1 != 3) printf("3. PIB\n");
    if (escolhaAtributo1 != 4) printf("4. Número de pontos turísticos\n");
    if (escolhaAtributo1 != 5) printf("5. Densidade demográfica\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo2 == 0) {
        printf("Saindo do jogo.\n");
        return 0;
    }

    // Validação do segundo atributo e se é diferente do primeiro
    if (escolhaAtributo2 < 1 || escolhaAtributo2 > 5 || escolhaAtributo2 == escolhaAtributo1) {
        printf("Opção inválida para o segundo atributo ou atributo já selecionado!\n");
        return 1;
    }

    // Atribuição dos valores para os atributos escolhidos
    // Atributo 1
    switch (escolhaAtributo1) {
        case 1: // População
            valorAtributo1_Carta1 = (float)populacao1;
            valorAtributo1_Carta2 = (float)populacao2;
            break;
        case 2: // Área
            valorAtributo1_Carta1 = area1;
            valorAtributo1_Carta2 = area2;
            break;
        case 3: // PIB
            valorAtributo1_Carta1 = pib1;
            valorAtributo1_Carta2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valorAtributo1_Carta1 = (float)pontosTuristicos1;
            valorAtributo1_Carta2 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            valorAtributo1_Carta1 = densidadePopulacional1;
            valorAtributo1_Carta2 = densidadePopulacional2;
            break;
        default:
            printf("Erro na seleção do primeiro atributo.\n");
            return 1;
    }

    // Atributo 2
    switch (escolhaAtributo2) {
        case 1: // População
            valorAtributo2_Carta1 = (float)populacao1;
            valorAtributo2_Carta2 = (float)populacao2;
            break;
        case 2: // Área
            valorAtributo2_Carta1 = area1;
            valorAtributo2_Carta2 = area2;
            break;
        case 3: // PIB
            valorAtributo2_Carta1 = pib1;
            valorAtributo2_Carta2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valorAtributo2_Carta1 = (float)pontosTuristicos1;
            valorAtributo2_Carta2 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            valorAtributo2_Carta1 = densidadePopulacional1;
            valorAtributo2_Carta2 = densidadePopulacional2;
            break;
        default:
            printf("Erro na seleção do segundo atributo.\n");
            return 1;
    }

    // Exibição dos atributos escolhidos e seus valores
    printf("\n--- Comparação de CvalorAtributo1_Carta1s ---\n");
    printf("Países: %s vs %s\n", nomeCidade1, nomeCidade2);

    // Detalhes do primeiro atributo
    printf("\nPrimeiro Atributo: ");
    switch (escolhaAtributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("%s: %.2f\n", nomeCidade1, valorAtributo1_Carta1);
    printf("%s: %.2f\n", nomeCidade2, valorAtributo1_Carta2);
    // Comparação do primeiro atributo (usando operador ternário para a mensagem de resultado)
    printf("Resultado 1: %s\n", (escolhaAtributo1 == 5) ?
                                  ((valorAtributo1_Carta1 < valorAtributo1_Carta2) ? strcat(nomeCidade1, " Venceu!") :
                                   (valorAtributo1_Carta2 < valorAtributo1_Carta1 ? strcat(nomeCidade2, " Venceu!") : "Empate!")) :
                                  ((valorAtributo1_Carta1 > valorAtributo1_Carta2) ? strcat(nomeCidade1, " Venceu!") :
                                   (valorAtributo1_Carta2 > valorAtributo1_Carta1 ? strcat(nomeCidade2, " Venceu!") : "Empate!")));


    // Detalhes do segundo atributo
    printf("\nSegundo Atributo: ");
    switch (escolhaAtributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("%s: %.2f\n", nomeCidade1, valorAtributo2_Carta1);
    printf("%s: %.2f\n", nomeCidade2, valorAtributo2_Carta2);
    // Comparação do segundo atributo (usando operador ternário para a mensagem de resultado)
    printf("Resultado 2: %s\n", (escolhaAtributo2 == 5) ?
                                  ((valorAtributo2_Carta1 < valorAtributo2_Carta2) ? strcat(nomeCidade1, " Venceu!") :
                                   (valorAtributo2_Carta2 < valorAtributo2_Carta1 ? strcat(nomeCidade2, " Venceu!") : "Empate!")) :
                                  ((valorAtributo2_Carta1 > valorAtributo2_Carta2) ? strcat(nomeCidade1, " Venceu!") :
                                   (valorAtributo2_Carta2 > valorAtributo2_Carta1 ? strcat(nomeCidade2, " Venceu!") : "Empate!")));


    // Soma dos atributos e resultado final
    somaAtributos_Carta1 = valorAtributo1_Carta1 + valorAtributo2_Carta1;
    somaAtributos_Carta2 = valorAtributo1_Carta2 + valorAtributo2_Carta2;

    printf("\n--- Soma dos Atributos ---\n");
    printf("%s (Soma): %.2f\n", nomeCidade1, somaAtributos_Carta1);
    printf("%s (Soma): %.2f\n", nomeCidade2, somaAtributos_Carta2);

    printf("--- Resultado Final ---\n");
    if (somaAtributos_Carta1 > somaAtributos_Carta2) {
        printf("%s VENCEU A RODADA!\n", nomeCidade1);
    } else if (somaAtributos_Carta2 > somaAtributos_Carta1) {
        printf("%s VENCEU A RODADA!\n", nomeCidade2);
    } else {
        printf("EMPATE GERAL!\n");
    }

    return 0;
}