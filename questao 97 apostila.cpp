#include <stdio.h>
/* Escrever um algoritmo e implement�-lo em linguagem C que leia uma matriz de valores
inteiros 5 por 5 e a exiba. A seguir, leia dois n�meros x e y e em seguida troque a x�sima linha pela y-�sima linha, a x-�sima coluna com a y-�sima coluna, a diagonal
principal com a secund�ria e, por fim mostre a matriz assim modificada. */

int main(){
	int matriz[5][5],i,j,copia,x,y;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite o valor da %d linha, %d coluna : ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("Digite o Valor de x: ");
	scanf("%d",&x);
	
	printf("Digite o Valor de y: ");
	scanf("%d",&y);
	x--;
	y--;
	
	for(j=0;j<5;j++){
		copia = matriz[x][j];
		matriz[x][j]=matriz[y][j];
		matriz[y][j]= copia;
	}
		for(j=0;j<5;j++){
		copia = matriz[j][x];
		matriz[j][x]=matriz[j][y];
		matriz[j][y]= copia;
	}
	for(i=0,j=4;i<5;i++,j--){
		copia=matriz[i][i];
		matriz[i][i]=matriz[i][j];
		matriz[i][j]=copia;
	}
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
	}
}