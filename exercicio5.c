

/*Escreva um programa que calcule a media dos números digitados pelo usuário, se eles forem pares.
O programa deve terminar a leitura se o usuário digitar zero.*/


#include <stdio.h>



int main(){
    int i = 0, input, somaPar = 0;
    float mediaPar = 0;

    do{
        printf("Digite um numero e use 0 para encerrar o programa: ");
        scanf("%d", &input); 
    if(input%2 == 0 && input!=0){
            somaPar += input;
            i++;    
        }
    }while (input!=0);
    mediaPar = somaPar/i;
    printf("Media: %.2f", mediaPar);
    return 0;
}