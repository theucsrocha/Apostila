#include <stdio.h>
#include <string.h>

int main(){
	char string[50],substring[50];
	int inicial,final,j,i,tam;
	
	
	fgets(string,50,stdin);
	scanf("%d",&inicial);
	scanf("%d",&final);
	
	for(i=0,tam=0;string[i]!='\0';i++){
		tam++;
	}
	if(string[tam-1]== '\n'){
		string[tam-1]='\0';
	}
	inicial--;
	final--;
	for(i=inicial,j=0;i<=final && string[i] != '\0';i++,j++){
		substring[j]=string[i];
	}
	substring[j]='\0';
	puts(substring);
	
}