/*Faça um algoritmo que solicita ao usuário três números e exibe na tela apenas o menor deles 
(considere que o usuário irá digitar três números diferentes)
*/
#include <stdio.h>

int main(){

    int a, b, c;
    printf("Digite 3 numeros !!\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c){
        printf("o menor numero digitado foi: %d\n", a);
    }
    else if(b<a && b<c){
        printf("o menor numero digitado foi: %d\n", b);
    }
    else{
        printf("o menor numero digitado foi: %d\n", c);
    }

    
    return 0;
}