#include <stdio.h>

int main() {

char estado, estado2;
char cidade[50], cidade2[50], codigocarta[4], codigocarta2[4]; //usar %c 1 caracter  %s para string
int populacao, populacao2, turismo, turismo2; //usar %d para inteiro
float area, area2, pib, pib2;  //usar %f e %.2f para 2 casas decimais

printf("Seja bem vindo ao jogo Super Trunfo! \n\n"); //Boas vindas

printf("-----------Carta 1-----------\n\n"); //Primeira carta

printf("Escolha uma letra para o Estado(A a H): ");
scanf(" %c", &estado);
printf("Escolha o código de uma carta(ex: A01): ");
scanf("%s", &codigocarta);
printf("Informe o nome da cidade: ");
scanf(" %[^\n]", cidade); // %[^\n] permite ler strings com espaços
printf("Informe o número da população: ");
scanf("%d", &populacao);
printf("Informe a área da cidade em km²: ");
scanf("%f", &area);
printf("Informe o PIB da cidade: ");
scanf("%f", &pib);
printf("Informe o número de pontos turisticos: ");
scanf("%d", &turismo);
printf("\n");  // pula uma linha

printf("-----------Carta 2-----------\n\n"); //segunda carta

printf("Escolha uma letra para o Estado(A a H): ");
scanf(" %c", &estado2);
printf("Escolha o código de uma carta(ex: B02): ");
scanf("%s", &codigocarta2);
printf("Informe o nome da cidade: ");
scanf(" %[^\n]", cidade2); // %[^\n] permite ler strings com espaços
printf("Informe o número da população: ");
scanf("%d", &populacao2);
printf("Informe a área da cidade em km²: ");
scanf("%f", &area2);
printf("Informe o PIB da cidade: ");
scanf("%f", &pib2);
printf("Informe o número de pontos turisticos ");
scanf("%d", &turismo2);
printf("\n");  // pula uma linha

//Dados impressos

printf("Sua carta 1: \n\n"); //Descrição da primeira carta
printf("Estado: %c\n", estado);
printf("Código da carta: %s\n", codigocarta);
printf("Nome da cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área (em km²): %.2f\n", area);
printf("PIB: %.2f bilhões de reaisb\n", pib);
printf("Número de Pontos Túristicos: %d\n", turismo);
printf("Densidade populacional: %.2f hab/km²\n", populacao / area); //Densidade populacional
printf("PIB per Capita: %.2f reais\n\n", pib * 1000000000 / populacao); //PIB per Capita digitado em bilhões

printf("Sua carta 2: \n\n"); //Descrição da segunda carta
printf("Estado: %c\n", estado2);
printf("Código da carta: %s\n", codigocarta2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área (em km²): %.2f\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Túristicos: %d\n", turismo2);
printf("Densidade populacional: %.2f hab/km²\n", populacao2 / area2); //Densidade populacional
printf("PIB per Capita: %.2f reais\n\n", pib2 * 1000000000 / populacao2); //PIB per Capita digitado em bilhões

printf("Obrigado!\n");  // Terminado.

    return 0;
}