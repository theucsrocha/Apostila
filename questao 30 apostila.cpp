#include <stdio.h>


int main(){
	float L,V;
	char tipo;
	
	printf("Por favor, o tipo de combustivel, no qual A significa alcool e G significa gasolina e a quantidade:");
	scanf("%c",&tipo);
	scanf("%f",&L);
if (tipo == 'g' || tipo== 'G' || tipo == 'a' || tipo=='A' ){

if (tipo == 'g' || tipo== 'G'){

	if (L<=25){
		V = (2.70-(2.70*0.03))*L;
		
	}
	else if (L>25){
		V = (2.70-(2.70*0.05))*L;}
	}
	if (tipo == 'a' || tipo=='A'){
	
	if (L<=25){
		V = (1.90-(1.90*0.02))*L;
		
	}
	else if (L>25){
		V = (1.90-(1.90*0.04))*L;
	}
}
	printf("O valor a ser pago de COMBUSTIVEL : %f",V);
    
	
	}
	
	else { printf("Caracter invalido");
	}

}