#include <stdio.h>

int main(){
	
	int matriz[5][5],j,i,prim=0,sec=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Valor Linha %d, coluna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		prim+=matriz[i][i];
	}
	for(i=0,j=4;i<5;i++,j--){
		sec+=matriz[i][j];
	}
	printf("Valor Diagonal Principal: %d \n Valor Diagonal Sucundaria: %d ",prim,sec);
}