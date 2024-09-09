#include <stdio.h>

int main(){
	int matriz[5][5],somaLinha[5]={0},somaColuna[5]={0},i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Valor linha %d, coluna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
			somaLinha[i]+=matriz[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			somaColuna[i]+= matriz[j][i];
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("SOMA LINHA : %d",somaLinha[i]);
		printf("\n");
	}
	for(i=0;i<5;i++){
		printf("SOMA COLUNA %d  :  %d \n",i,somaColuna[i]);
	}
	
}