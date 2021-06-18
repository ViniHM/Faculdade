#include <stdio.h>

int main() {  

double n1, n2, n3, n4, media, nEx, nf;
scanf("%lf", &n1);
scanf("%lf", &n2);
scanf("%lf", &n3);
scanf("%lf", &n4);

media = (n1*0.2) + (n2*0.3) + (n3*0.4) + (n4*0.1);
printf("Media: %.1lf\n", media);

if(media >= 7.0){
    printf("Aluno aprovado.\n");
}
else if(media < 5.0){
    printf("Aluno reprovado.\n");
}
else{
    printf("Aluno em exame.\n");
    scanf("%lf", &nEx);
    printf("Nota do exame: %.1lf\n", nEx);

    nf = (nEx + media) /2;
    if(nf > 5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", nf);
    }
    else{
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", nf);
    }
}



return 0;
}