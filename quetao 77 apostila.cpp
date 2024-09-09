#include <stdio.h>
#include <string.h>


int main(){
	char frase[20],fraseInvertida[20];
	int i,j,tamanho=0;
	
	fgets(frase,20,stdin);
	for(i=0;frase[i]!='\0';i++){
	tamanho++;
}
	for(i=0,j=tamanho-1;j>=0;i++,j--){
		fraseInvertida[i]=frase[j];
	}
	fraseInvertida[i]='\0';
	puts(fraseInvertida);
}
