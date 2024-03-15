#include <stdio.h>
#include <stdio.h>
int main (){
	float a,b,h,p;
	
	printf("Seja bem vindo ao calculador da área e perimetro do retangulo! ");
	printf("Por favor, digite o valor da base e altura:");
	scanf("%f,%f",&b,&h);
	
	a = b*h;
	p = a*2+b*2;
	
	printf("O valor da área é %f e o valor do perimetro é %f",a,p);

}