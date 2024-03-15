
#include <stdio.h>

int main(){

int cem,cinquenta,vinte,dez,cinco,dois,um,valor;

printf("Seja bem vindo ao caixa eletronico para saque!");
printf("Por favor, digite o valor que deseja efetuar o saque:\n");
scanf("%d",&valor);

cem = valor/100;
cinquenta = (valor%100)/50;
vinte = (valor%100%50)/20;
dez = (valor%100%50%20)/10;
cinco = (valor%100%50%20%10)/5;
dois = (valor%100%50%20%10%5)/2;
um = (valor%100%50%20%10%5%2)/1;
printf("Sera a quantidade de notas que voce recebera é: \n");
printf("Quantidade de notas no valor 100: %d\n",cem);
printf("Quantidade de notas no valor 50: %d\n",cinquenta);
printf("Quantidade de notas no valor de 20: %d\n",vinte);
printf("Quantidade de notas no valor de 10: %d\n",dez);
printf("Quantidade de notas no valor de 5: %d\n",cinco);
printf("Quantidade de notas no valor de 2: %d\n",dois);
printf("Quantidade de notas no valor de 1: %d\n",um);

}