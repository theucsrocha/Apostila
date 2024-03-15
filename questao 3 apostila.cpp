#include <stdio.h>
#include <math.h>

int main (){
	float r,a,p;

	printf("Por favor, digite o valor do raio para que possamos te informar o valor da area e perimetro da circurferencia :\n");
	scanf("%f",&r);
	
	p = 2*3.14*r;
	a = 3.14* pow(r,2);
	
	printf("O valor da area eh %.1f e o do perimetro é %.1f",a,p);
}