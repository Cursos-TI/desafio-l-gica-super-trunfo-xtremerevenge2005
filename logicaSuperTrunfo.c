#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3];               // Sigla do estado (Ex: "MG", "SP") + '\0'
    char codigo1[5];               // Código da carta (Ex: "MG01") + '\0'
    char nomeCidade1[50];          // Nome da cidade (Ex: "Belo Horizonte")
    unsigned long int populacao1;  // População
    float area1;                   // Área em km²
    float pib1;                    // PIB (em bilhões de reais)
    int pontosTuristicos1;         // Número de pontos turísticos

    // Declaração de variáveis para a Carta 2
    char estado2[3];               // Sigla do estado (Ex: "SP", "BA") + '\0'
    char codigo2[5];               // Código da carta (Ex: "SP01") + '\0'
    char nomeCidade2[50];          // Nome da cidade (Ex: "São Carlos")
    unsigned long int populacao2;  // População
    float area2;                   // Área em km²
    float pib2;                    // PIB (em bilhões de reais)
    int pontosTuristicos2;         // Número de pontos turísticos

    // Variáveis para os cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    
    // Variáveis para seleção dos atributos e pontuações
    int atributo1, atributo2;
    float pontuacao1_atributo1 = 0, pontuacao2_atributo1 = 0;
    float pontuacao1_atributo2 = 0, pontuacao2_atributo2 = 0;

    // Saudações e instruções iniciais
    printf("\nBem-Vindo ao Jogo Super Trunfo de Cidades!\n\n");
    printf("----- INSTRUÇÕES -----\n\n");
    printf("1 - Insira os dados de duas cidades, que serão posteriormente exibidos.\n");
    printf("2 - Em seguida, escolha DOIS atributos numéricos para comparação.\n");
    printf("   As opções são:\n");
    printf("      1 - População\n");
    printf("      2 - Área\n");
    printf("      3 - PIB\n");
    printf("      4 - Número de pontos turísticos\n");
    printf("      5 - Densidade demográfica - será usado o inverso da densidade (1/densidade); o menor valor vence\n");
    printf("      6 - PIB per Capita\n\n");
    printf("A cidade com maior valor (exceto para a densidade demográfica) vencerá em dado atributo. A cidade com maior valor na soma dos dois atributos escolhidos vencerá a rodada.\n\n");

    // Cadastro da Carta 1:
    printf("Cadastro da Carta 1:\n");
    printf("Digite a sigla do estado (Ex: MG, SP, BA): ");
    scanf(" %2s", estado1);

    printf("Digite o código da carta (Ex: MG01): ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    // Validação de entrada para população (Carta 1)
    printf("Digite a população: ");
    while (scanf("%lu", &populacao1) != 1) {
        printf("Entrada inválida. Digite novamente a população: ");
        while(getchar() != '\n'); // limpa o buffer
    }

    // Validação de entrada para área (Carta 1)
    printf("Digite a área (em km²): ");
    while (scanf("%f", &area1) != 1) {
        printf("Entrada inválida. Digite novamente a área: ");
        while(getchar() != '\n');
    }

    // Validação de entrada para PIB (Carta 1)
    printf("Digite o PIB (em bilhões de reais): ");
    while (scanf("%f", &pib1) != 1) {
        printf("Entrada inválida. Digite novamente o PIB: ");
        while(getchar() != '\n');
    }

    // Validação de entrada para pontos turísticos (Carta 1)
    printf("Digite o número de pontos turísticos: ");
    while (scanf("%d", &pontosTuristicos1) != 1) {
        printf("Entrada inválida. Digite novamente o número de pontos turísticos: ");
        while(getchar() != '\n');
    }

    // Cadastro da Carta 2:
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a sigla do estado (Ex: MG, SP, BA): ");
    scanf(" %2s", estado2);

    printf("Digite o código da carta (Ex: SP01): ");
    scanf("%5s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    // Validação de entrada para população (Carta 2)
    printf("Digite a população: ");
    while (scanf("%lu", &populacao2) != 1) {
        printf("Entrada inválida. Digite novamente a população: ");
        while(getchar() != '\n');
    }

    // Validação de entrada para área (Carta 2)
    printf("Digite a área (em km²): ");
    while (scanf("%f", &area2) != 1) {
        printf("Entrada inválida. Digite novamente a área: ");
        while(getchar() != '\n');
    }

    // Validação de entrada para PIB (Carta 2)
    printf("Digite o PIB (em bilhões de reais): ");
    while (scanf("%f", &pib2) != 1) {
        printf("Entrada inválida. Digite novamente o PIB: ");
        while(getchar() != '\n');
    }

    // Validação de entrada para pontos turísticos (Carta 2)
    printf("Digite o número de pontos turísticos: ");
    while (scanf("%d", &pontosTuristicos2) != 1) {
        printf("Entrada inválida. Digite novamente o número de pontos turísticos: ");
        while(getchar() != '\n');
    }

    // Cálculo dos novos atributos:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    // Cálculo do PIB per Capita (convertendo PIB de bilhões para reais)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados das Cartas ---\n");

    // Exibição da Carta 1:
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

    // Exibição da Carta 2:
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

    // Seleção do primeiro atributo
    printf("\nSelecione o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Sua opção: ");
    while (scanf("%d", &atributo1) != 1 || atributo1 < 1 || atributo1 > 6) {
        printf("Entrada inválida. Digite novamente o primeiro atributo (1-6): ");
        while(getchar() != '\n');
    }

    // Seleção do segundo atributo (não exibe a opção escolhida no primeiro)
    printf("\nSelecione o SEGUNDO atributo para comparação:\n");
    if(atributo1 != 1) printf("1 - População\n");
    if(atributo1 != 2) printf("2 - Área\n");
    if(atributo1 != 3) printf("3 - PIB\n");
    if(atributo1 != 4) printf("4 - Número de pontos turísticos\n");
    if(atributo1 != 5) printf("5 - Densidade demográfica\n");
    if(atributo1 != 6) printf("6 - PIB per Capita\n");
    do {
        printf("Sua opção: ");
        while (scanf("%d", &atributo2) != 1) {
            printf("Entrada inválida. Digite novamente o segundo atributo: ");
            while(getchar() != '\n');
        }
        if(atributo2 == atributo1)
            printf("Opção inválida! O atributo já selecionado não pode ser escolhido novamente.\n");
    } while(atributo2 == atributo1);

    // Comparação para o primeiro atributo selecionado
    switch(atributo1) {
        case 1: // População
            printf("\nComparação pelo atributo: População\n");
            printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
            (populacao1 == populacao2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (populacao1 > populacao2 ? "1" : "2"),
                       (populacao1 > populacao2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo1 = (float)populacao1;
            pontuacao2_atributo1 = (float)populacao2;
            break;
        case 2: // Área
            printf("\nComparação pelo atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            (area1 == area2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (area1 > area2 ? "1" : "2"),
                       (area1 > area2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo1 = area1;
            pontuacao2_atributo1 = area2;
            break;
        case 3: // PIB
            printf("\nComparação pelo atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
            (pib1 == pib2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (pib1 > pib2 ? "1" : "2"),
                       (pib1 > pib2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo1 = pib1;
            pontuacao2_atributo1 = pib2;
            break;
        case 4: // Número de pontos turísticos
            printf("\nComparação pelo atributo: Número de pontos turísticos\n");
            printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            (pontosTuristicos1 == pontosTuristicos2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (pontosTuristicos1 > pontosTuristicos2 ? "1" : "2"),
                       (pontosTuristicos1 > pontosTuristicos2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo1 = (float)pontosTuristicos1;
            pontuacao2_atributo1 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade demográfica
            printf("\nComparação pelo atributo: Densidade Demográfica (menor vence)\n");
            printf("Carta 1 - %s (%s): %.2f hab/km² (Valor considerado = %.4f)\n", nomeCidade1, estado1, densidade1, 1/densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km² (Valor considerado = %.4f)\n", nomeCidade2, estado2, densidade2, 1/densidade2);
            (densidade1 == densidade2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (densidade1 < densidade2 ? "1" : "2"),
                       (densidade1 < densidade2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo1 = 1/densidade1;
            pontuacao2_atributo1 = 1/densidade2;
            break;
        case 6: // PIB per Capita
            printf("\nComparação pelo atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            (pibPerCapita1 == pibPerCapita2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (pibPerCapita1 > pibPerCapita2 ? "1" : "2"),
                       (pibPerCapita1 > pibPerCapita2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo1 = pibPerCapita1;
            pontuacao2_atributo1 = pibPerCapita2;
            break;
        default:
            printf("\nOpção inválida para o primeiro atributo!\n");
            return 1;
    }

    // Comparação para o segundo atributo selecionado
    switch(atributo2) {
        case 1: // População
            printf("\nComparação pelo atributo: População\n");
            printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
            (populacao1 == populacao2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (populacao1 > populacao2 ? "1" : "2"),
                       (populacao1 > populacao2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo2 = (float)populacao1;
            pontuacao2_atributo2 = (float)populacao2;
            break;
        case 2: // Área
            printf("\nComparação pelo atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            (area1 == area2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (area1 > area2 ? "1" : "2"),
                       (area1 > area2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo2 = area1;
            pontuacao2_atributo2 = area2;
            break;
        case 3: // PIB
            printf("\nComparação pelo atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
            (pib1 == pib2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (pib1 > pib2 ? "1" : "2"),
                       (pib1 > pib2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo2 = pib1;
            pontuacao2_atributo2 = pib2;
            break;
        case 4: // Número de pontos turísticos
            printf("\nComparação pelo atributo: Número de pontos turísticos\n");
            printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            (pontosTuristicos1 == pontosTuristicos2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (pontosTuristicos1 > pontosTuristicos2 ? "1" : "2"),
                       (pontosTuristicos1 > pontosTuristicos2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo2 = (float)pontosTuristicos1;
            pontuacao2_atributo2 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade demográfica
            printf("\nComparação pelo atributo: Densidade Demográfica (menor vence)\n");
            printf("Carta 1 - %s (%s): %.2f hab/km² (Valor considerado = %.4f)\n", nomeCidade1, estado1, densidade1, 1/densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km² (Valor considerado = %.4f)\n", nomeCidade2, estado2, densidade2, 1/densidade2);
            (densidade1 == densidade2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (densidade1 < densidade2 ? "1" : "2"),
                       (densidade1 < densidade2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo2 = 1/densidade1;
            pontuacao2_atributo2 = 1/densidade2;
            break;
        case 6: // PIB per Capita
            printf("\nComparação pelo atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            (pibPerCapita1 == pibPerCapita2) ?
                printf("Empate neste atributo!\n") :
                printf("Resultado: Carta %s (%s) vence neste atributo!\n",
                       (pibPerCapita1 > pibPerCapita2 ? "1" : "2"),
                       (pibPerCapita1 > pibPerCapita2 ? nomeCidade1 : nomeCidade2));
            pontuacao1_atributo2 = pibPerCapita1;
            pontuacao2_atributo2 = pibPerCapita2;
            break;
        default:
            printf("\nOpção inválida para o segundo atributo!\n");
            return 1;
    }

    // Cálculo da soma das pontuações para cada carta
    float totalCarta1 = pontuacao1_atributo1 + pontuacao1_atributo2;
    float totalCarta2 = pontuacao2_atributo1 + pontuacao2_atributo2;

    printf("\n--- Resultado Final ---\n");
    printf("Soma dos atributos para Carta 1 (%s): %.4f\n", nomeCidade1, totalCarta1);
    printf("Soma dos atributos para Carta 2 (%s): %.4f\n", nomeCidade2, totalCarta2);
    (totalCarta1 == totalCarta2) ? 
        printf("Resultado Final: Empate!\n") : 
        (totalCarta1 > totalCarta2 ? 
            printf("Resultado Final: Carta 1 (%s) é a vencedora!\n", nomeCidade1) : 
            printf("Resultado Final: Carta 2 (%s) é a vencedora!\n", nomeCidade2));

    return 0;
}
