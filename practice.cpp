#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	printf("nhap a=");
	scanf("%d",&a);
	
	printf("nhap b=");
	scanf("%d",&b);
	
	printf("nhap c=");
	scanf("%d",&c);
	
	if(a>0 && b>0&& c>0&&a<b+c && b<a+c && c<a+b){
		printf("day la 3 canh cua tam giac");
		int q = a+b+c;
		float p= (float)q/2;
		float s = sqrt(q*(q-a)*(q-b)*(q-c));
		printf("dien tich: %f",s);
	}else{
		printf("ko la 3 canh cua tam giac: ");
	}
	
}
