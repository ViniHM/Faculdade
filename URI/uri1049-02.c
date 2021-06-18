#include <stdio.h>

int main() {

char nome1[20], nome2[20], nome3[20];

scanf("%s", &nome1);
scanf("%s", &nome2);
scanf("%s", &nome3);

if(nome1[0] == 'v' && nome2 [0] == 'a' && nome3 [0] == 'c'){
    printf("aguia\n");
}else if (nome1[0] == 'v' && nome2[0] == 'a' && nome3[0] == 'o'){
    printf("pomba\n");
}else if (nome1[0]== 'v' && nome2[0] == 'm' && nome3[0] == 'o'){
    printf("homem\n");
}else if (nome1[0] == 'v' && nome2[0] == 'm' && nome3[0] == 'h'){
    printf("vaca\n");
}else if (nome1[0] == 'i' && nome2[0] == 'i' && nome3[2] == 'm'){
    printf("pulga\n");
}else if (nome1[0] == 'i' && nome2[0] == 'i' && nome3[2] == 'r'){
    printf("lagarta\n");
}else if (nome1[0] == 'i' && nome2[0] == 'a' && nome3[0] == 'h'){
    printf("sanguessuga\n");
}else{
    printf("minhoca\n");
}


return 0;
}