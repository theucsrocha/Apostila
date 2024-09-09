#include <stdio.h>

int main(){

int n,j,i;
float s,prod;
s=1;
scanf("%d",&n);

for(j=2;j<=n;j++){
	
	prod=j;
	for(i=1;i<j;i++){
		prod*=j;
	}
	s=s+(1/prod);

}
printf("%f",s);
}