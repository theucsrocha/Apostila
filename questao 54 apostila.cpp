#include <stdio.h>


int main(){
	
	int num,a,b,c,nv;
	
	scanf("%d",&num);
	a=1;
	b=2;
	c=3;
	while(a*b*c<=num){
		nv=a*b*c;
		a++;
		b++;
		c++;
		if (nv==num){
			printf("Eh triangular!");
			return 0;
	}
		
	}
	
	printf("Nao eh retangular.");}
