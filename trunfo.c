#include <stdio.h>

int main() {

 // declaração das variáveis para as duas cartas
   char estado1, estado2 [50];
   char codigo1, codigo2[50];
   char cidade1, cidade2[50];
   int populacao1, populacao2;
   float area1, area2;
   float PIB1, PIB2;
   int turisticos1, turisticos2;
   int escolha;


 //entrada de dados
 printf("Desafio Super Tunfo- Países\n");
 printf("Olá, seja bem vindo!\n");
 printf("Escolha sua carta, carta1 ou carta2\n");
 printf("digite carta1 ou carta2 \n");
 scanf("&carta1\n");
 scanf("&carta2\n");


 //cadastro da primeira carta 

 printf("\nCARTA 1:\n");
 printf("Estado:A\n");
 scanf("%d", &estado1);
 printf("Código da carta: A01\n");
 scanf("%d", &codigo1);
 printf("Nome da cidade:São Luís\n");
 scanf("%d", &cidade1);
 printf("População:34316000 de pessoas\n");
 scanf("%d", &populacao1);
 printf("Área:658190,05 km²\n");
 scanf("%e", &area1);
 printf("PIB1:2009753.89 R$\n");
 scanf("%2f", &PIB1); //para a primeira carta
 printf("Pontos turísticos:67 \n");
 scanf("%d\n", &turisticos1);

 //Cadastro da segunda carta
 printf("\nCARTA 2:\n");
 printf("Estado:B\n");
 scanf("%d", &estado2);
 printf("Código da carta:B02\n" );
 scanf("%d", &codigo2);
 printf("Nome da cidade:Rio Branco\n");
 scanf("%d", &cidade2);
 printf("População: 5168009 de pessoas\n" );
 scanf("%d", populacao2);
 printf("Área: 4329003,62 km²\n" );
 scanf("%e", &area2);
 printf("PIB2:8400432.2 R$\n");
 scanf("%2f", &PIB2); //para a segunda carta
 printf("Pontos turísticos:43\n" );
 scanf("%s", &turisticos2);
//variáveis calculadas
   float densidade1, densidade2;
   float PIBpercapital1, PIBpercapital2;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float PIBpercapita1 = (PIB1 * 1000000) / populacao1;
    float PIBpercapita2 = (PIB2 * 1000000) / populacao2;

    // Exibição dos resultados
    printf("=== Resultados das Cartas ===\n\n");

    printf("Carta 1 - São Luís:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", PIBpercapita1);

    printf("Carta 2 - Rio Branco:\n");
    printf("Densidade populacional: Carta 1 (São Luís) vence!\n");
    printf("Densidade populacional: Empate.\n");
    rintf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", PIBpercapita2);

    // Comparações
    printf("=== Comparações ===\n");

    i

    if (PIBpercapita1 > PIBpercapita2) {
        printf("PIB per capita: Carta 1 (São Luís) vence!\n");
    } else if (PIBpercapita2 > PIBpercapita1) {
        printf("PIB per capita: Carta 2 (Rio Branco) vence!\n");
    } else {
        printf("PIB per capita: Empate.\n");
    }

    return 0;
}
