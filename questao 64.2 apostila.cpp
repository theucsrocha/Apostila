#include <stdio.h>

int main(){
	
	int v[20];
	int maior=0;
	int menor=0;
	int x=0;
	int j=0;
	
	for(x=0;x<20;x++){
		scanf("%d",&v[x]);
	}
	maior=v[0];
	menor=v[0];
	
	for(x=0;x<20;x++){
		if(maior<v[x]){
			maior=v[x];
		}
	}
	
	for(x=0;x<20;x++){
		if(menor>v[x]){
			menor=v[x];
		}
	}
		printf("Maior:%d           Menor:%d",maior,menor);
		
		
	}
	