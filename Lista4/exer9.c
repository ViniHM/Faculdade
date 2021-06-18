/*Faça um algoritmo que solicita ao usuário três valores correspondentes aos lados de um triângulo. 
Informe se o triângulo é equilátero (possui 3 lados iguais), isósceles (possui dois lados iguais) 
ou escaleno (não possui lados iguais).
*/

#include <stdio.h>

int main(){

    double a, b, c;

    printf("Digite as 3 medidas dos lados do triangulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a==b && b==c){
        printf("Eh um triangulo equilatero");
    }
    else if(a!=b && b!=c && a!=c){
        printf("Eh um triangulo escaleno");
    }
    else if(a==b || b==c || a==c){
        printf("Eh um triangulo isosceles");
    }









    return 0;
}