#include <stdio.h>
#include <math.h>

int main(){
	
	int n1,n2,r,q;
	printf("Seja bem vindo ao super divisor!!\n");
	printf("Por favor, digite respectivamente o valor dos dois numeros a serem divididos:\n");
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	r = n1 % n2;
	q = n1/n2;
	
	printf("O quociente da divisao eh %d e o resto é %d",q,r);
}
