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
int atributo1, atributo2;
int populacao,area,pib,pontos,densidade;
int resultado1, resultado2;
//Exibição da Carta 1
printf("** Cartas Jogo Super Trunfo ** \n");
printf("Carta 1 \n");
printf("Pais : Brasil \n");
printf("População: %d bilhões\n",populacao1); 
printf(" Area: %.2f km²\n", area1);
printf(" PIB: %.2f \n",pib1);
printf(" Pontos Turisticos: %d \n",pontos1);
printf("Densidade: %.2f \n",densidade1),
// Exibição Carta 2
printf("Carta 2 \n");
printf("Pais : Argentina \n");
printf("População: %d bilhões\n",populacao2);
printf(" Area: %.2f km²\n", area2);
printf(" PIB: %.2f \n",pib2);
printf(" Pontos Turisticos: %d \n",pontos2);
printf("Densidade: %.2f \n",densidade2);
//Gerar Numero Aleatório
srand(time(0));
populacao = 1;//rand () % 100 + 1; // Número entre 1 e 100
area = 0;//rand () % 100 + 1; // Número entre 1 e 100
pib = 1;//rand () % 100 + 1; // Número entre 1 e 100
pontos = 0;//rand () % 100 + 1; // Número entre 1 e 100

//Inicio do Jogo
printf("Seja Bem Vindo ao Jogo\n");
printf( "Escolha o Primeiro Atributo: \n");
printf(" 1. População\n");
printf(" 2. Àrea\n");
printf(" 3. PIB\n");
printf(" 4. Pontos Turísticos\n");
printf(" 5. Densidade\n");
printf(" Escolha a Comparação : \n");
scanf(" %d",&atributo1);

switch (atributo1)
{
case 1:
    printf("Você Escolheu População!\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;

    break;
case 2:
printf("Você Escolheu Àrea!\n");
resultado1 = area1 > area2 ? 1 : 0;
    break;
case 3:
printf("Você Escolheu PIB!\n");
resultado1 = pib1 > pib2 ? 1 : 0;
    break;
case 4:
printf("Você Escolheu Pontos Turisticos !\n");
resultado1 = pontos1 > pontos2 ? 1 : 0;
    break;
case 5:
printf("Você Escolheu Densidade!\n");
resultado1 = densidade1 < densidade2 ? 1 : 0;
    break;

default:
    break;
}
printf( "Escolha o Segundo Atributo: \n");
printf(" Atenção Você deve escolher um Atriubuto diferente do primeiro \n");
printf(" 1. População\n");
printf(" 2. Àrea\n");
printf(" 3. PIB\n");
printf(" 4. Pontos Turísticos\n");
printf(" 5. Densidade\n");
printf(" Escolha a Comparação : \n");
scanf("%d",&atributo2);

if (atributo1 == atributo2)
{
    printf("Você Escolheu o mesmo Atributo\n");

}
      switch (atributo2)
      {
    case 1:
        printf("Você Escolheu População!\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
    
        break;
    case 2:
    printf("Você Escolheu Àrea!\n");
    resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
    printf("Você Escolheu PIB!\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
    printf("Você Escolheu Pontos Turisticos !\n");
    resultado2 = pontos1 > pontos2 ? 1 : 0;
        break;
    case 5:
    printf("Você Escolheu Densidade!\n");
    resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;
      default:
      printf("OPÇAO INVALIDA !! \n");
        break;
      }if (resultado1 && resultado2)
        {
            printf(" Parabens Carta 1 (Brasil) Venceu !!\n");
        }else if (resultado1 != resultado2)
        {
           printf(" Houve um Empate !!\n");
        }else
        {
            printf("Carta 2 (Argentina) Venceu\n");
        }
        
    return 0;    
        
    }





 
