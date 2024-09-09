#include <stdio.h>
#include <string.h>

int main(){
	char frase[50],normal[50];
	int i,j,tam=0;
	fgets(frase,50,stdin);

	for(i=0;frase[i]!='\0';i++){
		tam++;
		
	}
	if(frase[tam-1]=='\n'){
		frase[tam-1]=='\0';
	}
	for(i=0,j=0;frase[i]!='\0';i++){
		if(frase[i]!=' '){
			normal[j]=frase[i];
			j++;
		}
	}
	normal[j]='\0';
	puts(normal);
	
}