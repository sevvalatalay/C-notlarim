#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("A girin\n");
	scanf("%d",&a);
	
	printf("B girin\n");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("A %d\n",a);
	printf("B %d\n",b);
	
}
