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
    
    int opcao; // opção do menu

    // Saudações e instruções
    printf("\nBem-Vindo ao Jogo Super Trunfo de Cidades!\n\n");
    printf("----- INSTRUÇÕES -----\n\n");
    printf("1 - Você deverá inserir, em sequência, os dados de duas cidades, os quais serão, posteriormente, exibidos.\n");
    printf("2 - Após o cadastro, escolha o atributo para comparar as cartas:\n");
    printf("   1 - Nome do país (apenas para exibição, não para comparação direta)\n");
    printf("   2 - População\n");
    printf("   3 - Área\n");
    printf("   4 - PIB\n");
    printf("   5 - Número de pontos turísticos\n");
    printf("   6 - Densidade demográfica\n\n");

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
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
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
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Menu interativo para escolha do atributo de comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - Nome do país\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("7 - PIB per Capita\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);

    // Comparação utilizando switch e estruturas de decisão aninhadas
    switch(opcao) {
        case 1:
            printf("\nComparação de Cartas (Atributo: Nome do país):\n");
            printf("Carta 1 - %s (%s)\n", nomeCidade1, estado1);
            printf("Carta 2 - %s (%s)\n", nomeCidade2, estado2);
            printf("Resultado: A comparação por nome não é realizada diretamente.\n");
            break;
        case 2:
            printf("\nComparação de Cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (populacao1 < populacao2)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("\nComparação de Cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (area1 < area2)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pib1 < pib2)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("\nComparação de Cartas (Atributo: Número de pontos turísticos):\n");
            printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pontosTuristicos1 < pontosTuristicos2)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("\nComparação de Cartas (Atributo: Densidade demográfica):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
            // Para densidade, o menor valor vence
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (densidade1 > densidade2)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 7:
            printf("\nComparação de Cartas (Atributo: PIB per Capita):\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pibPerCapita1 < pibPerCapita2)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
    }

    return 0;
}
