#include <stdio.h>


int main(){
	float PT,PC,NJ,PTH,PI,PERCENT,RZJT,RZTP,RZIT,QR;
	
	printf("Escreva os passes tentados, passes completos,numero de jardas,assistencias e passes intercepctados:");
	scanf("%f",&PT);
	scanf("%f",&PC);
	scanf("%f",&NJ);
	scanf("%f",&PTH);
	scanf("%f",&PI);
	
	PERCENT = PC/PT;
	PERCENT=(PERCENT-0.3)/0.2;
	
	if (PERCENT>2.375){
		PERCENT=2.375;
	}
	else if (PERCENT<0){
		PERCENT=0;}
	
	RZJT= NJ/PT;
	RZJT=(RZJT-3)/4;
	
	if (RZJT>2.375){
		RZJT=2.375;
	}
	else if (RZJT<0){
		RZJT=0;}
		
	RZTP= PTH/PT;
	RZTP= RZTP/0.05;
	
		if (RZTP>2.375){
		RZTP=2.375;
	}
	else if (RZTP<0){
		RZTP=0;}
		
	RZIT = PI/PT;
	RZIT= (RZIT-0.095)/0.04;
	
		if (RZIT>2.375){
		RZIT=2.375;
	}
	else if (RZIT<0){
		RZIT=0;}	
		
		QR = ((PERCENT+RZJT+RZTP+RZIT)*100)/6;
		
		printf("O valor do  QB Rating do quarterback eh %.2f",QR);
	
		
	
	
	
}