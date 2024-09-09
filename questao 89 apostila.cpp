#include <stdio.h>
#include <string.h>

int main(){
	char nomeCompleto[100];
	int i,cont=0,tam=0;
	fgets(nomeCompleto,100,stdin);
	
	for(i=0;nomeCompleto[i]!='\0';i++){
		tam++;
	}
	if(nomeCompleto[tam-1]=='\n'){
		nomeCompleto[tam-1] = '\0';
		tam--;
	}
	for(i=0;nomeCompleto[i]!=' ';i++){
		printf("%c",nomeCompleto[i]);
	}
	
	for(;nomeCompleto[i]!='\0';i++){
		if(cont<1 && nomeCompleto[i]!=' '){
			if(nomeCompleto[i]>=97 && nomeCompleto[i]<=122){
				nomeCompleto[i]-=32;
			}
			printf(" %c.",nomeCompleto[i]);
			cont++;
		}
		if(nomeCompleto[i]==' '){
			cont=0;
		}
	}

	
	
	
}