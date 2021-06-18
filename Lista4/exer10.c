/* Faça um algoritmo que solicite o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
 Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que 
 ultrapassar este valor, calcular e escrever o seu salário total.
*/

#include <stdio.h>

int main(){

    double salario, vendas;

    printf("Digite o salario do funcionario:\n");
    scanf("%lf", &salario);
    printf("Digite o valor das vendas efetuadas pelo funcionario:\n");
    scanf("%lf", &vendas);

    if(vendas <= 1500.00){
        double TotalSalario = salario + (vendas * 0.03);
        printf("O salario total eh de: R$ %.2lf", TotalSalario);
    }
    else{
        double totalSalario = salario + (1500.00*0.03) + ((vendas - 1500.00)*0.05);
        printf("O salario total eh de: R$ %.2lf", totalSalario);
    }









    return 0;
}