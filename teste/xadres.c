#include<stdio.h>
//torre mover 5 casas para direita
void moverTorre(int casas){
    
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}
// movimento Rainha 8 casas para esquerda
void moverRainha(int casas){
    
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}
// movimento Bispo 5 casas na diagonal Cima Direita
void moverBispo(int casas){
    
    if (casas > 0){
        printf(" Cima \n");
        printf(" Direita \n");
        moverBispo(casas - 1);
    }
    
}
int main(){
    printf("Torre: \n");
    moverTorre(5);
    printf("\n");
    printf("Rainha: \n");
    moverRainha(8);
    printf("\n");
    printf("Bispo: \n");
    moverBispo(5);

//Cavalo mover baixo,  esquerda
printf("\n");
printf("Cavalo : \n");

for (int i = 0; i <= 0; i++){
   for ( int j = 1; j <= 2; j++){
    printf("Cima\n");
   }
   printf("Direita\n");
   }







    return 0;
}