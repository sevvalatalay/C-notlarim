#include<stdio.h>
#include<stdlib.h>
int main()
{
	float sure,ucret;
	printf("lutfen sureniz girin\n");
	scanf("%f",&sure);
	
	if (sure <=3)
	{
		ucret=0.25;
	}
	else
	{
		ucret= 0.25 + (sure-3)*0.08;
	}
	
	printf("ucretiniz %.2f",ucret);
}
