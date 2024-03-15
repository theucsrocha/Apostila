#include <stdio.h>

int main(){
	int num,d2,d3,resultado;
	printf("Por favor,digite um numero abaixo de 9999:");
	scanf("%d",&num);
	
	if (num<9999){
	 
	 d3= (num/10)%10;
	 d2= (num/100)%10;
	 resultado= d2+d3;
	 
	 printf("O resultado eh %d",resultado);
		 
		 
	}
	else {
		printf("Numero invalido");
	}
}