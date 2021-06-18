#include <stdio.h>

/* O Irmão do Jorel recebeu R reais da Vovó Juju para comprar pão, 
há N pessoas na família do irmão do Jorel, considere:
• Cada pessoa da família come 2 pães;
• O pão custa 30 centavos. 
O irmão do Jorel precisa responder para vovó Juju se o dinheiro é suficiente para comprar os pães,
faça o algoritmo que dê esta resposta e ajude o Irmão do Jorel .*/

int main () {

float dinheiro, pessoas, valorPao = 0.30*2;

printf("Quanto de dinheiro a Vovo deu? ");
scanf("%f", &dinheiro);

printf("Quantas pessoas tem na familia? ");
scanf("%f", &pessoas);

float totalCompra = pessoas * valorPao;

if (totalCompra <= dinheiro) {
float troco = dinheiro - totalCompra;

printf("O dinheiro eh suficiente!\n");
printf("e ainda teremos troco de R$ %.2f",troco);
}
else {
float falta = totalCompra - dinheiro;

printf("O dinheiro nao eh suficiente!\n");
printf("Falta R$ %.2f para comprar a quantidade certa de pao", falta);
}

    return 0;
}