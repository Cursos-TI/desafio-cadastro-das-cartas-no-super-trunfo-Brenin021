#include <stdio.h>

int main () {
    // Primeira Carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, percapita1, superpoder1;
    int turistico1;

    // Segunda Carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, percapita2, superpoder2;
    int turistico2;

    // Entrada de dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado:\n");
    scanf(" %c", &estado1);

    printf("Código:\n");
    scanf("%s", codigo1);

    printf("Nome da Cidade:\n");
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%lu", &populacao1);

    printf("Área (em km²):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &turistico1);

    // Entrada de dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado:\n");
    scanf(" %c", &estado2);

    printf("Código:\n");
    scanf("%s", codigo2);

    printf("Nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("População:\n");
    scanf("%lu", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &turistico2);

    // Cálculos intermediários
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade populacional)
    superpoder1 = (float)populacao1 + area1 + pib1 + turistico1 + percapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + turistico2 + percapita2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1, densidade1, percapita1, superpoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidade2, percapita2, superpoder2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turistico1 > turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}












