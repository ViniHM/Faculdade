#include <stdio.h>
#include <stdbool.h>

/*Faça um algoritmo que solicita um número inteiro e exibe uma 
mensagem indicando se ele é positivo, negativo ou zero.
*/


int main (){

    int numero;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    if(numero == 0){
        printf("O numero digitado eh neutro: 0 (zero)\n");
    }
    else if(numero < 0){
        printf("O numero digitado eh negativo: %d", numero);
    }
    else{
        printf("O numero digitado eh positivo: %d", numero);
    }

    return 0;
}