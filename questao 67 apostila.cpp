#include <stdio.h>

int main(){
	
	int v1[10],v2[10],v3[10],x;
	int maior[2];
	
	
	
	for(x=0;x<10;x++){
		printf("Primeiro vetor, posicao %d: ",x);
		scanf("%d",&v1[x]);
	}
	
		for(x=0;x<10;x++){
		printf("Segundo vetor, posicao %d: ",x);
		scanf("%d",&v2[x]);
	}
	
	maior[0]=v1[0];
	maior[1]=v2[0];
	
	for(x=0;x<10;x++){
		if(maior[0]<v1[x]){
			maior[0]=v1[x];
		}
	}
	for(x=0;x<10;x++){
		if(maior[1]<v2[x]){
			maior[1]=v2[x];
		}
	}
	
	printf("O maior numero do primeiro vetor eh %d \n O maior numero do segundo vetor eh %d",maior[0],maior[1]);
	
	
	
}