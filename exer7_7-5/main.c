#include <stdio.h>
/*
7) Faça um algoritmo para calcular e exibir a 
metade de um número qualquer informado pelo usuário.

*/
int main () {

float numero;

printf ("Digite um numero:");
scanf ("%f", &numero);

float div = numero / 2;

printf ("A metade eh: %.1f", div);

    return 0;
}