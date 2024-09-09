#include <stdio.h>

int main(){
	
int n1,n2,dv,i,a1,a2;

scanf("%d",&n1);
 scanf("%d",&n2);
 i=1;
 a1=0;
 a2=0;
 while(i<n1){
 if(n1%i==0){
 	a1=a1+i;
 }
 i++;
  }
  i=1;
  while(i<n2){
 if(n2%i==0){
 	a2=a2+i;
 }
 i++;
  }
  if(a2==n1 && a1==n2){
  	printf("Amigos");
  }
  else {
  	printf("Inimigos");
  }


}