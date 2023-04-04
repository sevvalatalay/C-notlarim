#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a1,a2,a3;
	printf("lutfen acilar girin\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	
	if (a1+a2+a3 ==180)
	{
	
	if (a1==60&& a2==60&& a3==60)
	{  printf("eskenardir.");
	}
	else if ( a1==a2||a2==a3||a1==a3)
	{printf("ikizkenar");
	}
	else
	printf("cesitkenar.");
}
else
printf("hatali");
}
