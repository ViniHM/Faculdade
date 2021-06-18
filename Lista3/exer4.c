#include <stdio.h>

/*
O sistema deve pedir ao usuário que digite um número e responder se este número é ou não um número par. 
Em caso de ser par, indique 1 (true) ou 0 (false). Dica.: Operador mod (%).

*/

int main () {

int numero;

printf ("Digite um numero: ");
scanf  ("%d", &numero);

if (numero % 2 == 0){
    printf("O numero eh Par!");
}
    else {
        printf ("O numero eh Impar!");
    }


    return 0;
}