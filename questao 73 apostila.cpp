#include <stdio.h>

int main(){
	
	
	int numeros[20];
	int cont[20];
	int x,j,quant,moda,media,mediana,copia;
	for(j=0;j<20;j++){
		scanf("%d",&numeros[j]);   //recebendo todos os valores
	}
	j=0;
	while(j<20){
		cont[j]=0;
		j++;
	}
	
	for(j=0;j<20;j++){
		for(x=0;x<20;x++){           //contando um por um, e colocando a quantidade de aparições
			if(numeros[j]==numeros[x]){
				cont[j]++;
			}
		}
	}
	moda=numeros[0];
	quant=cont[0];
	for(j=0;j<20;j++){        //oq tiver a contagem maior, vira a moda
		if(quant<cont[j]){
			moda=numeros[j];
		}
	}
	
	media=0;
	for(j=0;j<20;j++){
		media+=numeros[j];
	}
	media=media/20;
	
for(j=0;j<19;j++){

	for(x=0;x<19;x++){
		if(numeros[x]>numeros[x+1]){
			copia=numeros[x];
			numeros[x]=numeros[x+1];
			numeros[x+1]=copia;
		}
	}
	
	}
	mediana=(numeros[9]+numeros[10])/2;
	printf("MODA: %d\n  Media: %d\n  Mediana: %d\n",moda,media,mediana);
}

	
