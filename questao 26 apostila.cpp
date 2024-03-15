#include <stdio.h>

int main(){
	
	float menor,v1,v2,v3,resultado;
	
	printf("Digite 3 valores");
	scanf("%f",&v1);
		scanf("%f",&v2);
			scanf("%f",&v3);
			
	menor = v1;
	
	if (menor>v2){
		menor=v2;}
		
		if(menor>v3){
			menor=v3;
		}
		
		resultado = (v1+v2+v3)-menor;
		
		printf("Resultado eh %.2f",resultado);
	}		