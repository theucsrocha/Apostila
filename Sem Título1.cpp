#include <stdio.h>
#include <stdio.h>
int main (){
	float a,b,h,p;
	
	printf("Seja bem vindo ao calculador da �rea e perimetro do retangulo! ");
	printf("Por favor, digite o valor da base e altura:");
	scanf("%f,%f",&b,&h);
	
	a = b*h;
	p = a*2+b*2;
	
	printf("O valor da �rea � %f e o valor do perimetro � %f",a,p);

}