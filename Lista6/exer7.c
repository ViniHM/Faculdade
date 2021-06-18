/* Preencha um array com 10 valores informados pelo usuário, calcule e mostre 
o somatório dos elementos armazenados em posições de índices pares do array.*/

#include <stdio.h>

int main(){

    int numero[10], soma=0;

    printf("Digite uma sequencia de 10 numeros !\n");
    for(int i=0; i<10; i++){
        scanf("%d", &numero[i]);

    if(i%2 == 0){
        soma = soma + numero[i];
    }
    }

    

    printf("A somatoria dos numeros: %d", soma);




    return 0;
}