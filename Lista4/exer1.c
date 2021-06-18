#include <stdio.h>
#include <stdbool.h>

int main() {

int N, soma = 0;

scanf("%d", &N);

if(N % 2 == 0){
    for(int i=9; i>0; i--){
        if(N % 2 == 0){
            soma = soma + N;
    }}
}
else{
    for(int i=10; i>0; i--){
        if(N % 2 == 0){
            soma = soma + N;
}}

printf("%d", soma);



return 0;
}