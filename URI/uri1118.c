#include <stdio.h>

int main() { 

int novoCalculo = 1;
double nota1, nota2, media;

    while(novoCalculo == 1){

        scanf("%lf", &nota1);

        while (nota1<0.0 || nota1>10.0){
        printf("nota invalida\n");
        scanf("%lf", &nota1);
        }
    
        scanf("%lf", &nota2);
        while (nota2<0.0 || nota2>10.0){
        printf("nota invalida\n");
        scanf("%lf", &nota2);
        }        

        media = (nota1 + nota2) /2;
        printf("media = %.2lf\n", media); 

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novoCalculo);

        while (novoCalculo != 1 && novoCalculo != 2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novoCalculo); 

}       
 }          


return 0;
}