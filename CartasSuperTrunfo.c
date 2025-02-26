#include <stdio.h>
//Primeira Carta variaveis
int main () {
   char estado1;
   char codigo1[50];
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int turistico1;
//Variaveis Carta 2
    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
   
   printf("Carta 1:\n");
   

   printf("Estado:\n");
   scanf("%c",&estado1);

   printf("Código:\n");
   scanf("%s",&codigo1);

   printf("Nome da Cidade:\n");
   scanf("%s",&cidade1);
    
   printf("População:\n");
   scanf("%d",&populacao1);

   printf("Área (em km²)\n:");
   scanf("%f",&area1);

   printf("PIB: \n");
   scanf("%f",&pib1);
   
   printf("Número de Pontos Turísticos: \n");
   scanf("%d",&turistico1);
   
   printf("Carta 2:\n");
   

   printf("Estado:\n");
   scanf("%s",&estado2);

   printf("Código:\n");
   scanf("%s",&codigo2);

   printf("Nome da Cidade:\n");
   scanf("%s",&cidade2);
    
   printf("População:\n");
   scanf("%d",&populacao2);

   printf("Área (em km²): ");
   scanf("%f",&area2);

   printf("PIB: \n");
   scanf("%f",&pib2);
   
   printf("Número de Pontos Turísticos: \n");
   scanf("%d",&turistico2);
//Exibir Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    //Exibir Carta 2
    printf("Carta 2:\n");
    printf("Estado: %19s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);


   return 0;

