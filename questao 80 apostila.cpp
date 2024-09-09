#include <stdio.h>
#include <string.h>

int main(){
	char frase1[20],tem[20];
	int i,j,k,cont,tamanho=0, tamanho2=0;
	fgets(frase1,20,stdin);
	fgets(tem,20,stdin);
	
	for(i=0;frase1[i]!='\0';i++){  //Ver o tamanho da primeira string
		tamanho++;
	}
	if(frase1[tamanho-1] == '\n'){  // Se tiver \n, transformo em \0 e diminuo o tamanho da contagem
		frase1[tamanho-1]= '\0';
		tamanho--;
		
	}
		for(i=0;tem[i]!='\0';i++){ //Ver o tamanho da segunda string
		tamanho2++;
	}
	if(tem[tamanho2-1] == '\n'){  // Se tiver \n, transformo em \0 e diminuo o tamanho da contagem
		tem[tamanho2-1]= '\0';
		tamanho2--;
		
	}
	
	for(i=0;frase1[i]!='\0';i++){  //Percorrer cada letra da string,se achar uma igual,ve se as proximas sao iguais.
		
		if(frase1[i]==tem[0]){
			for(j=0,k=i,cont=0;frase1[k]==tem[j] && tem[j]!='\0' ;k++,j++){ //Enquanto forem iguais, aumenta a contagem.
				cont++;
			}
			if(cont==tamanho2){  // Se a contagem for igual ao tamanho - 1, pois a ultima nao conta, é igual.
				printf("Contem");
				return 0;
			}
		}
	}
	printf("Não contem");
	
}