#include <stdio.h>
#include <string.h>

int main(){
	char frase[50],copia[50];
	int j,tam=0;
	
	
	fgets(frase,50,stdin);
	
	for(j=0;frase[j]!='\0';j++){
		tam++;
	}
	
	if(frase[tam-1]=='\n'){
		frase[tam-1]='\0';
		tam--;
	}
	tam--;
	for(j=0;frase[j]!='\0';j++,tam--){
		copia[j]=frase[tam];
	}
	copia[j]='\0';
	puts(copia);
}