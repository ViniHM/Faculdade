#include <stdio.h>

int main() {

int qtd = 6;
int positivo = 0;
double numero, soma = 0.0;

for(int i=0; i<qtd; i++){
    scanf("%lf", &numero);
    if(numero > 0.0){
        soma = soma + numero;
        positivo = positivo + 1;
    }    
}

double media = soma / (double) positivo;
printf("%d valores positivos\n", positivo);
printf("%.1lf\n", media);

return 0;
}