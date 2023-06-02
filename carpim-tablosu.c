#include<stdio.h>
#include<stdlib.h>
#define SEV 10
int main()
{
	int i,j;
	printf("%4c",'I');
	for(j=1;j<=SEV;j++)
	{
		printf("%4d",j);
	}
	printf("\n");
	printf("-------");
	for(i=0;i<SEV;i++)
	{
		printf("----");
	}

   printf("\n");

	
	for(i=1;i<=SEV;i++)
	{
		printf("%4d",i);
		for(j=1;j<=SEV;j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}
	
	
	return 0;
}
