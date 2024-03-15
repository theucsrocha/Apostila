#include <stdio.h>
#include <math.h>

int main(){
	float L,A,P;
	printf("Por favor escreva o valor do lado do quadrado para que possamos te informar o perimetro e area:\n");
	scanf("%f",&L);
	P = L*4;
	A = L*L;
	printf("O valor da area é %f e o valor do perimetro é %f",A,P);
	
}