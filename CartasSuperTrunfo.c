#include <stdio.h>

int main(){

//DADOS CARTA 1
char estado1;
char codigo1[4];
char nome_cidade1[50];
int populacao1;
float area1;
float pib1;
int num_pontos_turisticos1;
float pib_per_capita1;
float densidade_populacional1;

//DADOS CARTA 2
char estado2;
char codigo2[4];
char nome_cidade2[50];
int populacao2;
float area2;
float pib2;
int num_pontos_turisticos2;
float pib_per_capita2;
float densidade_populacional2;


//CÁLCULO PIB PER CAPITA 1
pib_per_capita1 = pib1 / populacao1;
//CÁLCULO DENSIDADE POPULACIONAL 1
densidade_populacional1 = populacao1 / area1;

//CÁLCULO PIB PER CAPITA 2
pib_per_capita2 = pib2  / populacao2;
//CÁLCULO DENSIDADE POPULACIONAL 2
densidade_populacional2 = populacao2 / area2;


//ENTRADA CARTA 1
printf("*****CARTA 1*****\n");

printf("Estado: \n");
scanf(" %c", &estado1);

printf("Código: \n");
scanf(" %s", codigo1);

printf("Nome da Cidade: \n");
scanf(" %s", nome_cidade1);

printf("População: \n");
scanf(" %d", &populacao1);

printf("Área(Em km²): \n");
scanf(" %f", &area1);

printf("PIB: \n");
scanf(" %f", &pib1);

printf("Número de pontos turísticos: \n");
scanf(" %d", &num_pontos_turisticos1);

//ENTRADA CARTA 2
printf("\n***CARTA 2***\n");

printf("Estado: \n");
scanf(" %c", &estado2);

printf("Código: \n");
scanf(" %s", codigo2);

printf("Nome da Cidade: \n");
scanf(" %s", nome_cidade2);

printf("População: \n");
scanf(" %d", &populacao2);

printf("Área(Em km²): \n");
scanf(" %f", &area2);

printf("PIB: \n");
scanf(" %f", &pib2);

printf("Número de pontos turísticos: \n");
scanf(" %d", &num_pontos_turisticos2);

//SAÍDA CARTA 1
printf("\n***CARTA 1***\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("População: %d\n", populacao1);
printf("Área(Em km²): %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", num_pontos_turisticos1);
printf("PIB per Capita: %.2f\n", pib_per_capita1);
printf("Densidade Populacional: %.2f\n", densidade_populacional1);

//SAÍDA CARTA 2
printf("\n***CARTA 2***\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área(Em km²): %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", num_pontos_turisticos2);
printf("PIB per Capita: %.2f\n", pib_per_capita2);
printf("Densidade Populacional: %.2f\n", densidade_populacional2);

return 0;
