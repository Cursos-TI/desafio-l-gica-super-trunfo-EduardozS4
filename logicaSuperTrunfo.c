#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados calculados
    printf("\n--- Dados Calculados ---\n");
    printf("Carta 1 - %s (Estado: %c)\n", nomeCidade1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s (Estado: %c)\n", nomeCidade2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ------------------------------------------
    // COMPARAÇÃO por POPULAÇÃO
    // ------------------------------------------

    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s: %lu habitantes\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu habitantes\n", nomeCidade2, populacao2);

    // Utilizando if e if-else para comparar
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // ===============================
    // Comparação por Área
    // ===============================
    printf("\n--- Comparação de Cartas (Atributo: Área) ---\n");
    printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // ===============================
    // Comparação por PIB
    // ===============================
    printf("\n--- Comparação de Cartas (Atributo: PIB) ---\n");
    printf("Carta 1 - %s: %.2f bilhões\n", nomeCidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões\n", nomeCidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // ===============================
    // Comparação por Densidade Populacional (menor vence)
    // ===============================
    printf("\n--- Comparação de Cartas (Atributo: Densidade Populacional - MENOR vence) ---\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // ===============================
    // Comparação por PIB per Capita
    // ===============================
    printf("\n--- Comparação de Cartas (Atributo: PIB per Capita) ---\n");
    printf("Carta 1 - %s: %.2f reais\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.2f reais\n", nomeCidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
