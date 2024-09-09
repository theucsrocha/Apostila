#include <stdio.h>

int main(){
	
	
	int n[10];
	int x;
	int cont;
	cont=0;
	
	for(x=0;x<10;x++){
		scanf("%d",&n[x]);
	}
	for(x=0;x<10;x++){
		if(n[x]%2==0){
			cont++;
		
		}
	}
	printf("A quantide de numeros pares eh %d",cont);
}