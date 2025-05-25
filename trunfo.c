#include <stdio.h>

// declaração das variáveis para as duas cartas
int main(){ 
char estado1, estado2 [50];
char codigo1, codigo2[50];
char cidade1, cidade2[50];
int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int turisticos1, turisticos2;

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
 printf("PIB1:2009753.89 Milhões de Reais\n");
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
 printf("PIB2:8400432.2 Trilhões de Reais\n");
 scanf("%2f", &PIB2); //para a segunda carta
 printf("Pontos turísticos:43\n" );
 scanf("%s", &turisticos2);

 //Se escolher a carta1 
scanf("Se escolher a primeira carta exibir= Os dados da Primeira Carta");
scanf("Carta1\n");
scanf("estado: %d\n", estado1);
scanf("codiga da carta: %d\n",codigo1);
scanf("cidade: %d\n", cidade1);
scanf("populacão: %d\n", populacao1);
scanf("area: %e\n", area1);
scanf("PIB: %2f\n", PIB1);
scanf("pontos turisticos:%s\n",turisticos1);

//se escolher a carta2 
 scanf("Se escolher a sedunda carta exibir= Os Dados da Segunda Carta");
 scanf("carta2\n"); 
 scanf("estado2:%d\n", estado2);
 scanf("codigo da carta;%d\n", codigo2);
 scanf("cidade:%d\n", cidade2);
 scanf("população:%d\n", populacao2);
 scanf("area:%e\n", area2);
 scanf("PIB: %2f\n", PIB2);
 scanf("pontos turisticos:%s\n",turisticos2);


 // final do jogo super trunfo
 scanf("final do jogo\n");
 printf("\nObrigardo por jogar!\n"); 

 return 0; 
}