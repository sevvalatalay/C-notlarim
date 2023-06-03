#include<stdio.h>
#include<stdlib.h>

void bolum(int *n)
{
	if(*n%2==0)
	{
		printf("cifttir\n");
	}
		if(*n%3==0)
	{
		printf("3un kati\n");
	}
		if((*n%3==0) && (*n%2==0))
	{
		printf("6nin kati\n");
	}
}





int main()
{
	int sayi;
	printf("lutfen sayiniz\n");
	scanf("%d",&sayi);
	bolum(&sayi);
	return 0;
}
