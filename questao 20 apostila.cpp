
#include <stdio.h>

int main(){
	float entrada,valor,presta;
	
	
	printf("Digite o valor do produto que deseja comprar:");
	scanf("%f",&valor);
	
    entrada = valor/3;
    presta = valor/3;
    entrada += (presta - (int)presta)*2;
    presta = (int)presta;
    
    printf("O valor de entrada eh %.2f e o valor de prestacao é %f",entrada,presta);
}