#include <stdio.h>

int main(){
	
	int vetor[15];
	int j,i,copia;
	
	
	for(j=0;j<15;j++){
		scanf("%d",&vetor[j]);
	}
	
	for(j=0;j<15;j++){
		for(i=0;i<14;i++){
			if(vetor[i]>vetor[i+1]){
				copia=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=copia;
			}
		}
	}
	printf("Resultado:   ");
	for(j=0;j<15;j++){
		printf("%d  ",vetor[j]);
	}
	
}