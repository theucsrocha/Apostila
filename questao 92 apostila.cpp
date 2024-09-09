#include <stdio.h>


int main(){
	int matriz[5][5],i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Valor linha %d, coluna %d: ",i,j);
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
		for(j=0;j<5;j++){
			if(matriz[i][j]!=matriz[j][i]){
				printf("Nao eh simetrica");
				return 0;
			}
		}
	}
	printf("SIMETRICAAAAAA");
}