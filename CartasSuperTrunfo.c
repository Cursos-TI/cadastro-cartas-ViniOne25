
#include <stdio.h>

int main(){
    // carta 1
    char estado1[20];
    char codigo1[3] = "A01";
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int num_pontos_turisticos1;

    // carta 2
    char estado2[20];
    char codigo2[3];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int num_pontos_turisticos2;

    // entrada de dados primeira carta
    printf("Digite o nome do estado: ");
    scanf("%s", &estado1);

    printf("Digite o código do estado: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área(Em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos1);

    // entrada de dados segunda carta
     printf("Digite o nome do estadoparaiba: ");
    scanf("%s", &estado2);

    printf("Digite o código do estado: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área(Em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos2);

    // exibir dados da primeira carta
    printf("Carta 1 \n");
    printf("Estado: %s - Código: %s \n", estado1, codigo1);
    printf("Cidade: %s - População: %d \n", nome_cidade1, populacao1);
    printf("Área: %f km² - PIB: %f Bilhões \n", area1, pib1);
    printf("Número de pontos turísticos: %d \n", num_pontos_turisticos1);

    // exibir dados da segunda carta
    printf("Carta 2 \n");
    printf("Estado: %s - Código: %s \n", estado2, codigo2);
    printf("Cidade: %s - População: %d \n", nome_cidade2, populacao2);
    printf("Área: %f km² - PIB: %f Bilhões \n", area2, pib2);
    printf("Número de pontos turísticos: %d \n", num_pontos_turisticos2);

} 
