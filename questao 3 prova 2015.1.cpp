

#include <stdio.h>

int main(){
	float menor,n1,n2,n3,n4,media;
	
	printf("Por favor, me diga suas 4 notas:");
	scanf("%f",&n1);
		scanf("%f",&n2);
			scanf("%f",&n3);
				scanf("%f",&n4);
				
	menor = n1;
	if (menor>n2){
		n2=menor;
		
	}	
	if (menor>n3){
		menor=n3;
	}	
	if (menor>n4){
		menor=n4;
	}
	media = (n1+n2+n3+n4-menor)/3;
	
	printf("Sua media eh %.1f.",media);
	
}