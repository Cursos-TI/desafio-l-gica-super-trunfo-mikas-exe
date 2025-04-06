#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao;
    int resultado1, resultado2, resultado3;
    int atributo1, atributo2;
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
        printf("\n");
        printf("escolha o primeiro atributo\n");
        printf("1.população\n");
        printf("2. área\n");
        printf("3. PIB\n");
        printf("4. numero de pontos turisticos\n");
        printf("5. desidade populacional\n");
        printf("escolha uma opção:");
        scanf("%d", &atributo1);

        switch(atributo1)
    {
        case 1:
        printf("voce escolheu população\n");
        resultado1= populacao1 > populacao2 ? 1:0;
        break;

        case 2:
            printf("voce escolheu área\n");
            resultado1= area1 > area2 ? 1:0;
        
            break;
        case 3:
            printf("voce escolheu PIB\n");
            resultado1= pib1 > pib2 ? 1:0;
            break;
        case 4:
            printf("voce escolheu pontos turisticos\n");
            resultado1= pontos_turisticos1 > pontos_turisticos2 ? 1:0;
            break;

        case 5:
            printf("voce escolheu densidade populacional\n");
            resultado1= densidade_populacional1<densidade_populacional2 ? 1:0;
            break;

        default:
        printf("opção invalida\n");
        break;
    }
 
        printf("***escolha o segundo atributo***\n");
        printf("1.população\n");
        printf("2. área\n");
        printf("3. PIB\n");
        printf("4. numero de pontos turisticos\n");
        printf("5. desidade populacional\n");
        printf("escolha uma opção:");
        scanf("%d", &atributo2);
    
if(atributo1==atributo2)
{
    printf("voce escolheu o mesmo atributo");
}else{
    switch(atributo2)
    { 
         case 1:
        printf("voce escolheu população\n");
        resultado2= populacao1 > populacao2 ? 1:0;
        break;

        case 2:
            printf("voce escolheu área\n");
            resultado2= area1 > area2 ? 1:0;
            break;
        case 3:
            printf("voce escolheu PIB\n");
            resultado2= pib1 > pib2 ? 1:0;
            break;
        case 4:
            printf("voce escolheu pontos turisticos\n");
            resultado2= pontos_turisticos1 > pontos_turisticos2 ? 1:0;
            break;

        case 5:
            printf("voce escolheu densidade populacional\n");
            resultado2= densidade_populacional1<densidade_populacional2 ? 1:0;
            break;

        default:
        printf("opção invalida\n");
        break;

    }
}



         if(resultado1 && resultado2)
       {
        printf("parabens a carta %s venceu coma pontuação de %d \n",carta,resultado3 );
       }else if(resultado1 != resultado2){
       printf("o jogo empatou\n");
       }else{
        printf("parabens a carta %s venceu com a pontuação de %d \n", carta2,resultado3);
       }
       
    break;



        case 2:
        printf("digite a opção relacionada as regras do jogo\n");
         scanf("%d", &regras);
        switch(regras)
{
         case 1:
         printf("regra 1: compare os atributos da cartas\n");
         break;
         case 2:
         printf("regra 2: so e possivel comparar atributos da mesma categoria, ex: area x area, população x população\n");
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

}
return 0;
}