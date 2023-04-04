/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char isim[100];
	printf("isminizi giriniz:\n");
	gets(isim);
	printf("%s",isim);
	
} */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char isim[100];
	printf("isminizi giriniz:\n");
	fgets(isim,sizeof(isim),stdin);
	printf("%s",isim);
	
}
