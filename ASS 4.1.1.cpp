#include<stdio.h>
#include<conio.h>
#define MAX 100
int nhapmang(int a[], int &n);
int xuatmang(int a[], int n);
int LeCuoi(int a[], int n);
int main()
{
	int a[MAX],n;
	nhapmang(a,n);
	printf("\nNoi dung cua mang");
	xuatmang(a,n);
	if(LeCuoi(a,n)==-1)
		printf("\nMang khong co so le");
	else
		printf("\nGia tri le cuoi cung : %d",LeCuoi(a,n));
	getch();
}
int nhapmang(int a[], int &n)
{
	do
	{
		printf("\nSo phan tu trong mang ");
		scanf("%d",&n);
	}while(n<=0 && n>100);
	for(int i=0 ; i<n ; i++ )
	{
		printf("\nSo phan tu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
}
int xuatmang(int a[], int n)
{
	for(int i=0 ; i<n ; i++ )
		printf("%4d",a[i]);
}
int XuatLe(int a[],int n)
{
	int i;
	for( i=0 ; i<n ; i++ )
		if(a[i]==1)
			return a[i];
	return -1;
}
int LeCuoi(int a[], int n)
{
     for(int i=n-1 ; i<n ; i-- )
           if( a[i]%2!=0)
           {
                return a[i];           
                break;           
           }
      return -1; 
}
