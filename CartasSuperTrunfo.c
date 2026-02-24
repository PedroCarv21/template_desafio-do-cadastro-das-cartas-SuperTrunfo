#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, codigoDaCarta1[50], nomeDaCidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  // Área para entrada de dados
  
  printf("Estado: ");
  scanf(" %s", &estado1);
  
  printf("Código: ");
  scanf(" %s", &codigoDaCarta1);
  
  getchar();
  printf("Nome da cidade: ");
  fgets(nomeDaCidade1, 50, stdin);
  
  printf("População: ");
  scanf(" %i", &populacao1);
  
  printf("Área: ");
  scanf(" %f", &area1);
  
  printf("PIB: ");
  scanf(" %f", &pib1);
  
  printf("Número de pontos turísticos: ");
  scanf(" %i", &pontosTuristicos1);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Nome da cidade: %s", nomeDaCidade1);
  printf("População: %i\n", populacao1);
  printf("Área: %f km²\n", area1);
  printf("PIB: %f bilhões de reais.\n", pib1);
  printf("Número de pontos turísticos: %i\n", pontosTuristicos1);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado2, codigoDaCarta2[50], nomeDaCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2;
  
  // Área para entrada de dados
  printf("\nEstado: ");
  scanf(" %s", &estado2);
  
  printf("Código: ");
  scanf(" %s", &codigoDaCarta2);
  
  getchar();
  printf("Nome da cidade: ");
  fgets(nomeDaCidade2, 50, stdin);
  
  printf("População: ");
  scanf(" %i", &populacao2);
  
  printf("Área: ");
  scanf(" %f", &area2);
  
  printf("PIB: ");
  scanf(" %f", &pib2);
  
  printf("Número de pontos turísticos: ");
  scanf(" %i", &pontosTuristicos2); 

  // Área para exibição dos dados da cidade
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Nome da cidade: %s", nomeDaCidade2);
  printf("População: %i\n", populacao2);
  printf("Área: %f km²\n", area2);
  printf("PIB: %f bilhões de reais.\n", pib2);
  printf("Número de pontos turísticos: %i\n", pontosTuristicos2);
  return 0;
} 
