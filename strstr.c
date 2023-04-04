#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char sevo[100]="c dili ogreniom";
	char *sub;
	sub=strstr(sevo,"ogr");
	printf("yazdigin:%s\n",sub);
}
