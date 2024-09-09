#include <stdio.h>
#include <string.h>


int main(){
	int matriz[6][6],num,i,j;
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("VALOR LINHA %d, COLUNA %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Multiplicador: ");
	scanf("%d",&num);
for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d ",matriz[i][j] * num);
		}
		printf("\n");
	}
	}
	
