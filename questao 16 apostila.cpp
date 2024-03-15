#include <stdio.h>

int main(){
	
	int c,n1,n2,n3;
	printf("Seja bem vindo ao invertidor de algarismos!!!");
	printf("Por favor, digite 3 numeros: ");
	scanf("%d",&c);
	
	n3 = c%10;
	n2 = (c/10)%10;
	n1= c/100;
	printf(" O numero invertido é %d%d%d",n3,n2,n1);
}