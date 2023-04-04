#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	char a[100];
	char b[100];
	int k;
	
	printf("birinci dizi girin\n");
	scanf("%s",&a);
	
	printf("ikinci dizi girin\n");
	scanf("%s",&b);
	
	printf("kac karakter eklicen??\n");
	scanf("%d",&k);
	
	
	printf("eklenmemis dizin: %s\n",a);
	printf("ekledigimiz: %s",strncat(a,b,k));
}
