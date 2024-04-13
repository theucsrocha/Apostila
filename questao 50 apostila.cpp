#include <stdio.h>


int main(){
	int n,a,b;
	scanf("%d",&n);
	
	a=1;
	b=n-1;
	
	while(a<n && b>=1){
		printf("%d + %d\n",a,b);
		a++;
		b--;
	}
}