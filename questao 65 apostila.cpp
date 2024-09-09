#include <stdio.h>


int main(){
	
	
	int n[20];
	int P,p,x;
	int maior;
	int menor;

	
	for(x=0;x<20;x++){
		scanf("%d",&n[x]);
	}
	maior=n[0];
	menor=n[0];
	
	
	for(x=0;x<20;x++){
		if(maior<n[x]){
			maior=n[x];
			P=x;
		}
	}
	x=0;
	p=x;6
	for(x=0;x<20;x++){
		if(menor>n[x]){
			menor=n[x];
			p=x;
		}
	}
	
	printf("O maior esta na posicao %d e vale: %d\n",P+1,maior);
		printf("O menor esta na posicao %d e vale: %d\n",p+1,menor);
	
}
