#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
// Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado,Estado2;
    char Nomedacidade[50], Nomedacidade2[50];
    char codigocarta[10], codigocarta2[10];
    int numerodepontosturisticos, numerodepontosturisticos2;
    float area, populacao, area2, populacao2;
    double dp, ppc, dp2, ppc2;
    float superPoder, superPoder2;
    double pib, pib2;
// Área para entrada de dados
// adicionado dados da carta 1
    printf("*** Cadastrando Cartas de Cidades do Brasil ***\n");
        printf("A seguir digite os Dados da Carta 1: \n");
    printf("Digite o Estado (Um caractere,Ex: Pernambuco = P): \n");
    scanf("%c" , &Estado);

    printf("Digite o codigo da carta (ex: P01): \n");
    scanf("%s", &codigocarta  );

    printf("Digite o nome da cidade (Apenas um nome): \n");
    scanf("%s" , &Nomedacidade);

    printf("Digite número populacional da cidade(Apenas em números): \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade em km²(apenas em números): \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (Em bilhões, apenas o número): \n");
    scanf(" %lf", &pib);

    printf("Digite o número de pontos turísticos da cidade(Apenas números): \n");
    scanf(" %d", &numerodepontosturisticos);

    printf("\n...\n");
    printf("\nCarta Cadastrada Com Sucesso\n");
// adicionado dados da carta 2
printf("\n----------------------------------\n");
        printf("A seguir digite os Dados da Carta 2: \n");
    printf("Digite o Estado (Um caractere,Ex: Pernambuco = P): \n");
    scanf(" %c" , &Estado2);

    printf("Digite o codigo da carta (ex: P01): \n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade (Apenas um nome): \n");
    scanf(" %s" , &Nomedacidade2);

    printf("Digite número populacional da cidade(Apenas em números): \n");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade em km²(apenas o numeros): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões, apenas o número): \n");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos da cidade(Apenas números): \n");
    scanf("%d", &numerodepontosturisticos2);
    printf("\n...\n");
    printf("\nCarta Cadastrada Com Sucesso\n");
// cálculo dos atributos derivados
    dp = populacao / area;
    ppc = (pib * 1000000000) / populacao;
    superPoder = (float)(populacao + area + pib + numerodepontosturisticos + ppc + (1 / dp));

    dp2 = populacao2 / area2;
    ppc2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)(populacao2 + area2 + pib2 + numerodepontosturisticos2 + ppc2 + (1 / dp2));
// Área para exibição dos dados da cidade
// exibindo dados das cartas
printf("Exibindo os Dados das Cartas Cadastradas: \n");
// Dados da carta 1 e 2
    printf("\n----------------------------------\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", Estado);
    printf("Código da Carta: %s \n", codigocarta);
    printf("Nome da Cidade: %s \n", Nomedacidade);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f km²\n", area); // Adiciona "km²" automaticamente
    printf("PIB: %.2f bilhões de reais\n", pib); // Adiciona "bilhões de reais" automaticamente
    printf("Número de Pontos Turísticos: %d \n", numerodepontosturisticos);
    printf("Densidade Populacional: %.2f habitantes por km²\n", dp);
    printf("PIB per Capita: %.2f reais\n", ppc);
    printf("\n----------------------------------\n");

    printf("\n----------------------------------\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", Estado2);
    printf("Código da Carta: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", Nomedacidade2);
    printf("População: %.2f \n", populacao2);
    printf("Área: %.2f km²\n", area2); // Adiciona "km²" automaticamente
    printf("PIB: %.2f bilhões de reais\n", pib2); // Adiciona "bilhões de reais" automaticamente
    printf("Número de Pontos Turísticos: %d \n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", dp2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    printf("\n----------------------------------\n");

    printf("\n--- Comparação de Cartas (1 = Vitoria da Carta 1, 0 = Derrota/Empate) ---\n");

    // As variáveis já guardam 1 ou 0, basta imprimi-las diretamente
    int venceu_populacao = (populacao > populacao2);
    int venceu_area = (area > area2);
    int venceu_pib = (pib > pib2);
    int venceu_pontos = (numerodepontosturisticos > numerodepontosturisticos2);
    int venceu_densidade = (dp < dp2); // Regra especial: menor é melhor
    int venceu_ppc = (ppc > ppc2);
    int venceu_super_poder = (superPoder > superPoder2);

    // Usando operador ternário para decidir qual número da carta (1 ou 2) mostrar
    printf("População: Carta %d venceu (%d)\n", (venceu_populacao ? 1 : 2), venceu_populacao);
    printf("Área: Carta %d venceu (%d)\n", (venceu_area ? 1 : 2), venceu_area);
    printf("PIB: Carta %d venceu (%d)\n", (venceu_pib ? 1 : 2), venceu_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (venceu_pontos ? 1 : 2), venceu_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (venceu_densidade ? 1 : 2), venceu_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (venceu_ppc ? 1 : 2), venceu_ppc);
    printf("Super Poder: Carta %d venceu (%d)\n", (venceu_super_poder ? 1 : 2), venceu_super_poder);
    printf("----------------------------------\n");

return 0;

}