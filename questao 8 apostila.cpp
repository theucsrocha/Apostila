#include <stdio.h>
#include <math.h>

int main(){
    float c,f;

    printf("Seja bem vindo ao conversor de fahrenheit para celsius!\n");
    printf("Por favor, digite os graus a serem convertidos: \n");
    scanf("%f",&f);

    c = (5.0/9.0) * (f - 32);
    printf("A temperatura em celsius é : %.2f .",c);
    
}