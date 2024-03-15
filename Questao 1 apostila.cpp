#include <stdio.h>
#include <stdio.h>
int main (){
	float a,b,h,p;
	
	printf("Seja bem vindo ao calculador da área e perimetro do retangulo! ");
	printf("Por favor, digite o valor da base e altura:");
	scanf("%f",&b);
	scanf("%f",&h);
	a = b*h;
	p = b*2+h*2;
	
	printf("O valor da área é %.1f e o valor do perimetro é %.1f",a,p);

}