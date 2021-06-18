/* Solicite ao usuário 10 valores inteiros e armazene estes em um array. 
Após o programa deve exibir qual o maior elemento contido no array.*/

#include <stdio.h>

int main(){

    int numero[10], maior=0;

    for(int i=0; i<10; i++){
        scanf("%d", &numero[i]);
        if(numero[i]>maior){
            maior = numero[i];
        }
    }
    printf("O maior numero digitado foi: %d\n", maior);
    
    return 0;
}