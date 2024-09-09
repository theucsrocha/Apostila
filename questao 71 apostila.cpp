#include <stdio.h>

int main(){
	int vetor[10],valor;
	int j;
	
	for(j=0;j<10;j++){
		scanf("%d",&vetor[j]);
	}
	scanf("%d",&valor);
	
	for(j=0;j<10;j++){
		if(valor==vetor[j]){
			printf("LOCAL %d",j+1);
			return 0;
		}
	}
	printf("-1");
	
	
}