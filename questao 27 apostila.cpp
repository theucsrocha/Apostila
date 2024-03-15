#include <stdio.h>



int main(){
	float n1,n2,n3,maior,media;
	
	printf("Escreva 3 numeros");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	
	maior = n1;
	
	if (maior<n2){
		maior=n2;
	}
	if (maior<n3){
		maior=n3;
	}
	if (maior>n2 && maior>n3){
		media = ((maior*5)+(n2*2.5)+(n3*2.5))/10;
	}
	if (maior>n1 && maior>n3){
		media = ((maior*5)+(n1*2.5)+(n3*2.5))/10;
	}
	if (maior>n2 && maior>n1){
		media = ((maior*5)+(n2*2.5)+(n1*2.5))/10;
	}
	
	printf("A media eh %.2f",media);
}