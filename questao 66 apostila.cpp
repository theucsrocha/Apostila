#include <stdio.h>


int main(){
	
	int n[10];
	int n2[10];
	int x;
	
	for(x=0;x<10;x++){
		scanf("%d",&n[x]);
	}
	
	for(x=0;x<10;x++){
		n2[x]=n[x];
		printf("Valor [%d] : %d \n",x+1,n2[x]);
	}
}