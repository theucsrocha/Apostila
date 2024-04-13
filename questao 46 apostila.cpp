#include <stdio.h>

int main(){
	int a,b,cont,resto;
	cont=0;
	scanf("%d",&a);
	scanf("%d",&b);
	
	while(a-b>0){
		a=a-b;
		cont++;	
		
	}

if (resto<0){
	resto=resto*-1;
}
printf("Resto %d",resto);
}