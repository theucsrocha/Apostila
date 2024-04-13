
#include <stdio.h>

int main(){
	char algo;
	
	printf("Digite qualquer caracter");
	scanf("%c",&algo);
	
	if (algo >= '0' || algo<='9'){
		printf("Numero");
	}
	else if (algo>='a' || algo<='z' || algo>='A' || algo<='Z'  ){
		printf("Letra");
	}
	else {
		printf("Simbolo");
	}
}