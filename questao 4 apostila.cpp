#include <stdio.h>
#include <math.h>

int main(){
	float l1,l2,l3,p;
	
	printf("Salveeeee, seja bem vindo ao calculador de perimetro do triangulooo \n");
	printf("Por favor, me diga respectivamente o valor de cada lado do triangulo:\n ");
	
	scanf("%f",&l1);
	scanf("%f",&l2);
	scanf("%f",&l3);
	p = l1+l2+l3;
	printf("O valor do perimetro é %f",p);
}