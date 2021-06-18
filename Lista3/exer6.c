#include <stdio.h>

/*
Valentina sempre almoça meio-dia em ponto. Faça um programa que solicite ao usuário quantos minutos 
do dia já se passaram e como resultado, o programa deve informar se Mariazinha já almoçou ou não.
*/

int main () {

float horas;

printf ("Que horas sao? ");
scanf ("%f", &horas);

if (horas > 6 && horas < 12) {
    printf ("Maria ainda nao almocou! !");
}

else {
    printf ("Maria ja almocou");
}


    return 0;
}