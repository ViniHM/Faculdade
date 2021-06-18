#include <stdio.h>
#include <stdbool.h>

/*Faça um algoritmo que solicita ao usuário as notas de três provas.
Calcule a média aritmética e informe se o aluno foi Aprovado ou Reprovado 
(o aluno é considerado aprovado com a média igual ou superior a 6).*/

int main(){

    float n1, n2, n3, media;

    printf("Informe sua nota 1 (de 0.0 a 10.0): ");
    scanf("%f", &n1);
    printf("Informe sua nota 2 (de 0.0 a 10.0): ");
    scanf("%f", &n2);
    printf("Informe sua nota 3 (de 0.0 a 10.0): ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Sua media foi: %.1f", media);

    if(media >= 6) {
        printf ("\nAluno Aprovado - Parabens!");
    }
    else {
        printf("\nAluno Reprovado - D: ");
    }

    return 0;
}