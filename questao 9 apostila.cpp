#include <stdio.h>
#include <math.h>

int main(){
	float r,h,v;
	
	printf("Seja bem vindo ao calculador de volume para latas!\n");
	printf("Por favor, me diga o raio da lata e altura, respectivamente :");
	scanf("%f",&r);
	scanf("%f",&h);
	
	v = 3.14 * pow(r,2) * h;
	printf("O volume da lata é %.2f",v);
	

}