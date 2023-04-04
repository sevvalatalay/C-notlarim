#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char sevo[100];
	printf("yaz:\n");
	fgets(sevo,sizeof(sevo),stdin);
	
	printf("yazdigin:%s\n",sevo);
	printf("yazdiginin minigi:%s",strlwr(sevo));
}
