#include <stdio.h>
 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("Desafio Super Trunfo: Nível Novato.\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades.
  
  char estado1[50];
  char codigocarta1[50];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  char estado2[50];
  char codigocarta2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  
  // Área para entrada de dados.
  /* Dados das cartas:
    
    Carta 01
    Estado A: Ceará
    Código da carta: A01
    Cidade: Fortaleza
    População: 2.570.000(estimativa a partir do Censo 2022)
    Área em Km²:312.35
    PIB em bilhões de reais: 73.00
    Ponto turísticos: 55

    Carta 02
    Estado B: Pernambuco
    Código da carta: B01
    Cidade: Recife
    População: 1.589.000(estimativa a partir do Censo 2022)
    Área em Km²: 218.84
    PIB em bilhões de reais: 55.00
    Ponto turísticos: 50 */

    printf("Carta 01.\n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1); 
    
    printf("\n");  
    
    printf("Carta 02.\n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);    
    
    printf("\n");
   
  // Área para exibição dos dados da cidade

    printf("Carta 01.\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em Km²: %f\n", area1);
    printf("PIB em bilhões de reais: %f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos1);

    printf("\n");

    printf("Carta 02.\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %f\n", area2);
    printf("PIB em bilhões de reais: %f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);

    printf("\n");


    return 0;

} 
