#include <stdio.h>

/*Faça um algoritmo que solicite dois números ao usuário e exiba apenas o maior deles. 
Caso eles sejam iguais exiba a mensagem “Números Iguais”.
*/

int main (){

    int x, y, maior;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if(x > y){
        maior = x;
        printf("O maior numero digitado eh: %d\n", maior);
    }
    else if(y > x){
        maior = y;
        printf("O maior numero digitado eh: %d\n", maior);
    }
    else{
        printf("Os numeros sao iguais!\n");
    }

    return 0;
}