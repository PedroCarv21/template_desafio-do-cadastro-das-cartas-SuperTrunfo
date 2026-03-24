#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, codigoDaCarta1[50], nomeDaCidade1[50];
  int populacao1, pontosTuristicos1, atributoDeComparacao;
  float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

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
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f de reais.\n", pib1);
  printf("Número de pontos turísticos: %i\n", pontosTuristicos1);
  
  // Cálculo da densidade populacional e PIB per capita
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;
  
  superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + (area1 / densidadePopulacional1) + pontosTuristicos1;
  printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional1);
  printf("PIB per capita: %.2f reais\n", pibPerCapita1);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado2, codigoDaCarta2[50], nomeDaCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

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
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f de reais.\n", pib2);
  printf("Número de pontos turísticos: %i\n", pontosTuristicos2);

  // Cálculo da densidade populacional e PIB per capita
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;
  
  superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (area2 / densidadePopulacional2) + pontosTuristicos2;
  printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional2);
  printf("PIB per capita: %.2f reais\n\n", pibPerCapita2);


  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("Escolha um dos atributos de comparação entre as cartas: ");
  scanf(" %i", &atributoDeComparacao);

  /*
  O usuário deverá escolher um dos atributos para comparar as cartas com base no número correspondente. 
  O programa deve então comparar os valores dos atributos escolhidos para as duas cartas e determinar 
  qual carta é a vencedora, ou se houve um empate. O resultado da comparação deve ser exibido na tela, 
  indicando qual carta venceu ou se houve um empate, juntamente com os valores dos atributos comparados.

  OBS.: no caso da densidade demográfica, o vencedor é a carta com o menor valor.
  */
  switch (atributoDeComparacao)
  {
    case 1:
      printf("Comparando o atributo: População\n");
      if (populacao1 > populacao2) {
        printf("Carta 1 tem população (%i) maior que carta 2 (%i). Jogador 1 vence!\n", populacao1, populacao2);
      } 
      else if (populacao1 == populacao2) {
        printf("Carta 1 e carta 2 tem a mesma população (%i). Empate!\n", populacao1);
      }
      else {
        printf("Carta 2 tem população (%i) maior que carta 1 (%i). Jogador 2 vence!\n", populacao2, populacao1);
      }
      break;
    case 2:
      printf("Comparando o atributo: Área\n");
      if (area1 > area2) {
        printf("Carta 1 tem área (%.2f) maior que carta 2 (%.2f). Jogador 1 vence!\n", area1, area2);
      } 
      else if (area1 == area2) {
        printf("Carta 1 e carta 2 tem a mesma área (%.2f). Empate!\n", area1);
      }
      else {
        printf("Carta 2 tem área (%.2f) maior que carta 1 (%.2f). Jogador 2 vence!\n", area2, area1);
      }
      break;
    case 3:
      printf("Comparando o atributo: PIB\n");

      if (pib1 > pib2) {
        printf("Carta 1 tem PIB (%.2f) maior que carta 2 (%.2f). Jogador 1 vence!\n", pib1, pib2);
      } 
      else if (pib1 == pib2) {
        printf("Carta 1 e carta 2 tem o mesmo PIB (%.2f). Empate!\n", pib1);
      }
      else {
        printf("Carta 2 tem PIB (%.2f) maior que carta 1 (%.2f). Jogador 2 vence!\n", pib2, pib1);
      }
      break;
    case 4:
      printf("Comparando o atributo: Número de pontos turísticos\n");

      if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 tem número de pontos turísticos (%i) maior que carta 2 (%i). Jogador 1 vence!\n", pontosTuristicos1, pontosTuristicos2);
      } 
      else if (pontosTuristicos1 == pontosTuristicos2) {
        printf("Carta 1 e carta 2 tem o mesmo número de pontos turísticos (%i). Empate!\n", pontosTuristicos1);
      }
      else {
        printf("Carta 2 tem número de pontos turísticos (%i) maior que carta 1 (%i). Jogador 2 vence!\n", pontosTuristicos2, pontosTuristicos1);
      }
      break;
    case 5:
      printf("Comparando o atributo: Densidade demográfica\n");
      if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 1 tem densidade demográfica (%.2f) menor que carta 2 (%.2f). Jogador 1 vence!\n", densidadePopulacional1, densidadePopulacional2);
      } 
      else if (densidadePopulacional1 == densidadePopulacional2) {
        printf("Carta 1 e carta 2 tem a mesma densidade demográfica (%.2f). Empate!\n", densidadePopulacional1);
      }
      else {
        printf("Carta 2 tem densidade demográfica (%.2f) menor que carta 1 (%.2f). Jogador 2 vence!\n", densidadePopulacional2, densidadePopulacional1);
      }
      break;
    default:
      printf("Atributo de comparação inválido. Por favor, escolha um número entre 1 e 5.\n");
      break;
  }
  return 0;
} 
