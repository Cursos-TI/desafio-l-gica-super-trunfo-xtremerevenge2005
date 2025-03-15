#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3];               // Sigla do estado (Ex: "MG", "SP") + '\0'
    char codigo1[5];               // Código da carta (Ex: "MG01") + '\0'
    char nomeCidade1[50];          // Nome da cidade (Ex: "Belo Horizonte")
    unsigned long int populacao1;  // População (unsigned long int)
    float area1;                   // Área em km²
    float pib1;                    // PIB (em bilhões de reais)
    int pontosTuristicos1;         // Número de pontos turísticos

    // Declaração de variáveis para a Carta 2
    char estado2[3];               // Sigla do estado (Ex: "SP", "BA") + '\0'
    char codigo2[6];               // Código da carta (Ex: "SP01") + '\0'
    char nomeCidade2[50];          // Nome da cidade (Ex: "São Carlos")
    unsigned long int populacao2;  // População (unsigned long int)
    float area2;                   // Área em km²
    float pib2;                    // PIB (em bilhões de reais)
    int pontosTuristicos2;         // Número de pontos turísticos

    // Variáveis para os cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Saudações e instruções
    printf("\nBem-Vindo ao Jogo Super Trunfo de Países!\n\n");
    printf("----- INSTRUÇÕES -----\n\n");
    printf("1 - Você deverá inserir, em sequência, os dados de duas cidades, os quais serão, posteriormente, exibidos.\n");
    printf("2 - A cidade que obtiver o maior valor para o campo população vencerá.\n\n");

    // Cadastro da Carta 1:
    printf("Cadastro da Carta 1:\n");
    printf("Digite a sigla do estado (Exemplo: MG, SP, BA): ");
    scanf(" %2s", estado1); // Lê até 2 caracteres + '\0'

    printf("Digite o código da carta (Ex: MG01): ");
    scanf("%4s", codigo1);  // Lê até 4 caracteres + '\0'

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até encontrar ENTER

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2:
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a sigla do estado (Exemplo: MG, SP, BA): ");
    scanf(" %2s", estado2);

    printf("Digite o código da carta (Ex: SP01): ");
    scanf("%5s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    // Convertendo PIB de bilhões para reais e calculando o PIB per capita
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados das Cartas ---\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação das Cartas (atributo escolhido: População)
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    return 0;
}
