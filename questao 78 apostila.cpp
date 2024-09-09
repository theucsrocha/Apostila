#include <stdio.h>
#include <string.h>

int main(){
	char frase[50],letra;
	int i,cont=0;
	
	fgets(frase,50,stdin);
	scanf("%c",&letra);
	
	for(i=0;frase[i]!='\0';i++){
		if(frase[i]==letra){
			cont++;
		}
	}
	printf("Ocorrencias: %d",cont);
}
