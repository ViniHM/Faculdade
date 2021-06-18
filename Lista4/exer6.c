#include <stdio.h>

/*Faça um algoritmo que solicita ao usuário dois números inteiros. O primeiro é o valor das 
horas e o segundo dos minutos. Verifique se a hora é válida ou inválida e exiba uma mensagem 
correspondente (São válidas as horas entre 00:00 e 23:59).
*/

int main (){

    int hora, minuto;
    printf("Digite a hora e o minuero:\n");
    scanf("%d %d", &hora, &minuto);

    if(hora >= 00 && hora <= 23 && minuto >= 00 && minuto <= 59){
        printf("Hora valida: %d:%d", hora, minuto);
    }
    else{
        printf("A hora digitada eh invalida");
    }
    
    return 0;
}