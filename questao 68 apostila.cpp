#include <stdio.h>

int main(){
	
	float indice[30],maior,menor,media1,media2;
	int j,diamais,diamenos;
	
	
	for(j=0;j<30;j++){
		printf("Digite o indice pluviometrico do dia %d: ",j+1);
		scanf("%f",&indice[j]);
	}
	maior=indice[0];
	menor=indice[0];
	
	for(j=0;j<30;j++){
		if(maior<indice[j]){
			maior=indice[j];
			diamais=j;
		}
	}
	
	for(j=0;j<30;j++){
		if(menor>indice[j]){
			menor=indice[j];
			diamenos=j;
		}
	}
	media1=0;
	media2=0;
	
	for(j=0;j<15;j++){
		media1+=indice[j];
	}
	for(j=15;j<30;j++){
		media2+=indice[j];
	}
	
	media1=media1/15;
	media2=media2/15;
	
	printf("O maior indice pluviometrico do mes de junho foi no dia %d \n",diamais+1);
	printf("O menor indice pluviometrico do mes de junho foi no dia %d \n",diamenos+1);
	printf("Media da primeira quinzena: %f \n",media1);
	printf("Media da segunda quinzena : %f ",media2);

	
	
	
}