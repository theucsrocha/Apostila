#include <stdio.h>

int main(){
	
	int v[20];
	int maior=0;
	int menor=0;
	int x;
	int j;
	int cont=0;
	for(x=0;x<20;x++){
		scanf("%d",&v[x]);
	}
	for(x=0;x<20;x++){
		for(j=0;j<20;j++){
			if(v[x]>v[j]){
				maior=v[x];
			}
		}
	}
		for(x=0;x<20;x++){
		for(j=0;j<20;j++){
			if(v[x]<v[j]){
				menor=v[x];
				cont++;
			}
			if(cont==19){
				break;
			}
		}
	}
	printf("Maior:%d           Menor:%d",maior,menor);
}