/* Escreva um algoritmo que leia 10 números e exiba o dobro de cada número.*/

#include <stdio.h>

int main(){

    int N;
    printf("quanto numeros deseja digitar?\n");
    scanf("%d", &N);   
    int vet[N];
    printf("digite a sequencia de %d numeros\n", N);   

    for(int i=0; i<N; i++){
        scanf("%d", &vet[i]);
    }

    printf("o dobro dos numeros digitados eh:\n");    
    for(int i=0; i<N; i++){
        printf("%d, ", vet[i]*2);
    }
    return 0;
}