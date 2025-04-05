#include <stdio.h>

int main(){

    int populacao, populacao2, turistico, turistico2 = 0;
    float area, area2, PIB, PIB2 = 0;
    char estado, estado2 = 'A';
    char codigo[5];
    char codigo2[5];
    char cidade[50], cidade2[50];

//Coleta de dados da carta 1
    printf("Carta 1\n");

printf("Insira a letra representante do Estado: ");
scanf(" %c", &estado);

printf("Insira o código: ");
scanf("%s", &codigo);

printf("Qual o nome da cidade? ");
scanf("%s", &cidade);

printf("Qual é a população total? ");
scanf("%d", &populacao);

printf("Insira a área em km²: ");
scanf("%f", &area);

printf("Qual é o PIB? ");
scanf("%f", &PIB);

printf("Quantos pontos turísticos tem nesse local? ");
scanf("%d", &turistico);

//Coleta de dados da Carta 2
   printf("Carta 2\n");

printf("Insira a letra representante do Estado: ");
scanf(" %c", &estado2);
   
printf("Insira o código: ");
scanf("%s", &codigo2);
   
printf("Qual o nome da cidade? ");
scanf("%s", &cidade2);
   
printf("Qual é a população total? ");
scanf("%d", &populacao2);
   
printf("Insira a área em km²: ");
scanf("%f", &area2);
   
printf("Qual é o PIB? ");
scanf("%f", &PIB2);
   
printf("Quantos pontos turísticos tem nesse local? ");
scanf("%d", &turistico2);

 //Exibição das cartas

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", turistico);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", turistico2);

return 0;

 }