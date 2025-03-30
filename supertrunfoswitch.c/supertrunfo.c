#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){


int populacao1 = 218;
int populacao2 = 45;
float area1 = 8510;
float area2 = 2780;
float pib1 = 2174;
float pib2 = 644;
int pontos1 = 50000;
int pontos2 = 20000;
float densidade1= (float) populacao1 / area1;
float densidade2= (float) populacao2 / area2;
int opcoes;

printf("** Cartas Jogo Super Trunfo ** \n");
printf("Carta 1 \n");
printf("Pais : Brasil \n");
printf("População: %d bilhões\n",populacao1);
printf(" Area: %.2f km²\n", area1);
printf(" PIB: %.2f \n",pib1);
printf(" Pontos Turisticos: %d \n",pontos1);
printf("Densidade: %.2f \n",densidade1),

printf("Carta 2 \n");
printf("Pais : Argentina \n");
printf("População: %d bilhões\n",populacao2);
printf(" Area: %.2f km²\n", area2);
printf(" PIB: %.2f \n",pib2);
printf(" Pontos Turisticos: %d \n",pontos2);
printf("Densidade: %.2f \n",densidade2);

printf("### Escolha uma das Opções : ###\n");
printf("1. População\n");
printf("2. Area\n");
printf("3. Pib\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade\n");
scanf("%d",&opcoes);

switch (opcoes)
{
case 1:
     printf("*** População Carta 1 x População Carta 2 ***\n");
     printf("População Carta 1: %d bilhões\n",populacao1);
     printf("População Carta 2: %d bilhões\n",populacao2);

     if (populacao1 > populacao2){
        printf("### Carta 1 Brasil Venceu!! ###");
    } else if (populacao1 == populacao2){
        printf("### Houve Empate!! ###");
    }else
    {
        printf("### Carta 2 Argentina Venceu ###");
    }
    break;


case 2:
     printf("*** Area Carta 1 x Area Carta 2 ***\n");
     printf(" Area Carta 1: %.2f km²\n", area1);
     printf(" Area Carta 2: %.2f km²\n", area2);

    if (area1 > area2){
        printf("### Carta 1 Brasil Venceu!! ###");
    } else if (area1 == area2){
        printf("### Houve Empate!! ###");
    }else
    {
        printf("### Carta 2 Argentina Venceu ###");
    }
     break;
case 3:
     printf("*** Pib Carta 1 x Pib Carta 2 ***\n");
     printf(" PIB Carta 1: %.2f \n",pib1);
     printf(" PIB Carta 2: %.2f \n",pib2);

     if (pib1 > pib2){
        printf("### Carta 1  Brasil Venceu!! ###");
    } else if (pib1 == pib2){
        printf("### Houve Empate!! ###");
    }else
    {
        printf("### Carta 2  Argentina Venceu ###");
    }
     break;
case 4:
     printf("*** Pontos Turisticos Carta 1 x Pontos Turisticos Carta 2 ***\n");
     printf(" Pontos Turisticos Carta 1: %d \n",pontos1);
     printf(" Pontos Turisticos Carta 2: %d \n",pontos2);

     if (pontos1 > pontos2){
        printf("### Carta 1 Brasil Venceu!! ###");
    } else if (pontos1 == pontos2){
        printf("### Houve Empate!! ###");
    }else
    {
        printf("### Carta 2 Argentina Venceu ###");
    }
    break;
    case 5:
     printf("*** Densidade Carta 1 x Densidade Carta 2 ***\n");
     printf("Densidade Carta 1: %.2f \n",densidade1);
     printf("Densidade Carta 2: %.2f \n",densidade2);

     
     if (densidade1 < densidade2){
        printf("### Carta 1 Brasil Venceu!! ###");
    } else if (densidade1 == densidade2){
        printf("### Houve Empate!! ###");
    }else
    {
        printf("### Carta 2 Argentina Venceu ###");
    }
    break;
default:
     printf("**Opção Invalida***\n");
    break;
}
 return 0;
}