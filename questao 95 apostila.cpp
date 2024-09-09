#include <stdio.h>

int main(){
	
	int matriz[6][6],vetor[36];
	int i,j,k;
	k=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("Valor linha %d, coluna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			vetor[k]=matriz[i][j];
			k++;
		}
	}
	printf("Matriz: \n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Vetor:");
	for(i=0;i<36;i++){
		printf(" %d",vetor[i]);
	}
}
	