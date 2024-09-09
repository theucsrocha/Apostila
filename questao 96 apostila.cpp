#include <stdio.h>
/* Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de
valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e
uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e
calculadas.  */

int main(){
	int matriz[3][4],matrizB[3][4],matrizSoma[3][4],matrizSub[3][4],i,j;
	
	printf("Matriz 1 :\n ");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Digite o valor da linha %d, coluna %d : ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}

	printf("Matriz 2 :\n ");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Digite o valor da linha %d, coluna %d : ",i+1,j+1);
			scanf("%d",&matrizB[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			matrizSoma[i][j]=matriz[i][j]+matrizB[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			matrizSub[i][j]=matriz[i][j]-matrizB[i][j];
		}
	}
	printf("Primeira Matriz: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Segunda Matriz: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrizB[i][j]);
		}
		printf("\n");
	}
	printf("Soma das Matrizes: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrizSoma[i][j]);
		}
		printf("\n");
	}
	printf("Diferenca entre as Matrizes: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrizSub[i][j]);
		}
		printf("\n");
	}
	
}
