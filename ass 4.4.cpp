#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	printf("Nhap canh a=");
	scanf("%d",&a);
	
	printf("Nhap canh b=");
	scanf("%d",&b);
	
	printf("Nhap canh c=");
	scanf("%d",&c);
	
	float C = a + b + c;
	printf("Chu vi tam giac: C=%f",C);

	float S = sqrt ((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
	printf("Dien tich tam giac la: S=%f",S);

}
