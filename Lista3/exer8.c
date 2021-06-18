#include <stdio.h>

/* Exercicio 8 - Escola de magia */

int main () {

char coragem, inteligencia, destreza, compaixao;

printf ("Vamos colher suas caracteristicas? \n");
printf ("Responda S ou N para os atributos abaixo!\n");

printf("Voce possui Coragem? ");
scanf("\n%c",&coragem);

printf("Voce possui Inteligencia? ");
scanf("\n%c",&inteligencia);

printf("Voce possui Destreza? ");
scanf("\n%c",&destreza);

printf("Voce possui Compaixao? ");
scanf("\n%c",&compaixao);

if (coragem == 'S'&& inteligencia == 'S' && destreza == 'S' && compaixao == 'S' ){
    printf("Voce pertence a casa VERMELHA");
}
else if (coragem == 'N'&& inteligencia == 'S' && destreza == 'S' && compaixao == 'S'){
    printf("Voce pertence a casa AZUL");
}
else if (coragem == 'S'&& inteligencia == 'S' && destreza == 'S' && compaixao == 'N'){
    printf("Voce pertence a casa VERDE");
}
else{
    printf("Voce pertence a casa AMARELA");
}
    return 0;
}