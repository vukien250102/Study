#include <stdio.h>
#include <string.h>
void upperCase(){
	printf("ENTER CASE\n:");
	printf("UPPER CASE\n:");
}
int main(){
	char s[50];
	printf("ENTER CASE:");
	scanf("%s",s);
	for (int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
	}
	upperCase;
	printf("UPPER CASE: %s",s);
	 
}
