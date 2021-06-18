/*Escreva um algoritmo que leia 5 números e informe o somatório dos números ímpares*/

#include <stdio.h>

int main(){

    int soma=0, vet[5];

    for(int i=0; i<5; i++){
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<5; i++){
        if(vet[i]%2 != 0){
            soma = soma + vet[i];
        }
    }
    printf("A soma dos numeros impares eh: %d\n", soma);








    return 0;
}