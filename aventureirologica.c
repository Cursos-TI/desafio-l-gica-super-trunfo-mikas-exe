#include <stdio.h>

int main() {

    int opcao;
    int atributo;
    int regras;

    char carta[50];
    char estado1[50];
    char codigo_carta1[50];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

   char carta2[50];
   char estado2[50];
   char codigo_carta2[50];
   char nome_cidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;
   float densidade_populacional2;
   float pib_per_capita2;
   float super_poder2;
   


    printf("digite a carta de 1 a 10:\n");
    fgets(carta, 50, stdin);

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

    pib_per_capita1 =  pib1 / populacao1;
    densidade_populacional1 = populacao1 / area1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 +densidade_populacional1;
    getchar();

    printf("digite a carta de 1 a 10:\n");
    fgets(carta2, 50, stdin);


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

    pib_per_capita2 = pib2 / populacao2;
    densidade_populacional2 = populacao2 / area2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 +densidade_populacional2;
    
printf("\n");


printf("****cadastro de carta**** \n");

    printf("carta: %s\n", carta);
    printf("Nome do estado: %s", estado1);
    printf("Codigo da carta: %s", codigo_carta1);
    printf("Nome da cidade: %s", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km²\n", area1);
    printf("Pib: %f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("pib per capita: %.2f reais\n",pib_per_capita1);
    printf("densidade populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("super poder: %.2f pontos\n", super_poder1);

printf("\n");

    printf("carta: %s\n", carta2);
    printf("Nome do estado: %s", estado2);
    printf("Codigo da carta: %s", codigo_carta2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("Pib: %f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("pib per capita: %.2f reais\n",pib_per_capita2);
    printf("densidade populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("super poder:%.2f pontos \n", super_poder2);

    printf("\n");

    printf("\n");

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
        printf("***batalha de atributos***\n");
        printf("1.população\n");
        printf("2. área\n");
        printf("3. PIB\n");
        printf("4. numero de pontos turisticos\n");
        printf("5. desidade populacional\n");
        printf("escolha uma opção:");
        scanf("%d", &atributo);

        switch(atributo)
    {
        case 1:
        if(populacao1 == populacao2){
            printf(" empate \n");
    
        }else if( populacao1 > populacao2)
        {
            printf("com a população de %d carta vencedora: %s\n", populacao1, carta);
        }else{
            printf("com a populção de %d carta vencedora: %s\n", populacao2, carta2 );
        }
        break;

        case 2:
        if(area1 == area2){
            printf("empate\n");
        }else if(area1 > area2)
        {
            printf("com a área de %f km² carta vencedora:%s\n", area1, carta);
        }else{
            printf("com a área de %f km² carta vencedora:%s\n", area2, carta2);
        }
        break; 

        case 3:
        if(pib1 == pib2){
            printf("empate\n");
        }else if(pib1 > pib2)
        {
            printf("com o PIB de %f bilhoes de reais carta vencedora:%s\n", pib1, carta);
        }else{
            printf("com o PIB de %f bilhoes de reais carta vencedora:%s\n", pib2, carta2);
        }
        break;

        case 4:
        if(pontos_turisticos1 == pontos_turisticos2){
            printf("empate\n");
        }else if(pontos_turisticos1 > pontos_turisticos2)
        {
            printf("com o  número de %d  pontos turisticos carta vencedora:%s\n", pontos_turisticos1, carta);
        }else{
            printf("com o  número de %d  pontos turisticos carta vencedora:%s\n", pontos_turisticos2, carta2);
        }
        break;

        case 5:
        if(densidade_populacional1 == densidade_populacional2){
            printf("empate\n");
        }else if(densidade_populacional1 > densidade_populacional2)
        {
            printf("com a densidade populacional de %f hab/km² carta vencedora:%s\n", area1, carta);
        }else{
            printf("com a densidade populacional de %f hab/km² carta vencedora:%s\n", area2, carta2);
        }
        break;
    }
    break;

        case 2:
        printf("difite a opção relacionada as regras do jogo\n");
         scanf("%d", &regras);
        switch(regras)
{
         case 1:
         printf("regra 1: compare os atributos da cartas");
         break;
         case 2:
         printf("regra 2: so e possivel comparar atributos da mesma categoria, ex: area x area, população x população");
         break;
         default:
         printf("menu pricipal\n");
         break;
}
break;

         case 3:
         printf("3. vc esta saindo do jogo\n");
         break;
         default:
         printf("opção invalida\n");
         break;