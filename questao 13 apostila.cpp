#include <stdio.h>

int main(){
	float sombrapessoa,alturapessoa,alturapredio,sombrapredio;
	
	printf("Seja bem vindo ao calculador de sombra por uma referencia!\n");
	printf("Por favor, digite respectivamente a sua altura, a altura da sua sombra e a altura da sombra do objeto:");
	scanf("%f",&alturapessoa);
	scanf("%f",&sombrapessoa);
	scanf("%f",&sombrapredio);
	
	alturapredio = (sombrapredio*alturapessoa)/sombrapessoa;
	
	printf("A altura do predio eh %f .",alturapredio);
}