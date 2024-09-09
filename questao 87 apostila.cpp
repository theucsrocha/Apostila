#include <stdio.h>
#include <string.h>

int main(){
	char string1[100],string2[100];
    int i,tam=0,tam2=0;
    
    fgets(string1,100,stdin);
	fgets(string2,100,stdin);
	 
	 for(i=0;string1[i]!='\0';i++){
	 	tam++;
	 }
	 if(string1[tam-1]=='\n') {
	 	string1[tam-1] = '\0';
	 	tam--;
	 }
	 for(i=0;string2[i]!='\0';i++){
	 	tam2++;
	 }
	 if(string2[tam2-1]=='\n') {
	 	string2[tam2-1] = '\0';
	 	tam2--;
	 }
	 if(tam!=tam2){
	 	printf("Diferentes");
	 	return 0;
	 	
	 }
	 i=0;
	 while(i<tam){
	 	if(string1[i]== string2[i] || string1[i] == string2[i] + 32 || string1[i] == string2[i] - 32 || string1[i] + 32 == string2[i] || string1[i] - 32 == string2[i]  ){
	 		i++;
		 }
		 else{
		 	printf("DIFERENTES");
		 	return 0;
		 }
	 }
	 printf("Iguais!!");
	 
}