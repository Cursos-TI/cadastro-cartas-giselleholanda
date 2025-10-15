#include <stdio.h>
#define BILHAO 1000000000

int main() {

printf("Desafio Super Trunfo: Lógica do Jogo - Nível Novato.\n");

printf("\n");

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
        "Ceará",         // estado
        "A01",           // codigocarta
        "Fortaleza",     // cidade
        2570000,         // populacao
        312.35,          // area
        73.00,           // pib
        55               // pontosturisticos
    };

    struct Carta carta2 = {
        "Pernambuco",
        "B01",
        "Recife",
        1589000,
        218.84,
        55.00,
        50
    };

    //struct Carta carta1 = {"Ceará", "A01", "Fortaleza", 2570000, 312.35, 73.00, 55};
    //struct Carta carta2 = {"Pernambuco", "B01", "Recife", 1589000, 218.84, 55.00, 50};

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

    // Comparação de Super Poder

    printf("Comparação de Super Poder:\n");
    printf("Super Poder Carta 01: %.2f\n", carta1.superpoder);
    printf("Super Poder Carta 02: %.2f\n", carta2.superpoder);

    if (carta1.superpoder > carta2.superpoder) {
        printf("Carta 01 é mais poderosa que Carta 02.\n");
    } else{
        printf("Carta 02 é mais poderosa que Carta 01.\n");
    } 

    return 0;
}
