#include <stdio.h>

int main(){

    int numero, soma, cont;


    scanf("%d", &numero);

    while(numero!=0){
        soma = 0;
        if(numero%2 == 0){
            for(cont=0; cont<5; cont++){
                soma = soma + numero;
                numero = numero +2;
            }
        }
        else{
            numero = numero+1;
            for(cont=0; cont<5; cont++){
            soma = soma + numero;
            numero = numero +2;
        }
       
    }
    printf("%d\n", soma);
    scanf("%d", &numero);
    }

    return 0;
}