#include <stdio.h>
#include <string.h>

int main(){

    //Declaraçõ de variáveis
    char estado1;
    char estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2, resultado;
    float area1, area2, pib1,pib2, ppc1, ppc2, densidade1, densidade2, superPoder1, superPoder2;

    //Lendo informações da Carta 1
    printf("Vamos iniciar o cadastro da primeira carta... \nDigite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Digite a população da cidade: ");
    scanf("%u", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &turismo1);

    //Lendo informações da Carta 2
    printf("\nAgora vamos cadastrar a segunda carta... \nDigite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população da cidade: ");
    scanf("%u", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &turismo2);

    //Calculando Pib per capita e Densidade populacional
    ppc1 = pib1*1000000000/populacao1;
    ppc2 = pib2*1000000000/populacao2;
    densidade1 = (float) populacao1/area1;
    densidade2 = (float) populacao2/area2;

    //Calculando Super Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) turismo1 + ppc1 + (1.0/densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) turismo2 + ppc2 + (1.0/densidade2);

    //Imprimindo informações da Carta 1
    printf("\nCarta 1\n");
    printf("___________________________________________\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", turismo1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", ppc1);
    printf("Super Poder: %.2f pontos\n", superPoder1);
    printf("___________________________________________\n\n");

    //Imprimindo informações da Carta 2
    printf("\nCarta 2\n");
    printf("___________________________________________\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", turismo2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    printf("Super Poder: %.2f pontos\n", superPoder2);
    printf("___________________________________________\n\n");

    //Comparação de Dados das Cartas
    printf("----------Resultado da Partida----------\n");
    resultado = populacao1 > populacao2;
    printf("População: %d\n", resultado);
    resultado = area1 > area2;
    printf("Área: %d\n", resultado);
    resultado = pib1 > pib2;
    printf("PIB: %d\n", resultado);
    resultado = turismo1 > turismo2;
    printf("Pontos Turísticos: %d\n", resultado);
    resultado = densidade1 < densidade2;
    printf("Densidade Populacional: %d\n", resultado);
    resultado = ppc1 > ppc2;
    printf("PIB per Capita: %d\n", resultado);
    resultado = superPoder1 > superPoder2;
    printf("Super Poder: %d\n", resultado);
    printf("----------------------------------------");

    return 0;
}