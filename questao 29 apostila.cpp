

#include <stdio.h>

int main(){
	float salario,desconto;
	
	printf("Diga seu salario e eu direi o desconto:");
	scanf("%f",&salario);
	desconto= salario*0.11;
	
	if(desconto>334.29){
		desconto = 334.29; 
	}
	printf("Seu desconto eh %.2f",desconto);
}