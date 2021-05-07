#include <stdio.h>
/*

Considerando a expressão 5 x 4 + 2 – 4, faça um algoritmo que resolva a expressão, 
para que o cálculo apresente o resultado correto. 
Considere a limitação de que apenas uma operação pode ser realizada de cada vez.

*/
int main () {

int a = 5, b = 4, c = 2, d = 4;
int r = a * b + c - d;

printf("resultado: %d", r);

    return 0;
}