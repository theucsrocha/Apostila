#include <stdio.h>
#include <string.h>

int main(){
	char frase[50],maiorr[50];
	int i,j,y,k,cont,maior;
	maior = -1;
	cont = 0;
	
	fgets(frase,50,stdin);
	
	for(i=0;frase[i]!='\0';i++){
		for(k=i,j=i;frase[k]!=' ';k++){
			cont++;
		}
		if(cont>maior){
			for(y=0;frase[j]!=' ';j++){
				maiorr[y]=frase[j];
			}
		}
		cont=0;
	}
	maiorr[y]='\0';
	puts(maiorr);
}