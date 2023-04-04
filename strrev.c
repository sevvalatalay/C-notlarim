#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char sevo[100];
	printf("adiniz?:\n");
	scanf("%s",sevo);
	
	printf("adiniz:%s\n",sevo);
	printf("adinizin tersi:%s",strrev(sevo));
}
