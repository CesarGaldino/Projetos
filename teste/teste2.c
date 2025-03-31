#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

//Gerar Número Aleatório.

srand(time(0));
numeroComputador = rand() % 100 + 1; //Número entre 1 e 100.

// Inicio do Jogo 
printf("Bem Vindo ao Jogo Maior, Menor ou Igual\n");
printf("Você deve escolher um número e o tipo de comparação\n");
printf("M. Maior \n");
printf("N. Menor\n");
printf("I. Igual\n");

printf("Escolha a Comparação: \n");
scanf(" %c", &tipoComparacao);

printf("Digite um numero (entre 1 a 100): \n");
scanf("%d", &numeroJogador);

//Exibir o número do computador.
printf("O número do computador é: %d\n", numeroComputador);

switch (tipoComparacao)
{
case 'M':
case 'm':
{
    printf("Você escolheu Maior\n");
}
    resultado = numeroJogador > numeroComputador? 1 : 0;

break;

    
case 'N':
case 'n':
{
    printf("Você escolheu Menor\n");
}
    resultado = numeroJogador < numeroComputador? 1 : 0;
              break;

              
 
case 'I':
case 'i':
{
    printf("Você escolheu Igual\n");
}
    resultado = numeroJogador == numeroComputador? 1 : 0;
              break;
            
default:
{
    printf("Opção inválida. Tente novamente.\n");
    
}
    break;
}

printf("O número do computador é: %d e o seu número é: %d\n", numeroComputador, numeroJogador);

if (resultado == 1)
{
    printf(" Parabéns , Você ganhou!\n");
}
else 
{
    printf("Infelizmente ,Você perdeu!\n");
}





return 0;



}