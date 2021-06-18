// Solicite ao usuário 5 números inteiros e armazene esses números em um array. Exiba o array preenchido.

#include <stdio.h>

int main(){

    int numero [5], cont = 0;

    for(int i=0; i<5; i++){
        scanf("%d", &numero[i]);
    }
    for(int i=0; i<5; i++){
        cont++;
        printf("O %d numero digitado foi: %d\n", cont, numero[i]);
    }

    return 0;
}