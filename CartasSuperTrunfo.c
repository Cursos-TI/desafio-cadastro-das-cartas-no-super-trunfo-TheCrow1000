#include <stdio.h>

int main() {
    // CADASTRO DE CARTAS

    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_P1, pib_percapta1, densidade_P2, pib_percapta2;
    int numero_pontos1, numero_pontos2;
    float densidadePinvertida1, densidadePinvertida2;
    float superpoder1, superpoder2;

    //Variaveis Resultados (Comparacao)
    int resultadoPopulacao1;
    int resultadoArea1;
    int resultadoPIB1;
    int resultadoPIBpercapita1;
    int resultadoDensidadePinvertida1;
    int resultadoPontosTuristicos1;

    // DADOS DA CARTA 1

    printf("\n=== CADASTRO DA CARTA 1 ===\n");

    printf("Insira uma letra de 'A' a 'Z' representando a sua CARTA: \n");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: \n");
    scanf("%19s", codigo1);

    printf("Insira o nome da CIDADE que está em sua CARTA: \n");
    scanf("%19s", nome1);

    printf("Insira a população: \n");
    scanf("%lu", &populacao1);

    printf("Insira a área (em km²) da sua carta: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da CIDADE que está descrito em sua carta: \n");
    scanf("%e", &pib1);

    printf("Insira o número de pontos turísticos da CIDADE em sua carta: \n");
    scanf("%d", &numero_pontos1);

    // DADOS DA CARTA 2

    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Insira uma letra de 'A' a 'Z' representando a sua CARTA: \n");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: \n");
    scanf("%19s", codigo2);

    printf("Insira o nome da CIDADE que está em sua CARTA: \n");
    scanf("%19s", nome2);

    printf("Insira a população: \n");
    scanf("%lu", &populacao2);

    printf("Insira a área (em km²) da sua carta: \n");
    scanf("%f", &area2);

    printf("Insira o PIB da CIDADE que está descrito em sua carta: \n");
    scanf("%e", &pib2);

    printf("Insira o número de pontos turísticos da CIDADE em sua carta: \n");
    scanf("%d", &numero_pontos2);

    //CALCULOS DE DENSIDADE POPULACIONAL

    densidade_P1 = populacao1 / area1;
    densidade_P2 = populacao2 / area2;
    densidadePinvertida1 = 1 / densidade_P1;
    densidadePinvertida2 = 1 / densidade_P2;
    
    //CALCULO PIB PER CAPITA    

    pib_percapta1 = pib1 / populacao1;
    pib_percapta2 = pib2 / populacao2;

    //SUPER PODER

    superpoder1 = populacao1 + area1 + pib1 + pib_percapta1 + densidadePinvertida1 + numero_pontos1;
    superpoder2 = populacao2 + area2 + pib2 + pib_percapta2 + densidadePinvertida2 + numero_pontos2;

    //COMPARACAO SIMPLES
    resultadoArea1 = area1 > area2;
    resultadoDensidadePinvertida1 = densidadePinvertida1 > densidadePinvertida2;
    resultadoPIB1 = pib1 > pib2;
    resultadoPIBpercapita1 = pib_percapta1 > pib_percapta2;
    resultadoPontosTuristicos1 = numero_pontos1 > numero_pontos2;
    resultadoPopulacao1 = populacao1 > populacao2; 

    // EXIBINDO RESULTADOS

    printf("\n=== CARTA 1 ===\n");
    printf("ESTADO: %c \n", estado1);
    printf("CÓDIGO: %s \n", codigo1);
    printf("NOME DO ESTADO: %s \n", nome1);
    printf("POPULAÇÃO: %lu \n", populacao1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: %.2e \n", pib1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", numero_pontos1);
    printf("DENSIDADE POPUPACIONAL DA CARTA 1: %f \n", densidade_P1);
    printf("O PIB PER CAPITA DA CARTA 1: %f \n", pib_percapta1);

    printf("\n=== CARTA 2 ===\n");
    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", codigo2);
    printf("NOME DO ESTADO: %s \n", nome2);
    printf("POPULAÇÃO: %lu \n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2e \n", pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", numero_pontos2);
    printf("DENSIDADE POPUPACIONAL DA CARTA 2: %f\n", densidade_P2);
    printf("O PIB PER CAPITA DA CARTA 2: %f \n", pib_percapta2);
    printf("==================================\n");
    
    //Resultado Super Poder
    printf ("=== O Super Poder ===\n");
    printf ("O Super Poder da carta 1 e: %.2f\n", superpoder1);
    printf ("O Super Poder da carta 2 e: %.2f\n", superpoder2);

    //RESULTADO DAS COMPARACOES
    printf("=== Comparando Cartas ===\n");
    printf ("A carta 1 tem uma POPULACAO maior que a carta 2: %d\n", resultadoPopulacao1);
    printf ("A carta 1 tem uma AREA maior que a carta 2: %d\n", resultadoArea1);
    printf ("A carta 1 tem uma Densidade Populacional maior que a carta 2: %d\n", resultadoDensidadePinvertida1);
    printf ("A carta 1 tem uma PIB que a carta 2: %d\n", resultadoPIB1);
    printf ("A carta 1 tem uma PIB PER CAPITA que a carta 2: %d\n", resultadoPIBpercapita1);
    printf ("A carta 1 tem uma PONTOS TURISTICOS maior que a carta 2: %d\n", resultadoPontosTuristicos1);


    return 0;
}
