#include <stdio.h>
#include <string.h>

int main(){
	char frase[50],tem[50];
	int i,j,k,tam=0,cont=0;
	
	fgets(frase,50,stdin);
	fgets(tem,50,stdin);
	
	for(i=0;frase[i]!='\0';i++){
		tam++;
	}
	if(frase[tam-1]=='\n'){
		frase[tam-1]='\0';
	}
	tam=0;
	for(i=0;tem[i]!='\0';i++){
		tam++;
	}
	if(tem[tam-1]=='\n'){
		tem[tam-1]='\0';
	
	}
	for(i=0;frase[i]!='\0';i++){
		if(frase[i]==tem[0]){
			for(k=i,j=0;tem[j]!='\0';k++,j++){
				if(tem[j]==frase[k]){
				cont++;
				}
				
			}
			if(cont==tam - 1){
				printf("contem");
				return 0;
			}
		}
		cont=0;
	}
	printf("Nao contem");
	
	
}