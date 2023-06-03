#include<stdio.h>
#include<stdlib.h>

int sevval(int n)
{
	if (n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int man(int n)
{
	if(n%3==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}





int main()
{
	int n;
	printf("bir sayi giriniz\n");
	scanf("%d",&n);
	if(sevval(n)==1)
	{
		printf("sayiniz cifttir\n");
	}
	if(man(n)==1)
	{
		printf("sayiniz 3 ile tam bolunur\n");
	}
	
	if(sevval(n)==1 && man(n)==1)
	{
		printf("6ya tam bolunur");
	}
	
	
	return 0;
}
