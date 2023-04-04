#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi,birler,onlar,yuzler;
	printf("sayiniz:\n");
	scanf("%d",&sayi);
	
	birler = sayi%10;
	onlar= sayi%100 /10;
	yuzler= sayi%1000 / 100;
	
	printf("birler basamagi = %d\n ",birler);
	printf("onlar basamagi = %d\n ",onlar);
	printf("yuzler basamagi = %d ",yuzler);
	
	
}
