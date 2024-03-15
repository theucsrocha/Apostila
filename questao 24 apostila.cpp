#include <stdio.h>

int main(){
	int n1,n2,n3,maior;
	
	printf("Digite 3 numeros");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	maior= n1;
	
	if (maior<n2){
		maior=n2;
	}
	if (maior<n3){
		maior = n3;
	}
	
	printf("O maior numero eh %d.",maior);
}