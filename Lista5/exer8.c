/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 5 centímetros por ano.
 Construa um algoritmo que calcule quantos anos seriam necessários para Juca ser mais alto que Chico.*/

 #include<stdio.h>

 int main(){

     double chico = 1.50, juca = 1.10;
     int ano = 0;

     while(juca < chico){
         juca = juca + 0.05;
         chico = chico + 0.02;
         ano++;
     }
     printf("Foi necessario %d anos para Juca passar Chico!\n", ano);
     printf("Chico esta com %.2lf m de altura\n", chico);
     printf("Juca esta com %.2lf m de altura\n", juca);






     return 0;
 }