#include <stdio.h>
#include <math.h>

int main(){
	int idade1,anos,meses,dias;
	
	printf("Seja bem vindo ao calculador de idade!\n");
	printf("Por favor, digite sua idade em dias:\n");
	scanf("%d",&idade1);
	
	anos = idade1/365;
	meses = (idade1%365)/30;
	dias =  (idade1%365)%30;
	
	printf("Sua idade é %d anos,%d meses e %d dias!",anos,meses,dias);
}