#include <stdio.h>
int main(){
	int i, n;
	int x = 1;
	printf("Nhap n=");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		x = x*i;
	}
	printf("%d! = %d\n",n,x);
}
