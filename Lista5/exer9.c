/* Faça um programa que solicita ao usuário o valor de N e calcule e exiba o valor de S na série abaixo:
a. S = 1/1 + 1/2 + 1/3 + ... + 1/N. */

#include <stdio.h>

int main(){

    double numero, soma=0.0;

    printf("Digite um numero de ponto flutuante (ex: 7.0):\n");
    scanf("%lf", &numero);

    for(double i=1.0; i<=numero; i++){
        double div = 1.0/i;
        soma = soma + div;
    }

    printf("O valor de S na operacao eh: %.1lf", soma);


    return ;
}