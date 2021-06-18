/*Escreva um algoritmo que leia a idade de 15 pessoas e informe a quantidade de pessoas com
idade inferior a 18 anos.*/

#include <stdio.h>

int main(){

    int soma=0, vet[15];
    printf("digite em sequencia as 15 idades\n");

    for (int i=0; i<15; i++){
        scanf("%d", &vet[i]);
    }

    for (int i=0; i<15; i++){
        if(vet[i] < 18){
            soma++;
        } 
    }  
    printf("contem %d pessoas menor de 18 anos !\n", soma);

    return 0;
}