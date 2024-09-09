#include <stdio.h>

int main(){
	int v[15],copia;
    int j,cont;
    cont=0;
    for(j=0;j<15;j++){
    	printf("Digite um valor qualquer: ");
    	scanf("%d",&v[j]);
	}
	printf("Agora o valor a ser comparado: ");
	scanf("%d",&copia);
	for(j=0;j<15;j++){
		if(copia==v[j]){
			cont++;
		}
	}
	printf("O valor aparece %d vezes",cont);
}