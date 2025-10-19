#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BILHAO 1000000000

int main() {
    char jogarNovamente;
    int pontosturisticos1, pontosturisticos2, primeiroAtributo, segundoAtributo, resultado1, resultado2;
    char estado1[50], codigocarta1[50], cidade1[50], estado2[50], codigocarta2[50], cidade2[50];        
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2,
                  pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    
    strcpy(estado1, "Ceará");
    strcpy(codigocarta1, "A01");
    strcpy(cidade1, "Fortaleza");
    strcpy(estado2, "Pernambuco");
    strcpy(codigocarta2, "B01");
    strcpy(cidade2, "Recife");
          
    do {
        printf("Desafio Super Trunfo: Lógica do Jogo - Nível Mestre.\n\n");         
            
        // Geração dos atributos das cartas

        srand(time(NULL));               
        populacao1 = rand() % 100000000 + 10000;
        populacao2 = rand() % 100000000 + 10000;
        area1 = (float)(rand() % 150000 + 1000);
        area2 = (float)(rand() % 150000 + 1000);
        pib1 = (float)(rand() % 500 + 10);
        pib2 = (float)(rand() % 500 + 10);
        pontosturisticos1 = rand() % 100 + 1;
        pontosturisticos2 = rand() % 100 + 1;    
        densidadepopulacional1 = populacao1 / area1;
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita1 = (pib1 * BILHAO) / populacao1;
        pibpercapita2 = (pib2 * BILHAO) / populacao2;
        superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + (1 / densidadepopulacional1) + pibpercapita1;
        superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1 / densidadepopulacional2) + pibpercapita2;
                        
        // Início do Jogo 
        
        printf("Bem-vindo ao jogo!\n");
        printf("Entre com o número de DOIS(2) atributos que deseja comparar entre as duas cartas:\n");              
        
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");

        printf("Digite o número do atributo: ");
        scanf("%d", &primeiroAtributo);    

        switch (primeiroAtributo) {
            case 1:
                printf("Você escolheu: População.\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;                
                break;
            case 2:
                printf("Você escolheu: Área.\n");
                resultado1 = area1 > area2 ? 1 : 0;                
                break;
            case 3:
                printf("Você escolheu: PIB.\n");
                resultado1 = pib1 > pib2 ? 1 : 0;                
                break;
            case 4:
                printf("Você escolheu: Pontos turísticos.\n");
                resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;                
                break;
            case 5:
                printf("Você escolheu: Densidade populacional.\n");
                resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;                              
                break;
            case 6:
                printf("Você escolheu: PIB per capita.\n");
                resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;               
                break;
            case 7:
                printf("Você escolheu: Super Poder.\n");
                resultado1 = superpoder1 > superpoder2 ? 1 : 0;                
                break;
            default:
                printf("Atributo inválido!\n");
                break;
        }
        printf("\n");

        printf("Escolha o segundo atributo para comparar:\n");
        printf("1. População.\n");   
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Super Poder.\n");

        printf("Digite o número do atributo: ");
        scanf("%d", &segundoAtributo);

        if (segundoAtributo == primeiroAtributo)
        {
            printf("Você já escolheu esse atributo! Escolha outro.\n");
            continue;
        } else {
            switch (segundoAtributo) {
            case 1:
                printf("Você escolheu: População.\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;                
                break;
            case 2:
                printf("Você escolheu: Área.\n");
                resultado2 = area1 > area2 ? 1 : 0;                
                break;
            case 3:
                printf("Você escolheu: PIB.\n");
                resultado2 = pib1 > pib2 ? 1 : 0;                
                break;
            case 4:
                printf("Você escolheu: Pontos turísticos.\n");
                resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;                
                break;
            case 5:
                printf("Você escolheu: Densidade populacional.\n");
                resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;                              
                break;
            case 6:
                printf("Você escolheu: PIB per capita.\n");
                resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;               
                break;
            case 7:
                printf("Você escolheu: Super Poder.\n");
                resultado2 = superpoder1 > superpoder2 ? 1 : 0;                
                break;
            default:
                printf("Atributo inválido!\n");
                break;
        }        

    // Exibição clara do resultado

    printf("\n🔍 Resultado da Comparação:\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n\n", cidade2, estado2);

    // Mostrar os dois atributos escolhidos

    printf("Atributo 1 escolhido: ");
    switch (primeiroAtributo) {
    case 1: 
        printf("População\n"); 
        break;
    case 2: 
        printf("Área\n"); 
        break;
    case 3: 
        printf("PIB\n"); 
        break;
    case 4: 
        printf("Pontos turísticos\n"); 
        break;
    case 5: 
        printf("Densidade populacional\n"); 
        break;
    case 6: 
        printf("PIB per capita\n"); 
        break;
    case 7: 
        printf("Super Poder\n"); 
        break;
    }

    printf("Atributo 2 escolhido: ");
    switch (segundoAtributo) {
        case 1: 
            printf("População\n"); 
            break;
        case 2: 
            printf("Área\n"); 
            break;
        case 3: 
            printf("PIB\n"); 
            break;
        case 4: 
            printf("Pontos turísticos\n"); 
            break;
        case 5: 
            printf("Densidade populacional\n"); 
            break;
        case 6: 
            printf("PIB per capita\n"); 
            break;
        case 7: 
            printf("Super Poder\n"); 
            break;
    }

    // Mostrar os valores dos atributos

    printf("\n📊 Valores dos atributos:\n");

    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    switch (primeiroAtributo) {
        case 1: 
            valor1_carta1 = populacao1; valor1_carta2 = populacao2; 
            break;
        case 2: 
            valor1_carta1 = area1; valor1_carta2 = area2; 
            break;
        case 3: 
            valor1_carta1 = pib1; valor1_carta2 = pib2; 
            break;
        case 4: 
            valor1_carta1 = pontosturisticos1; valor1_carta2 = pontosturisticos2; 
            break;
        case 5: 
            valor1_carta1 = densidadepopulacional1; valor1_carta2 = densidadepopulacional2; 
            break;
        case 6: 
            valor1_carta1 = pibpercapita1; valor1_carta2 = pibpercapita2; 
            break;
        case 7: 
            valor1_carta1 = superpoder1; valor1_carta2 = superpoder2; 
            break;
    }

    switch (segundoAtributo) {
        case 1: 
            valor2_carta1 = populacao1; valor2_carta2 = populacao2; 
            break;
        case 2: 
            valor2_carta1 = area1; valor2_carta2 = area2; 
            break;
        case 3: 
            valor2_carta1 = pib1; valor2_carta2 = pib2; 
            break;
        case 4: 
            valor2_carta1 = pontosturisticos1; valor2_carta2 = pontosturisticos2; 
            break;
        case 5: 
            valor2_carta1 = densidadepopulacional1; valor2_carta2 = densidadepopulacional2; 
            break;
        case 6: 
            valor2_carta1 = pibpercapita1; valor2_carta2 = pibpercapita2; 
            break;
        case 7: 
            valor2_carta1 = superpoder1; valor2_carta2 = superpoder2; 
            break;
    }

    printf("Carta 1: %.2f e %.2f\n", valor1_carta1, valor2_carta1);
    printf("Carta 2: %.2f e %.2f\n", valor1_carta2, valor2_carta2);

    // Soma dos atributos

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n🧮 Soma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    // Resultado final

    printf("\n🏆 Resultado Final:\n");

    if (soma1 > soma2)
        printf("Carta 1 venceu a rodada!😊🎉\n");
    else if (soma2 > soma1)
        printf("Carta 2 venceu a rodada!😊🎉\n");
    else
        printf("Empate na rodada!😐\n");

    }

    // Valores dos atributos das cartas para conferência

    printf("\n📋 Valores dos atributos das cartas para conferência:\n");
    
    printf("Carta 1 - %s (%s) - %s:\n", cidade1, estado1, codigocarta1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    printf("Carta 2 - %s (%s) - %s:\n", cidade2, estado2, codigocarta2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

        
    // Pergunta para jogar novamente

    printf("\nDeseja jogar novamente? (s/n): ");
    scanf(" %c", &jogarNovamente);

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("\nObrigado por jogar!\n");
    return 0;
}
