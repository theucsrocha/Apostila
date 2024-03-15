

#include <stdio.h>

int main (){
	int seq1,seq2,a1,a2,m1,m2,d1,d2;
	
	printf("Por favor, escrevra duas sequencias de numeros em ate 3 algarismos, que ira representar respectivamente anos,meses e dias de vida. Cada sequencia representara uma pessoa.Apos isso, direi quem é mais velha");
	scanf("%d",&seq1);
	scanf("%d",&seq2);
	
	a1 = seq1/100;
	a2 = seq2/100;
	
	m1= seq1/10%10;
	m2= seq2/10%10;
	
	d1= seq1%10;
	d2=seq2%10;
	
	if (seq1<=999 && seq2<=999){
	
	if (a1>a2){
		printf("A primeira pessoa eh mais velha");
	}
	
	else if (m1>m2){
		printf("A primeira pessoa eh mais velha");
	}
	else if (d1>d2){
		printf("A primeira pessoa eh mais velha");
	}
	else {
		printf("A segunda pessoa eh mais velha");
	}
}
else {
	printf("Numero invalido");
}
	}
	