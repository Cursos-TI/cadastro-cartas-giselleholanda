#include <stdio.h>
 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Tema 2 - Densidade populacional e PIB per capita
// Tema 3 - Comparação entre cartas

// Autor: Giselle Holanda

/*Objetivo1: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
  Objetivo 2: No nível intermediário você deve criar as cartas representando as cidades utilizando struct, scanf para entrada de dados e printf para exibir as informações.
  Objetivo 3: No nível avançado você deve criar as cartas representando as cidades utilizando struct, funções, scanf para entrada de dados e printf para exibir as informações.*/

int main() {

  printf("Desafio Super Trunfo.\n");

  printf("\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades.
  
  char estado1[50];
  char codigocarta1[50];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidadepopulacional1;
  float pibpercapita1;
  float superpoder1;

  char estado2[50];
  char codigocarta2[50];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidadepopulacional2;
  float pibpercapita2;
  float superpoder2;

  // Área para entrada de dados.
  /* Dados das cartas:
    
    Carta 01
    Estado A: Ceará
    Código da carta: A01
    Cidade: Fortaleza
    População: 2.570.000(estimativa a partir do Censo 2022)
    Área em Km²: 312.35
    PIB em bilhões de reais: 73.00
    Ponto turísticos: 55
    Densidade populacional: hab/km²
    PIB per capita: PIB/pessoa

    Carta 02
    Estado B: Pernambuco
    Código da carta: B01
    Cidade: Recife
    População: 1.589.000(estimativa a partir do Censo 2022)
    Área em Km²: 218.84
    PIB em bilhões de reais: 55.00
    Ponto turísticos: 50 
    Densidade populacional: hab/km²  
    PIB per capita: PIB/pessoa 
    */

    printf("Carta 01.\n");

    printf("\n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1); 

  //Cálculo da densidade populacional e do PIB per capita

    densidadepopulacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidadepopulacional1);
    
    #define BILHAO 1000000000
    pibpercapita1 = (pib1 * BILHAO) / populacao1;
    printf("PIB per capita: %.2f\n", pibpercapita1);     
    
    printf("\n");  
    
    printf("Carta 02.\n");

    printf("\n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);  
    
  //Cálculo da densidade populacional e do PIB per capita

    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);

    #define BILHAO 1000000000
    pibpercapita2 = (pib2 * BILHAO) / populacao2;   
    printf("PIB per capita: %.2f\n", pibpercapita2);     
    
    printf("\n");    
   
  // Área para exibição dos dados da cidade

    printf("Carta 01.\n");

    printf("\n");

    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);

    printf("\n");

    printf("Carta 02.\n");

    printf("\n");

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);

    printf("\n");

  //Cálculo do Super Poder

    printf("Cálculo do Super Poder.\n");

    printf("\n");
    
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + (1 / densidadepopulacional1) + pibpercapita1;
    printf("Super Poder da carta 01: %.2f\n", superpoder1);

    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1 / densidadepopulacional2) + pibpercapita2;
    printf("Super Poder da carta 02: %.2f\n", superpoder2);

    printf("\n");

  // Comparação entre as cartas

    printf("Comparação entre as cartas.\n");

    printf("\n");

    //condição ? valor_se_verdadeiro : valor_se_falso;

    printf("População: %s venceu!\n",populacao1 > populacao2 ? "Carta 1(1)" : "Carta 2(0)");
    printf("Área: %s venceu!\n",area1 > area2 ? "Carta 1(1)" : "Carta 2(0)");
    printf("PIB: %s venceu!\n",pib1 > pib2 ? "Carta 1(1)" : "Carta 2(0)");
    printf("Pontos turísticos: %s venceu!\n",pontosturisticos1 > pontosturisticos2 ? "Carta 1(1)" : "Carta 2(0)");
    printf("Densidade Populacional: %s venceu!\n",densidadepopulacional1 < densidadepopulacional2 ? "Carta 1(1)" : "Carta 2(0)");
    printf("PIB per capita: %s venceu!\n",pibpercapita1 > pibpercapita2 ? "Carta 1(1)" : "Carta 2(0)");
    printf("Super Poder: %s venceu!\n",superpoder1 > superpoder2 ? "Carta 1(1)" : "Carta 2(0)");

    printf("\n");

    return 0;

} 
