//Faça um algoritmo que solicite 10 números e calcule a média dos números PARES e a média dos números ÍMPARES.

#include <stdio.h>

int main(){

    int numero, somaPar=0, somaImpar=0, contPar=0, contImpar=0;

    for(int i=0; i<10; i++){
        scanf("%d", &numero);

        if(numero%2 != 0){
            somaImpar = somaImpar + numero;
            contImpar++;
        }
        else{
            somaPar = somaPar + numero;
            contPar++;
        }
    }
    double mediaImpar = (double)somaImpar/contImpar;
    double mediaPar = (double) somaPar/contPar;

    printf("A media dos numeros pares eh: %.1lf\n", mediaPar);
    printf("A media dos numeros impar eh: %.1lf\n", mediaImpar);

    return 0;
}