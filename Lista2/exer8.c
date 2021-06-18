#include <stdio.h>
/*
8) Faça um algoritmo para calcular e exibir a soma de 
três números informados pelo usuário.
*/
int main () {

int a, b, c;

printf ("digite o numero 1: ");
scanf ("%d", &a);

printf ("digite o numero 2: ");
scanf ("%d", &b);

printf ("digite o numero 3: ");
scanf ("%d", &c);

int resultado = a + b + c;

printf ("O resultado eh: %d", resultado);


    return 0;
}