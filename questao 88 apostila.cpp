#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	int i,tam=0;
	
	
	
	fgets(string,100,stdin);
	
	for(i=0;string[i]!='\0';i++){
		tam++;
	}
	if(string[tam-1]=='\n'){
		string[tam-1]= '\0';
	}
	for(i=0;string[i]!='\0';i++){
		if(string[i] >= 97 && string[i] <= 122){
			string[i]-=32;
		}
	}
	puts(string);
}