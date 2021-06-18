/* Escreva um algoritmo que exiba um menu com as opções de um cardápio de restaurante. 
O cliente deve escolher o código do prato desejado, é necessário mostrar o valor do prato digitado pelo usuário.
CÓDIGO PRATO VALOR
1 Picanha 25,00
2 Lasanha 20,00
3 Strogonoff 20,00
4 Bife Acebolado 15,00
5 Pão com Ovo 5,00

Em casos onde o código digitado não está no menu, é necessário que o algoritmo informe ao usuário que 
o código foi inválido e exiba novamente o menu com as opções, permitindo que o usuário tente até selecionar um código correto.*/

#include <stdio.h>

int main(){
        
    int cod;

    do {        
    printf("Escolha um prato digitando seu cod (1~5)\n");
    printf("Cod 1: Picanha ------ R$ 25,00\n");
    printf("Cod 2: Lasanha ------ R$ 20,00\n");
    printf("Cod 3: Strogonoff --- R$ 20,00\n");
    printf("Cod 4: Bife Acebolado R$ 15,00\n");
    printf("Cod 5: Pao com Ovo R$ R$  5,00\n");
    scanf("%d", &cod);

    if(cod<0 || cod>5){
        printf("Codigo invalido !!\n");
    }

    } while (cod<0 || cod>5);

    if(cod == 1){
        printf("Voce selecionou o cod %d\n", cod);
        printf("Prato: Picanha ------ R$ 25,00\n");
    }
    else if(cod == 2){
        printf("Voce selecionou o cod %d\n", cod);
        printf("Prato: Lasanha ------ R$ 20,00\n");
    } 
    else if(cod == 3){
        printf("Voce selecionou o cod %d\n", cod);
        printf("Prato: Strogonoff --- R$ 20,00\n");
    }
    else if(cod == 4){
        printf("Voce selecionou o cod %d\n", cod);
        printf("Prato: Bife Acebolado R$ 15,00\n");
    }
    else{
        ("Voce selecionou o cod o 5\n");
        printf("Prato: Pao com Ovo R$ R$  5,00\n");
    }

    return 0;
}