/* Faça um algoritmo em que o usuário preencha dois arrays de 10 posições.
 O programa deve fazer a multiplicação dos elementos de mesmo índice, colocando
 o resultado em um terceiro array. Exiba o array resultante.*/

 #include <stdio.h>

 int main(){

    int vetUm[10], vetDois[10], vetTres[10];

    printf("Vamos preencher 2 array de 10 posicoes !\n");
    printf("Os 2 primeiro numeros vao preencher as primeiras posicoes do Array1 e Array2\n");
    printf("Em seguida os 2 seguintes vao para a segunda posicao... ate que todos sejam preenchidos\n");

    for(int i=0; i<10; i++){
        scanf("%d %d", &vetUm[i], &vetDois[i]);
    }

    printf("Agora vamos mostrar o produto das respectivas posicoes:\n");

    for(int i=0; i<10; i++){
        vetTres[i] = vetUm[i]*vetDois[i];
        printf("O produto da posicao %d eh: %d\n", i, vetTres[i]);
    }


     return 0;
 }