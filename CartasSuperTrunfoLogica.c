#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BILHAO 1000000000

int main() {
    char jogarNovamente;
    int escolhaAtributo;

    do {
        printf("Desafio Super Trunfo: Lógica do Jogo - Nível Aventureiro.\n\n");

        struct Carta {
            char estado[50];
            char codigocarta[50];
            char cidade[50];
            unsigned long int populacao;
            float area;
            float pib;
            int pontosturisticos;
            float densidadepopulacional;
            float pibpercapita;
            float superpoder;
        };

        struct Carta carta1 = {
            "Ceará", "A01", "Fortaleza", 2570000, 312.35, 73.00, 55
        };

        struct Carta carta2 = {
            "Pernambuco", "B01", "Recife", 1589000, 218.84, 55.00, 50
        };

        // Cálculos automáticos
        carta1.densidadepopulacional = carta1.populacao / carta1.area;
        carta1.pibpercapita = (carta1.pib * BILHAO) / carta1.populacao;
        carta1.superpoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosturisticos +
                            (1 / carta1.densidadepopulacional) + carta1.pibpercapita;

        carta2.densidadepopulacional = carta2.populacao / carta2.area;
        carta2.pibpercapita = (carta2.pib * BILHAO) / carta2.populacao;
        carta2.superpoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosturisticos +
                            (1 / carta2.densidadepopulacional) + carta2.pibpercapita;

        // Exibição
        printf("Carta 01 - %s:\n", carta1.cidade);
        printf("Estado: %s\n", carta1.estado);
        printf("Código: %s\n", carta1.codigocarta);
        printf("População: %lu\n", carta1.populacao);
        printf("Área: %.2f km²\n", carta1.area);
        printf("PIB: R$ %.2f bilhões\n", carta1.pib);
        printf("Pontos turísticos: %d\n", carta1.pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadepopulacional);
        printf("PIB per capita: R$ %.2f\n", carta1.pibpercapita);
        printf("Super Poder: %.2f\n\n", carta1.superpoder);

        printf("Carta 02 - %s:\n", carta2.cidade);
        printf("Estado: %s\n", carta2.estado);
        printf("Código: %s\n", carta2.codigocarta);
        printf("População: %lu\n", carta2.populacao);
        printf("Área: %.2f km²\n", carta2.area);
        printf("PIB: R$ %.2f bilhões\n", carta2.pib);
        printf("Pontos turísticos: %d\n", carta2.pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadepopulacional);
        printf("PIB per capita: R$ %.2f\n", carta2.pibpercapita);
        printf("Super Poder: %.2f\n\n", carta2.superpoder);

        // Comparação dos Atributos              

        printf("Escolha um atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");
        printf("Digite o número do atributo: ");
        scanf("%d", &escolhaAtributo);

        printf("\nVocê escolheu comparar: ");

        switch (escolhaAtributo) {
            case 1:
                printf("População\n");
                if (carta1.populacao > carta2.populacao)
                    printf("Fortaleza venceu!\n");
                else if (carta1.populacao < carta2.populacao)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 2:
                printf("Área\n");
                if (carta1.area > carta2.area)
                    printf("Fortaleza venceu!\n");
                else if (carta1.area < carta2.area)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 3:
                printf("PIB\n");
                if (carta1.pib > carta2.pib)
                    printf("Fortaleza venceu!\n");
                else if (carta1.pib < carta2.pib)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 4:
                printf("Pontos turísticos\n");
                if (carta1.pontosturisticos > carta2.pontosturisticos)
                    printf("Fortaleza venceu!\n");
                else if (carta1.pontosturisticos < carta2.pontosturisticos)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 5:
                printf("Densidade populacional\n");
                if (carta1.densidadepopulacional < carta2.densidadepopulacional)
                    printf("Fortaleza venceu!\n");
                else if (carta1.densidadepopulacional > carta2.densidadepopulacional)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 6:
                printf("PIB per capita\n");
                if (carta1.pibpercapita > carta2.pibpercapita)
                    printf("Fortaleza venceu!\n");
                else if (carta1.pibpercapita < carta2.pibpercapita)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 7:
                printf("Super Poder\n");
                if (carta1.superpoder > carta2.superpoder)
                    printf("Fortaleza venceu!\n");
                else if (carta1.superpoder < carta2.superpoder)
                    printf("Recife venceu!\n");
                else
                    printf("Empate!\n");
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
