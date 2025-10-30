#include <stdio.h>#include <string.h>

// Estrutura para armazenar as informações de uma carta
struct Carta {
    char estado[3];              // Sigla do estado (ex: SP)
    char codigo[4];              // Código da carta (ex: A01)
    char nomeCidade[30];         // Nome da cidade
    int populacao;               // População
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões
    int numPontosTuristicos;     // Número de pontos turísticos
    float densidadePopulacional; // População / Área
    float pibPerCapita;          // PIB / População
};

int main() {
    // Cadastro das duas cartas --------------------------
    struct Carta carta1, carta2;

    // Carta 1
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 750000000000.0; // PIB em reais
    carta1.numPontosTuristicos = 25;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Carta 2
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "A02");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6710000;
    carta2.area = 1182.30;
    carta2.pib = 400000000000.0; // PIB em reais
    carta2.numPontosTuristicos = 20;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Escolha do atributo para comparação ----------------
    // Altere aqui para "populacao", "area", "pib", "densidadePopulacional" ou "pibPerCapita"
    // Para este exemplo, vamos comparar o PIB.
    char atributoComparacao[] = "PIB";

    printf("=============================================\n");
    printf("Comparação de cartas (Atributo: %s)\n", atributoComparacao);
    printf("=============================================\n\n");

    // Exibição dos valores
    printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
    printf("Carta 2 - %s (%s): %.2f\n\n", carta2.nomeCidade, carta2.estado, carta2.pib);

    // Lógica de comparação -------------------------------
    // Como não estamos comparando densidade populacional,
    // vence quem tiver MAIOR valor.
    if (carta1.pib > carta2.pib) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.pib > carta1.pib) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\n=============================================\n");

    // Exemplo opcional: exibir outros cálculos
    printf("\n[Informações extras]\n");
    printf("%s - Densidade: %.2f hab/km² | PIB per capita: %.2f\n",
           carta1.nomeCidade, carta1.densidadePopulacional, carta1.pibPerCapita);
    printf("%s - Densidade: %.2f hab/km² | PIB per capita: %.2f\n",
           carta2.nomeCidade, carta2.densidadePopulacional, carta2.pibPerCapita);

    return 0;
}
