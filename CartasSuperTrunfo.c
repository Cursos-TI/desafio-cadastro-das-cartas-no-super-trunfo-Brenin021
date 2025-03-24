#include <stdio.h>

//Primeira Carta variaveis
int main () {
   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int turistico1;
   float densidade1;
   float percapita1;
   //Variaveis Carta 2
   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int turistico2;
   float densidade2;
   float percapita2;

   printf("Carta 1:\n");

   printf("Estado:\n");
   scanf(" %c", &estado1); // Adicionei um espaço antes de %c

   printf("Código:\n");
   scanf("%s", codigo1);

   printf("Nome da Cidade:\n");
   scanf("%s", cidade1);

   printf("População:\n");
   scanf("%d", &populacao1);

   printf("Área (em km²):\n");
   scanf("%f", &area1);

   printf("PIB:\n");
   scanf("%f", &pib1);

   printf("Número de Pontos Turísticos:\n");
   scanf("%d", &turistico1);

   printf("Carta 2:\n");

   printf("Estado:\n");
   scanf(" %c", &estado2); // Adicionei um espaço antes de %c

   printf("Código:\n");
   scanf("%s", codigo2);

   printf("Nome da Cidade:\n");
   scanf("%s", cidade2);

   printf("População:\n");
   scanf("%d", &populacao2);

   printf("Área (em km²):\n");
   scanf("%f", &area2);

   printf("PIB:\n");
   scanf("%f", &pib2);

   printf("Número de Pontos Turísticos:\n");
   scanf("%d", &turistico2);

   // Exibir Carta 1
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n", turistico1);

   // Exibir Carta 2
   printf("Carta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", turistico2);

   //inicio da segunda fase do jogo nível aventureiro
   printf("A densidade populacional da Carta 1 é:\n");
   densidade1 = populacao1 / area1;
   printf("%.2f habitantes por km²\n", densidade1);

   printf("A densidade populacional da Carta 2 é:\n");
   densidade2 = populacao2 / area2;
   printf("%.2f habitantes por km²\n", densidade2);
  
   printf("O PIB per capita da Carta 1 é:\n");
   percapita1 = pib1 / populacao1;
   printf("R$ %.2f por habitante\n", percapita1);

   printf("O PIB per capita da Carta 2 é:\n");
   percapita2 = pib2 / populacao2;
   printf("R$ %.2f por habitante\n", percapita2);
   
   return 0;
}

   











