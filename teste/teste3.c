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


//Cavalo mover baixo, baixo, esquerda

    printf("Cavalo : \n");
int movimento = 1;
    for (int i = 1; i <= 2; i++){
        while (movimento <= 2){
            printf("%d Baixo\n, %d Esquerda",i * movimento);
            movimento++;
        }
       }
        

            
   

    







 
 
 

   
    
    
    
    
 







    return 0;
}