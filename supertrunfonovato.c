#include <stdio.h>

int main() {
    char estado1, estado2;
    char carta1[10], carta2[10];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturistico1, pontosturistico2;

    //dados da carta 1
    printf("Carta 1\n");
    printf("Digite estado:");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o codigo da carta:\n");
    scanf(" %s", carta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area:\n");
    scanf("%f", &area1);

    printf("Digite PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturistico1);

    //dados da carta 2
    printf("Carta 2\n");
    printf("Digite estado:\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta:\n");
    scanf(" %s", carta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area:\n");
    scanf("%f", &area2);

    printf("Digite PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturistico2);


    //imprimindo os dados
    printf("\n ***Dados da Carta 1*** \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturistico1);

    printf("\n ***Dados da Carta 2*** \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturistico2);




    return 0;
}