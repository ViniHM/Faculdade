# include <stdio.h>
/*
Desejo calcular a média final de estudante da UAM. 
Sabendo que a média é composta por N1 peso 4 e N2 peso 6; Crie um programa 
para calcular
N1 = 7.00 e N2 = 8.35
*/

int main () {

float nota1, nota2;

printf("Digita a nota 1: ");
scanf("%f", &nota1);

printf("Digita a nota 2: ");
scanf("%f", &nota2);

float media = nota1 * 0.4 + nota2 * 0.6;

printf ("A media eh: %.2f", media);



    return 0;
}