#include <stdio.h>

int main(){
	int a,b,a1,b1;
	
	printf("Seja bem vindo ao permutador de numeros, por favor me diga os numeros a serem permutados:sendo a e b:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	a1 = a;
	b1 = b;
	a = b1;
	b = a1;
	
	printf("Os novos numeros são a = %d e b = %d",a,b);
}