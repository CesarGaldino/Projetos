#include<stdio.h>

int main(){

int opcao;
float nota1, nota2, media;

// Exibição do Menu
printf("### Menu de Gerenciamento dos Estudantes ###\n");
printf("1. Calcular a Média\n");
printf("2. Determinar Status\n");
printf("3. Sair\n");
printf("Escolha uma opção:\n");
scanf( "%d",&opcao);

switch (opcao)
{
case 1:
//Entrada de Notas.
printf("Digite a primeira nota: \n");
scanf(" %.2f",&nota1);
printf("Digite a segunda nota: \n");
scanf(" %.2f",&nota2);
//Calculo da Média.
media = (nota1 + nota2) / 2;
printf("A nota do Estudante é : %.2f\n",media);
break;
case 2:
//Determinação do status com base na media.
printf("Digite a média do estudante : ");
scanf("%.2f",&media);
if (media >= 7.0)
{
    printf("Status: APROVADO\n");
}else if (media >=5)
{
    printf("Statud : RECUPERAÇAO\n");
}else
{
    printf("Status: REPROVADO\n");
}
break;
case 3:
{
    printf("SAINDO ...\n");
}
break;
default:
{
    printf("*** OPÇAO INVALIDA ***");
}
    break;
}


    return 0;
}