/* escreva um algoritmo que leia 10 números e informe quantos números entre 10 e 20 foram
digitados.*/

#include <stdio.h>

int main(){

    int soma=0, vet[10];
    
    printf("digite um sequencia de 10 numeros:\n");
    for (int i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    for (int i=0; i<10; i++){
        if(vet[i] >= 10 && vet[i] <= 20){
            soma++;
        }
    }
    printf("foi digitado %d numeros entre 10 e 20 !\n", soma);

    return 0;
}