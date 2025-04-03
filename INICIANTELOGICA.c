#include <stdio.h>

int main() {
    int carta;
    char estado1[50];
    char codigo_carta1[50];
    char nome_cidade1[50];
    long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

   int carta2;
   char estado2[50];
   char codigo_carta2[50];
   char nome_cidade2[50];
   long int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;
   float densidade_populacional2;
   float pib_per_capita2;
   float super_poder2;
   


    printf("digite a carta de 1 a 10:\n");
    scanf("%d", &carta);
    getchar();

    printf("Digite o estado: \n");
    fgets(estado1, 50, stdin);

    printf("Digite o codigo : \n");
    fgets(codigo_carta1, 50, stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade1, 50, stdin);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    
    printf("Area: \n");
    scanf("%f", &area1);
    
    printf("Pib: \n");
    scanf("%f", &pib1);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    pib_per_capita1 =  pib1 / (float) populacao1;
    densidade_populacional1 = populacao1 / area1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 +densidade_populacional1;


    printf("carta:\n");
    scanf("%d", &carta2);
    getchar(); 

    printf("Digite o estado: \n");
    fgets(estado2, 50, stdin);

    printf("Digite o codigo da carta: \n");
    fgets(codigo_carta2, 50, stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade2, 50, stdin);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    
    printf("Area: \n");
    scanf("%f", &area2);
    
    printf("Pib: \n");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    pib_per_capita2 = pib2 / (float) populacao2;
    densidade_populacional2 = populacao2 / area2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 +densidade_populacional2;
    
printf("\n");
printf("\n");

printf("****cadastro de carta**** \n");

    printf("carta: %d\n", carta);
    printf("Nome do estado: %s", estado1);
    printf("Codigo da carta: %s", codigo_carta1);
    printf("Nome da cidade: %s", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km²\n", area1);
    printf("Pib: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("pib per capita: %.2f reais\n",pib_per_capita1);
    printf("densidade populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("super poder: %.2f pontos\n", super_poder1);

printf("\n");

    printf("carta: %d\n", carta2);
    printf("Nome do estado: %s", estado2);
    printf("Codigo da carta: %s", codigo_carta2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("Pib: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("pib per capita: %.2f reais\n",pib_per_capita2);
    printf("densidade populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("super poder:%.2f pontos \n", super_poder2);

    printf("****comparativo de cartas**** \n");

    printf("\n");

    if(populacao1>populacao2){
        printf("População: carta %s venceu \n",carta);

    }else{
        
        printf("população carta %s venceu \n", carta2);

    }

    if(area1>area2){
        printf("Área: carta %s venceu \n", carta);

    }else{
        
        printf("Área: carta %s venceu \n", carta2);

    }

    if(pib1>pib2){
        printf("Pib: carta %s venceu \n", carta);

    }else{
        
        printf("Pib: carta %s venceu \n", carta2 );

    }

    if(pontos_turisticos1 >pontos_turisticos2){
        printf("Pontos turísticos: carta %s venceu \n", carta);

    }else{
        
        printf("Pontos turísticos: carta %s venceu \n", carta2 );

    }

    if(densidade_populacional1>densidade_populacional2){
        printf("Densidade Populacional: carta %s venceu \n", carta);

    }else{
        
        printf("Densidade Populacional: carta %s venceu \n", carta2 );

    }

    if(pib_per_capita1>pib_per_capita2){
        printf("Pib per capita: carta %s venceu \n", carta);

    }else{
        
        printf("pib per capita: carta %s venceu \n", carta2 );

    }

   
    if(super_poder1>super_poder2){
        printf("Super poder: carta %s venceu \n", carta);

    }else{
        
        printf("Super poder:carta %s venceu \n", carta2 );

    }

    return 0;
}
