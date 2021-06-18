/* Armazene em um array todos os números inteiros do intervalo fechado de 1 a 100.
Após isso, o algoritmo deve exibir todos os valores armazenados.*/

#include <stdio.h>

int main(){

    int numero [100], contador = 1;

    for(int i=0; i<100; i++){
        numero[i] = contador++;
    }
    for(int i=0; i<100; i++){
        printf("O numero nessa posicao eh: %d\n", numero[i]);
    }



    return 0;
}