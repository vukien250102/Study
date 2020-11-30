#include <stdio.h>
#include <conio.h>
int main(){
	int n, x = 0;
	printf("Nhap vao n : ");
	scanf("%d",&n);
	do{
		x = x * 10 + n % 10;
	}while (n/=10); // n=n/10
	printf("So nghich dao la : %d",x);
	getch();
	
}
