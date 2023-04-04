#include<stdio.h>
#include<stdlib.h>
int main()
{
	int limit,i=1,satir=0;
	printf("limit giriniz\n");
	scanf("%d",&limit);
	
	while(i<=limit){
	
	if (i%17==0)
	{printf("%d ",i);
	satir++;
	if(satir%10==0)
	{ printf("\n");
	}
	}
	i++;
	
	}
}
