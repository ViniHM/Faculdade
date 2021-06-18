#include <stdio.h>

/*Faça um algoritmo que solicita ao usuário uma letra (caracter) e exiba uma 
mensagem informando se é uma vogal ou uma consoante.
*/

int main (){

char letra;

printf("Digite uma letra:\n");
scanf("%c", &letra);

if(letra == 'a' ||letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u'){
    printf("A letra digitada eh uma: Vogal");
}
else{
    printf("A letra digitada eh uma: Consoante");
}

    return 0;
}