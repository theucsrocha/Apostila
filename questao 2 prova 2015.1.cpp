#include <stdio.h>

int main(){
	
	int num,n1,n2,n3,n4;
	
	printf("Por favor, digite uma senha em numeros que seja menor que 9999:");
	scanf("%d",&num);
	
	n4 = num%10;
	n3 = (num/10)%10;
	n2 = (num/100)%10;
	n1 = num/1000;
	
	if (num>9999 || n1==n2 && n2==n3 && n3==n4 || n1<n2 && n2<n3 && n3<n4 || n1>n2 && n2>n3 && n3>n4) {
	
	printf("Senha invalida");
	}
	
	else {
		printf("Senha Valida");
	}
		
	
}