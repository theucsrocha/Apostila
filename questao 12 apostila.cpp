#include <stdio.h>
#include <math.h>

int main(){
	
   float V;
   printf("Seja bem vindo ao conversor de velocidade!\n");
   printf("Por favor, digite a velocidade a ser convertida de m/s para KM/h \n :");
   scanf("%f",&V);
   V = V*3.6;
   printf("Sua velocidade é %.1f",V);
}