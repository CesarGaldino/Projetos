#include<stdio.h>

int main(){
int i = 1;
int j = 1;

printf("## Desafio Movimentado as Peças do Xadres ##\n");
printf(" Bispo : \n");
//Bispo mover 5 casas na diagonal Direita(Cima , Direita).
do{
    printf("%d Cima\n", i);
    printf("%d Direita\n", i);
    i++;
} while (i <= 5);

printf(" Rainha : \n");
//Rainha mover 8 casas para esquerda.
while (j <= 8)
{
    printf("%d Esquerda\n", j);
    j++;
}

printf(" Torre : \n");
//Torre mover 5 Casas para Direita.
for (int i = 1; i <= 5; i++)
{
    printf("%d Direita\n", i);
}


//Cavalo mover baixo,  esquerda

    printf("Cavalo : \n");

    for (int i = 0; i <= 0; i++){
       for ( int j = 1; j <= 2; j++){
        printf("Baixo\n");
       }
       printf("Esquerda\n");
       }
        

            
   

    







 
 
 

   
    
    
    
    
 







    return 0;
}