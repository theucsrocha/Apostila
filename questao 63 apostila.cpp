#include <stdio.h>


int main(){
	float v1[10];
	float v2[10];
	float r[10];
	int j;
	
	for(j=0;j<10;j++){
		scanf("%f",&v1[j]);
	}
	for(j=0;j<10;j++){
		scanf("%f",&v2[j]);
	}
	for(j=0;j<10;j++){
	r[j]=v1[j]+v2[j];
	printf("Soma da posicao %d: %f \n",j+1,r[j]);
	}
	
}