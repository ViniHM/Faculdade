/* Armazene em um array os 100 primeiros números ímpares. 
Após isso, o algoritmo deve exibir todos os valores armazenados.*/

#include <stdio.h>

int main(){

    int numero[100], cont = 1;

    for(int i=0; i<100; i++){
        numero[i] = cont;
        cont = cont + 2;
    }
    for(int i=0; i<100; i++){
        printf("Vertor[%d] = %d\n", i, numero[i]);
    }
    
    return 0;
}