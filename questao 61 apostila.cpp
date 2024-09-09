

#include <stdio.h>

int main(){
	int n[20];
int v;	
int x;
x=0;
v=10;
for(x=0;x<20;x++,v+=10){
	n[x]=v;
}
for(x=0;x<20;x++){
	printf("Posicao %d: %d \n",x+1,n[x]);
}

}

