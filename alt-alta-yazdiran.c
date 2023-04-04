#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char cumle[100];
	printf("lufrn cumleniz\n");
	gets(cumle);
	
	for (i=0;cumle[i];i++)
	{
		printf("%c\n",cumle[i]);
	}
}
