#include<stdio.h>

int main(){

 int numero;


 do
 {
    printf("Digite um numero par para sair do Programa..\n");
    scanf("%d", &numero);

    if (numero %2 == 0)
    {
      printf("Esse Número %d é Par\n", numero);

    }else
    {
      printf("Esse Número %d é Impar\n", numero);
    }
    

   
    
    
    
    
 } while (numero % 2 != 0);
 

printf("Você Digitou um numero Par, Saindo do programa ...\n");








    return 0;
}