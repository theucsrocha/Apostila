#include <stdio.h>



int main(){
	char letra;
	
	printf("Escreva uma letra qualquer");
	scanf("%c",&letra);
	
	if (letra== 'a' || letra == 'e' || letra == 'i' || letra== 'o' || letra == 'u'){
		printf("Essa letra eh uma vogal");
	}
	else {
		printf("Essa letra eh uma consoante");
	}
}