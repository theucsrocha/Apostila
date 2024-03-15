#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero correspondente ao mes e direi a quantidade de dias");
	scanf("%d",&num);
	
	if(num>=1 && num<=12){
		if (num==1 || num==3 || num== 5 || num== 7 || num==8 || num==10 || num== 12){
			printf("Esse mes tem 31 dias");
		}
		
		else if (num==2){
			printf("Esse mes tem 28 ou 29 dias");
		}
		else {
			printf("Esse mes tem 30 dias");
		}

	}
	else {
		printf("Numero invalido");
	}
}