#include <stdio.h>

int main(){
	
	int num,soma;
	num=0;
	soma=0;
	while(num<=100){
		printf("%d\n",num);
		soma=soma+num;
		num++;
	}
	printf("Valor da soma de todos: %d",soma);
}