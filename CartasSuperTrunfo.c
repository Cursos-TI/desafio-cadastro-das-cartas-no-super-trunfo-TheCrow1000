#include <stdio.h>

int main() {
    // CADASTRO DE CARTAS

    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_P1, pib_percapta1, densidade_P2, pib_percapta2;
    int numero_pontos1, numero_pontos2;

    // DADOS DA CARTA 1

    printf("\n=== CADASTRO DA CARTA 1 ===\n");

    printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: \n");
    scanf("%19s", codigo1);

    printf("Insira o nome do Estado: \n");
    scanf("%19s", nome1);

    printf("Insira a população: \n");
    scanf("%d", &populacao1);

    printf("Insira a área (em km²) da sua carta: \n");
    scanf("%f", &area1);

    printf("Insira o PIB do estado que está descrito em sua carta: \n");
    scanf("%e", &pib1);

    printf("Insira o número de pontos turísticos do estado em sua carta: \n");
    scanf("%d", &numero_pontos1);

    // DADOS DA CARTA 2

    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: \n");
    scanf("%19s", codigo2);

    printf("Insira o nome do Estado: \n");
    scanf("%19s", nome2);

    printf("Insira a população: \n");
    scanf("%d", &populacao2);

    printf("Insira a área (em km²) da sua carta: \n");
    scanf("%f", &area2);

    printf("Insira o PIB do estado que está descrito em sua carta: \n");
    scanf("%e", &pib2);

    printf("Insira o número de pontos turísticos do estado em sua carta: \n");
    scanf("%d", &numero_pontos2);

    //CALCULOS DE DENSIDADE POPULACIONAL

    densidade_P1 = populacao1 / area1;
    densidade_P2 = populacao2 / area2;
    
    //CALCULO PIB PER CAPITA    

    pib_percapta1 = pib1 / populacao1;
    pib_percapta2 = pib2 / populacao2;
    
    // EXIBINDO RESULTADOS

    printf("\n=== CARTA 1 ===\n");
    printf("ESTADO: %c \n", estado1);
    printf("CÓDIGO: %s \n", codigo1);
    printf("NOME DO ESTADO: %s \n", nome1);
    printf("POPULAÇÃO: %d \n", populacao1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: %.2e \n", pib1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", numero_pontos1);
    printf("DENSIDADE POPUPACIONAL DA CARTA 1: %f \n", densidade_P1);
    printf("O PIB PER CAPITA DA CARTA 1: %f \n", pib_percapta1);

    printf("\n=== CARTA 2 ===\n");
    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", codigo2);
    printf("NOME DO ESTADO: %s \n", nome2);
    printf("POPULAÇÃO: %d \n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2e \n", pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", numero_pontos2);
    printf("DENSIDADE POPUPACIONAL DA CARTA 2: %f \n", densidade_P2);
    printf("O PIB PER CAPITA DA CARTA 2: %f \n", pib_percapta2);
    
    return 0;
}
