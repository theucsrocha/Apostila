#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[50];
	int cont=0,j,tam=0;
	
	fgets(frase,50,stdin);
	for(j=0;frase[j]!='\0';j++){
		tam++;
	}
	if(frase[tam-1]=='\n'){
		frase[tam-1]= '\0';
		
	}
	for(j=0;frase[j]!='\0';j++){
		if(frase[j]== 'a' || frase[j]== 'e' || frase[j]== 'i' || frase[j]== 'o' || frase[j]== 'u' || frase[j]== 'A' || frase[j]== 'E' || frase[j]== 'I' || frase[j]== 'O' || frase[j]== 'U'  ){
			cont++;
		}}
	printf("Numero de vogais: %d",cont);
	
}