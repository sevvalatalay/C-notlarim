#include<stdio.h>
#include<stdlib.h>

int fak(int a)
{
	int i;
	int sonuc=1;
	for(i=1;i<=a;i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}


int main()
{
	int i;
	for (i=1;i<=10;i++)
	{
		printf("%d fak = %d\n ",i ,fak(i));
	}
	return 0;
}
