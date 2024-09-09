#include <stdio.h>

int main(){
	int n,j,i;
	float fatorial,e;
	e=1;
	
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		j=i;
		fatorial=i;
		while(j>1){
			j=j-1;
			fatorial*=j;
			
		}
		e+=1/fatorial;
	}
	printf("%f",e);
}