#include <stdio.h>
int main(){
    char codigo1[4];
    //declarando variaveis
    codigo1;
     int populacao1;
     int pontosTuristicos1;
     float pib1;
     float area1;

    char codigo2[4];
     codigo2;
     int populacao2;
     int pontosTuristicos2;
     float pib2;
     float area2;
        //cadastro carta 1 aqui foi a parte que deu trabalho
        printf("\n===Cadastro da carta 1===\n");
        printf("Digite o codigo da carta(Ex: A01)\n");
        scanf("%s", codigo1);

        printf("Digite a população \n" );
        scanf("%d", &populacao1);

        printf("Digite a area (km2): ");
        scanf("%f", &area1);

        printf("Digite o PIB (em bilhoes): ");
        scanf("%f", &pib1);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos1);

    // Cadastro da carta 2
        printf("\n=== Cadastro da Carta 2 ===\n");
        printf("Digite o codigo da carta (ex: B01): ");
        scanf("%s", codigo2);

        printf("Digite a populacao: \n");
        scanf("%d", &populacao2);

        printf("Digite a area (km2): \n");
        scanf("%f", &area2);

        printf("Digite o PIB (em bilhoes): \n");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &pontosTuristicos2);

        // Exibindo os dados cadastrados
        printf("\n=== Dados da Carta 1 ===\n");
        printf("Codigo: %s\n", codigo1);

        printf("Populacao: %d\n", populacao1);

        printf("Area: %.2f km2\n", area1);

        printf("PIB: %.2f bilhoes\n", pib1);

        printf("Pontos Turisticos: %d\n", pontosTuristicos1);

        printf("\n=== Dados da Carta 2 ===\n");

        printf("Codigo: %s\n", codigo2);

        printf("Populacao: %d\n", populacao2);

        printf("Area: %.2f km2\n", area2);

        printf("PIB: %.2f bilhoes\n", pib2);

        printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

