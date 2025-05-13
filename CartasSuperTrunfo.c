#include <stdio.h>
#include <string.h>

int main(){

    //Declaraçõ de variáveis
    char estado1;
    char estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1,pib2;

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
    scanf("%i", &populacao1);
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
    scanf("%i", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &turismo2);

    //Imprimindo informações da Carta 1
    printf("\nCarta 1\n");
    printf("___________________________________________\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", turismo1);
    printf("___________________________________________\n\n");

    //Imprimindo informações da Carta 2
    printf("\nCarta 2\n");
    printf("___________________________________________\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", turismo2);
    printf("___________________________________________\n\n");

}