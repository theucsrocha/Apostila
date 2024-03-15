#include <stdio.h>

int main(){
	
int num;

printf("Digite um numero qualquer e direi se ele é positivo ou negativo:");
scanf("%d",&num);

if (num >= 0)
{printf("O seu numero é positivo");
}
else
{printf("Seu numero é negativo");
}
}