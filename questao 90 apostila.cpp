#include <stdio.h>
#include <string.h>

int main(){
	char string[100],nova[100];
	int i,tam=0,j;
	fgets(string,100,stdin);
	for(i=0;string[i]!='\0';i++){
		tam++;
	}
	if(string[tam-1]!='\n'){
		string[tam-1]='\0';
	}
	for(i=0,j=0;string[i]!='\0';i++){
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
		nova[j]=string[i];
		j++;
		}
	}
	for(i=0;string[i]!='\0';i++){
	if (string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u' && string[i]!='A' && string[i]!='E' && string[i]!='I' && string[i]!='O' && string[i]!='U'){
		nova[j]=string[i];
		j++; 	}
	}
	nova[j]='\0';
	puts(nova);
}