#include <stdio.h>
/*

9) Faça um algoritmo para calcular e exibir a área de um retângulo, 
onde as medidas dos lados serão informadas pelo usuário.

*/
int main () {

float a, b, h;


printf ("vamos calcular a area do retangulo?");
printf (" Informe a base em M (Ex: 2.5): ");
scanf ("%f", &b);

printf ("Informe informe a altura em M (Ex: 1.5): ");
scanf ("%f", &h);

a = b * h;

printf ("Conforme os dados a area eh: %.2f", a);


    return 0;
}