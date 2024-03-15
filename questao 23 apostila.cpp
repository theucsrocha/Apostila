#include <stdio.h>

int main(){
	int num,resultado;
	
	printf("Digite um numero qualquer:");
	scanf("%d",&num);
	
	resultado = num%2;
	
	if (resultado==1){
		printf("Esse numero eh impar");
		
		
	}
	else {
		printf("Esse numero eh par");
	}
	
}