#include <stdio.h>

int main() {  

char nome ;
double fixo, venda;

scanf("%s", &nome);
scanf("%lf", &fixo);
scanf("%lf", &venda);

double salario = fixo+(venda*0.15);

printf("TOTAL = R$ %.2lf\n", salario);

return 0;
}