#include <stdio.h>
#include <string.h>

int main(){
	char frase[50],sub[50];
	int i,j,tam=0,inicio,fim;
	
	fgets(frase,50,stdin);
	
	printf("Digite a inicial e final");
	
	scanf("%d",&inicio);
	scanf("%d",&fim);
	
	for(i=0;frase[i]!='\0';i++){
		tam++;
	}
	if(frase[tam-1]=='\n'){
		frase[tam-1]='\0';
		tam--;
	}
	for(i=0,j=fim;inicio<=j;i++,inicio++){
		sub[i]=frase[inicio];
	}
	sub[i]='\0';
	puts(sub);
}