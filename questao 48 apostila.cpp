#include <stdio.h>

int main(){
	
	int n,cont,i;
	i=1;
	cont=0;
	scanf("%d",&n);
	
	while(i<=n){
		if(n%i==0){
			cont++;
		}
		i++;
	
		}
	
	if(cont>2){
			printf("Esse numero nao eh primo");
			return 0;
		}
	if(cont==2){
		printf("Primo");
	}
	
}