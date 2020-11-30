#include <stdio.h>
#include <math.h>
int main(){
	float a; 
	int b, i;
	
	printf("Nhap so tien ban dau : ");
	scanf("%f",&a);
	
	printf("Nhap so nam : ");
	scanf("%d",&b);
	
	for(i = 0; i < b; i++)
	{
		a = a + a * 0.08; 
	}
	printf("Tong tien sau %d nam la %f\b ",b,a);
	
}
