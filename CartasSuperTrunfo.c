#include <stdio.h>

int main() {

// CADASTRO DE CARTAS

char estado;
char codigo [20];
char nome [20];
int populacao;
float area;
float pib;
int numero_pontos;

// DADOS DA CARTA1

printf ("Insira uma uma letra de 'A' a 'H' (representando um dos oito estados): \n");
scanf(" %c", &estado);

printf ("Insira o codigo da carta: \n");
scanf ("%s", codigo);

printf ("Insira o nome do Estado: \n");
scanf ("%20s", nome);

printf ("Insira a populcao: \n");
scanf ("%d", &populacao);

printf ("Insira a area (em km²) da sua carta: \n");
scanf ("%f", &area);

printf (" Insira o PIB do estado que esta descrito em sua carta: \n");
scanf ("%e", &pib);

printf ("Insira o numero de pontos turisticos do estado em sua carta: \n");
scanf ("%d", &numero_pontos);

// RESULTADO DO CADASTRO

printf("\n=== CARTA 1 ===\n");
    printf("ESTADO: %c \n", estado);
    printf("CÓDIGO: %s \n", codigo);
    printf("NOME DO ESTADO: %s \n", nome);
    printf("POPULAÇÃO: %d \n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2e \n", pib);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", numero_pontos);

    return 0;
}
