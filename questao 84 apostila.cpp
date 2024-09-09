#include <stdio.h>
#include <string.h>

int main(){
	char frase[50];
	int tam=0,i;
	
	
	fgets(frase,50,stdin);
	
	for(i=0;frase[i]!='\0';i++){
		tam++;
	}
	if(frase[tam-1]=='\n'){
		frase[tam-1]='\0';
		tam--;
	}
	tam--;
	for(i=0;i<tam-1;i++,tam--){
		if(frase[i]!=frase[tam]){
			printf("Nao é polidromo!");
			return 0;
		}
	}
	printf("POLIDROMOO");
	
}