#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BILHAO 1000000000

int main() {
    char jogarNovamente;
    int pontosturisticos1, pontosturisticos2, primeiroAtributo, segundoAtributo, resultado1, resultado2;
    char estado1 = Ceará, codigocarta1 = A01, cidade1 = Forteleza, estado2 = Pernambuco, codigocarta2 = B01, cidade2 = Recife;        
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2,
                  pibpercapita1, pibpercapita2, superpoder1, superpoder2;
 
    do {
        printf("Desafio Super Trunfo: Lógica do Jogo - Nível Mestre.\n\n");         
            
        // Geração dos atributos das cartas

        srand(time(NULL)); 
        estado1, estado2 = rand() % 1000 + 1;        
        populacao1, populacao2 = rand() % 100000000 + 10000;
        area1, area2 = (float)(rand() % 150000 + 1000);
        pib1, pib2 = (float)(rand() % 500 + 10);
        pontosturisticos1, pontoruristicos2 = rand() % 100 + 1;    
        densidadepopulacional1 = populacao1 / area1;
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita1 = (pib1 * BILHAO) / populacao1;
        pibpercapita2 = (pib2 * BILHAO) / populacao2;
        superpoder1 = populacao1 + area1 + pib1 + pontosturistico1s + (1 / densidadepopulacional1) + pibpercapita1;
        superpoder2 = populacao2 + area2 + pib2 + pontosturistico2s + (1 / densidadepopulacional2) + pibpercapita2;
        
        //Resultado da comparação dos atributos

        populacao1 = 1;
        populacao2 = 0;
        area1 = 1;
        area2 = 0;
        pib1 = 1;
        pib2 = 0;
        pontosturisticos1 = 1;
        pontosturisticos2 = 0;
        densidadepopulacional1 = 0;
        densidadepopulacional2 = 1;
        pibpercapita1 = 1;
        pibpercapita2 = 0;
        superpoder1 = 1;
        superpoder2 = 0;    

    
        // Início do Jogo 
        
        printf("Bem-vindo ao jogo!\n");
        printf("Entre com o número de DOIS(2) atributos que deseja comparar entre as duas cartas:\n");              

        
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");

        printf("Digite o número do atributo: ");
        scanf("%d", &primeiroAtributo);    

        switch (primeiroAtributo) {
            case 1:
                printf("Você escolheu População\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;                
                break;

            case 2:
                printf("Você escolheu Área\n");
                resultado1 = area1 > area2 ? 1 : 0;                
                break;

            case 3:
                printf("Você escolheu PIB\n");
                resultado1 = pib1 > pib2 ? 1 : 0;                
                break;

            case 4:
                printf("Você escolheu Pontos turísticos\n");
                resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;                
                break;

            case 5:
                printf("Você escolheu Densidade populacional\n");
                resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;                              
                break;

            case 6:
                printf("Você escolheu PIB per capita\n");
                resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;               
                break;

            case 7:
                printf("Você escolheu Super Poder\n");
                resultado1 = superpoder1 > superpoder2 ? 1 : 0;                
                break;

            default:
                printf("Atributo inválido!\n");
                break;
        }

        printf("Escolha o segundo atributo para comparar:\n");
        printf("1. População\n");   
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");

        printf("Digite o número do atributo: ");
        scanf("%d", &segundoAtributo);

        if (segundoAtributo == primeiroAtributo)
        {
            printf("Você já escolheu esse atributo! Escolha outro.\n");
        } else {
            switch (segundoAtributo) {
            case 1:
                printf("Você escolheu População\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;                
                break;

            case 2:
                printf("Você escolheu Área\n");
                resultado2 = area1 > area2 ? 1 : 0;                
                break;

            case 3:
                printf("Você escolheu PIB\n");
                resultado2 = pib1 > pib2 ? 1 : 0;                
                break;

            case 4:
                printf("Você escolheu Pontos turísticos\n");
                resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;                
                break;

            case 5:
                printf("Você escolheu Densidade populacional\n");
                resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;                              
                break;

            case 6:
                printf("Você escolheu PIB per capita\n");
                resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;               
                break;

            case 7:
                printf("Você escolheu Super Poder\n");
                resultado2 = superpoder1 > superpoder2 ? 1 : 0;                
                break;

            default:
                printf("Atributo inválido!\n");
                break;
        }

        
        // Pergunta para jogar novamente
        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente);

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("\nObrigado por jogar!\n");
    return 0;
}
