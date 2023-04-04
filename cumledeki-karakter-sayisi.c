#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int i=1;
	char cumle[100];
	printf("cumleniz\n");
	gets(cumle);
	
	while(cumle[i])
	{
		i++;
	}
	
	printf("karakter sayiniz %d",i);
}
