#include <stdio.h>

/*
Enzo possui um carro inteligente, seu carro indica se é ou não possível realizar uma viagem baseado no local de 
destino e na quantidade de gasolina (em litros) disponível no tanque de combustível. 
O algoritmo deve receber como entrada: a quantidade de gasolina, a distância até o local de destino e a média de 
quantos quilômetros o carro consegue fazer por litro de gasolina.

*/

int main () {

float gasolinaDisponivel, distancia, mediaKm;

printf("Quantos litros de combustivel temos no tanque? ");
scanf("%f",&gasolinaDisponivel);

printf("Qual a distancia total da viagem? ");
scanf("%f",&distancia);

printf("Qual a media em KM que o carro roda por litro? ")/
scanf("%f",&mediaKm);

float litrosPreciso = distancia / mediaKm;

if (litrosPreciso >= gasolinaDisponivel) {
    float falta = litrosPreciso - gasolinaDisponivel;
    printf("Voce nao tem combustivel suficiente!\n");
    printf("Contem %.2f L no tanke, a viagem pede %.2f litros\n", gasolinaDisponivel, litrosPreciso);
    printf("Falta %.2f litros de combultivel!!", falta);
}
else {
      float sobra = gasolinaDisponivel - litrosPreciso;
      printf("Voce contem combustivel suficiente!\n");
      printf("Ao final vai sobrar aproximadamente %.2f litros",sobra);

}
    return 0;
}