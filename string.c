#include<stdio.h>
#include<string.h>
main()
{
	char ad[100];
	char b[20];
	gets(ad);
	gets(b);
	printf("karakter sayiniz %d",strlen(ad));
	if (strcmp(b,ad)==0)
	{
	printf("ayni");}
	else
	{
	printf("farkli");}
	
	
}
