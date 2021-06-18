#include <stdio.h>

/*
Faça um programa que solicita que o usuário digite o seu nome e sua idade, a resposta do algoritmo deve indicar 
se o usuário é maior de idade ou não com o valor lógico 1 (para true) e 0 (para false).

Exemplo:
Digite seu nome: André
Digite sua idade: 29
Seu nome é: André.
Você tem mais de 18 anos: 1

*/

int main() {

char nome[15];
int idade;

printf("Digite seu nome: ");
scanf("%s", nome);

printf ("Digite sua idade: ");
scanf ("%d", &idade);

printf ("Seu nome eh: %s", nome);

if (idade >= 18) {
    printf ("\nVoce eh maior de idade: %d anos", idade);
}
else {
    printf ("\nVoce eh menor de idade: %d anos", idade);
    }

    return 0;
}