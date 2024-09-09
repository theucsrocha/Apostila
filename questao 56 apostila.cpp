#include <stdio.h>

int main(){
	
	int n1,i,a1;
	
	scanf("%d",&n1);
	i=1;
	a1=0;
	while(i<n1){
		if(n1%i==0){
			a1=a1+i;
		}
		i++;
	}
	if(a1==n1){
		printf("Perfeito");
	}
	else {
		printf("Inperfeito");
	}
}