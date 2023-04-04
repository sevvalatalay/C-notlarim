#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("iki sayi giriniz\n");
	scanf("%d%d",&a,&b);
	
	if ( (a==0) || (b==0))
	{printf("carpiminiz 0");
	}
	
	else if((a>0) && (b>0) || (a<0) && (b<0))
	{
		printf("carpiminiz pozitif");
	}
	else
	{printf("carpiminiz negatif");
	}
}
