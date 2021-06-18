#include <stdio.h>

int main(){

    double salario, imposto;

    scanf("%lf", &salario);

    
    if(salario >= 0.00 && salario <= 2000.00){
        printf("Isento\n");
    }
    else if(salario > 2000.00 && salario <= 3000.00){
        imposto = (salario - 2000.00)*0.08;
        printf("R$ %.2lf\n",imposto); 
    }
    else if(salario > 3000.00 && salario <= 4500.00){
        imposto = ((salario-3000.00)*0.18) + 80.00;
        printf("R$ %.2lf\n", imposto);
    }
    else{
        imposto = ((salario - 4500.00)*0.28)+80.00+270.00;
        printf("R$ %.2lf\n", imposto);
    }







    return 0;
}