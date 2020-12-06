#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	float s=0;
	do{
		printf("Nhap n = 1000");
		scanf("%d",&n);
	}
	while ( n<= 0);
	
	for(i=1; i<=n; i++){
		s+=1/(float)i;
	}
	printf("s=%f",s);
}
