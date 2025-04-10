#include <stdio.h>

    int main(){

// variáveis para carta 1
    char estado1[30], codigo1[10], cidade1[30];
    int populacao1, pontostur1;
    float area1, pib1; 

//variáveis para carta 2
    char estado2[30], codigo2[10], cidade2[30];
    int populacao2, pontostur2;
    float area2, pib2;

    printf("Bem-vindos ao Super Trunfo! O jogo de cartas onde você irá se divertir e aprender jogando!\n");
    printf("\nVamos começar com a carta 1!\n");

    printf("\nDigite o nome do primeiro estado:\n");
    scanf("%s", estado1);

    printf("Digite a primeira letra do estado e 01: \n");
    scanf("%s", codigo1);

//queria um codigo onde fosse possivel já ler o primeiro caracter do nome do estado que foi dado e adicionado 01,
//de forma automatica, sem necessidade de digitar, mas iria fugir do roteiro.

    printf("Digite o nome da cidade deste estado: \n" );
    scanf("%s", cidade1);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em Km²: \n");
    scanf("%f",&area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontostur1);

//exibindo a carta1
    printf("\n--- Carta 1 ---\n");
    printf("\nEstado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);

    printf("\nAgora vamos para a carta 2!\n");

    printf("\nDigite o nome do segundo estado:\n");
    scanf("%s", estado2);

    printf("Digite a primeira letra do estado e 02: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade deste estado: \n" );
    scanf("%s", cidade2);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: \n");
    scanf("%f",&area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontostur2);

  // exibindo a carta 2
    printf("\n--- Carta 2 ---\n");
    printf("\nEstado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);

    return 0;

    }