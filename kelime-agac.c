#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i=0,j;
	char kelime[100];
	printf("lutfen kelimeniz\n");
	gets(kelime);
	
	while (i<strlen(kelime))
	{   
	    j=0;
		while(j<=i)
		{
		printf("%c ",kelime[j]);
		j++;	
		}
		i++;
		printf("\n");
	}
	
}
