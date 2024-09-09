#include <stdio.h>
#include <string.h>
int main(){
char hexa[100];
int i,tam;

fgets(hexa,100,stdin);

for(i=0,tam=0;hexa[i]!='\0';i++){
	tam++;
}
if(hexa[tam-1]=='\n'){
	hexa[tam-1]='\0';
	tam--;
}

for(i=0;hexa[i]!='\0';i++){
	if (hexa[i]=='0'){
		printf("0");
	}
	else if (hexa[i]=='2'){
		printf("2");
	}
	else if (hexa[i]=='3'){
		printf("3");
	}
	else if (hexa[i]=='4'){
		printf("4");}
		else if (hexa[i]=='5'){
		printf("5");
	}
	else if (hexa[i]=='6'){
		printf("6");
	}
	else if (hexa[i]=='7'){
		printf("7");
	}
	else if (hexa[i]=='8'){
		printf("8");
	}
	else if (hexa[i]=='9'){
		printf("9");
	}
	else if (hexa[i]=='A'){
		printf("10");
	}
	else if (hexa[i]=='B'){
		printf("11");
	}
	else if (hexa[i]=='C'){
		printf("12");
	}
	else if (hexa[i]=='D'){
		printf("13");
	}
	else if (hexa[i]=='E'){
		printf("14");
	}
	else if (hexa[i]=='F'){
		printf("15");
	}
	else{
		printf(" \n CARACTER INVALIDO : %c",hexa[i]);
	}
	}
	
}