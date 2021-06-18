/* Solicita ao usuário 10 valores reais e armazene em um array. Calcule e exiba a média aritmética dos valores. 
Em seguida, exiba todos os valores digitados que estão acima da média calculada.*/

#include <stdio.h>

int main(){

    int numero[10], soma = 0;

    for(int i=0; i<10; i++){
        scanf("%d", &numero[i]);
        soma = soma + numero[i];
    }
    double media = soma / 10.0;
    printf("A media eh: %.1lf", media);

    for(int i=0; i<10; i++){
        if(numero[i] > media){
        printf("os numero acima da media eh: %d\n", numero[i]);
        }
    }




    return 0;
}