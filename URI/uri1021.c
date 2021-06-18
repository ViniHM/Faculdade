#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int x, resto, nota, moeda;

    scanf("%lf", &valor);
    printf("NOTA:\n");
    resto = valor * 100.00;

    nota = 100;
    x = resto/(nota*100);
    printf("%d nota(s) de R$ 100.00\n", x);
    resto = resto%(nota*100);

    nota = 50;
    x = resto/(nota*100);
    printf("%d nota(s) de R$ 50.00\n", x);
    resto = resto%(nota*100);

    nota = 20;
    x = resto/(nota*100);
    printf("%d nota(s) de R$ 20.00\n", x);
    resto = resto%(nota*100);

    nota = 10;
    x = resto/(nota*100);
    printf("%d nota(s) de R$ 10.00\n", x);
    resto = resto%(nota*100);


    nota = 5;
    x = resto/(nota*100);
    printf("%d nota(s) de R$ 5.00\n", x);
    resto = resto%(nota*100);

    nota = 2;
    x = resto/(nota*100);
    printf("%d nota(s) de R$ 2.00\n", x);
    resto = resto%(nota*100);

    printf("MOEDA:\n");

    moeda = 100;
    x = resto/moeda;
    printf("%d moeda(s) de R$ 1.00\n", x);
    resto = resto%moeda;

    moeda = 50;
    x = resto/moeda;
    printf("%d moeda(s) de R$ 0.50\n", x);
    resto = resto%moeda;

    moeda = 25;
    x = resto/moeda;
    printf("%d moeda(s) de R$ 0.25\n", x);
    resto = resto%moeda;

    moeda = 10;
    x = resto/moeda;
    printf("%d moeda(s) de R$ 0.10\n", x);
    resto = resto%moeda;

    moeda = 5;
    x = resto/moeda;
    printf("%d moeda(s) de R$ 0.05\n", x);
    resto = resto%moeda;
    
    printf("%d moeda(s) de R$ 0.01\n", resto);
    
return 0;
}