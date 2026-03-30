#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigoDaCarta1[50], nomeDaCidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1, densidadePopulacional1, pibPerCapita1;

  printf("Carta 1\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Código: ");
  scanf(" %s", codigoDaCarta1);

  getchar();
  printf("Nome da cidade: ");
  fgets(nomeDaCidade1, 50, stdin);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  char estado2, codigoDaCarta2[50], nomeDaCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2, densidadePopulacional2, pibPerCapita2;

  // Área para exibição dos dados da cidade
  printf("\nCarta 2\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Código: ");
  scanf(" %s", codigoDaCarta2);

  getchar();
  printf("Nome da cidade: ");
  fgets(nomeDaCidade2, 50, stdin);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da densidade populacional e PIB per capita
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Escolha dos atributos
  int atributo1, atributo2;

  printf("\nEscolha o PRIMEIRO atributo:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  scanf("%d", &atributo1);

  printf("\nEscolha o SEGUNDO atributo:\n");

  switch (atributo1) {
    case 1:
      printf("2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
      break;
    case 2:
      printf("1 - População\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
      break;
    case 3:
      printf("1 - População\n2 - Área\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
      break;
    case 4:
      printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade demográfica\n");
      break;
    case 5:
      printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
      break;
  }

  scanf("%d", &atributo2);

  if (atributo1 == atributo2) {
    printf("Erro: não é permitido escolher o mesmo atributo duas vezes.\n");
    return 0;
  }

  float valor1Carta1, valor1Carta2;
  float valor2Carta1, valor2Carta2;

  // Atributo 1
  switch (atributo1) {
    case 1:
      valor1Carta1 = populacao1;
      valor1Carta2 = populacao2;
      printf("\nAtributo 1: População\n");
      break;
    case 2:
      valor1Carta1 = area1;
      valor1Carta2 = area2;
      printf("\nAtributo 1: Área\n");
      break;
    case 3:
      valor1Carta1 = pib1;
      valor1Carta2 = pib2;
      printf("\nAtributo 1: PIB\n");
      break;
    case 4:
      valor1Carta1 = pontosTuristicos1;
      valor1Carta2 = pontosTuristicos2;
      printf("\nAtributo 1: Pontos turísticos\n");
      break;
    case 5:
      valor1Carta1 = densidadePopulacional1;
      valor1Carta2 = densidadePopulacional2;
      printf("\nAtributo 1: Densidade demográfica\n");
      break;
  }

  // Atributo 2
  switch (atributo2) {
    case 1:
      valor2Carta1 = populacao1;
      valor2Carta2 = populacao2;
      printf("Atributo 2: População\n");
      break;
    case 2:
      valor2Carta1 = area1;
      valor2Carta2 = area2;
      printf("Atributo 2: Área\n");
      break;
    case 3:
      valor2Carta1 = pib1;
      valor2Carta2 = pib2;
      printf("Atributo 2: PIB\n");
      break;
    case 4:
      valor2Carta1 = pontosTuristicos1;
      valor2Carta2 = pontosTuristicos2;
      printf("Atributo 2: Pontos turísticos\n");
      break;
    case 5:
      valor2Carta1 = densidadePopulacional1;
      valor2Carta2 = densidadePopulacional2;
      printf("Atributo 2: Densidade demográfica\n");
      break;
  }

  // Regra especial (densidade: menor vence)
  if (atributo1 == 5) {
    valor1Carta1 = 1 / valor1Carta1;
    valor1Carta2 = 1 / valor1Carta2;
  }
  if (atributo2 == 5) {
    valor2Carta1 = 1 / valor2Carta1;
    valor2Carta2 = 1 / valor2Carta2;
  }

  // Soma
  float somaCarta1 = valor1Carta1 + valor2Carta1;
  float somaCarta2 = valor1Carta2 + valor2Carta2;

  // Resultado
  printf("\nRESULTADO\n");

  printf("\nCarta 1 (%s):\n", nomeDaCidade1);
  printf("Atributo 1: %.2f\n", valor1Carta1);
  printf("Atributo 2: %.2f\n", valor2Carta1);
  printf("Soma: %.2f\n", somaCarta1);

  printf("\nCarta 2 (%s):\n", nomeDaCidade2);
  printf("Atributo 1: %.2f\n", valor1Carta2);
  printf("Atributo 2: %.2f\n", valor2Carta2);
  printf("Soma: %.2f\n", somaCarta2);

  if (somaCarta1 > somaCarta2) {
    printf("\nA carta 1 venceu!\n");
  } 
  else if (somaCarta2 > somaCarta1) {
    printf("\nA carta 2 venceu!\n");
  } 
  else {
    printf("\nEmpate!\n");
  }

  return 0;
}