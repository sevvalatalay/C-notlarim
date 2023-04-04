#include<stdio.h>
#include<stdlib.h>

void ucgenc(int n)
{
	int i,j,bosluksayisi;
	bosluksayisi=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=bosluksayisi;j++)
		{
			printf(" ");
		}
		bosluksayisi--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("c");
		}
		printf("\n");
	}
}

void ucgenplus(int n)
{
	int bosluksayisi =1;
	int i,j;
	for (i=1;i<=n-1;i++)
	{
		for(j=1;j<=bosluksayisi;j++)
		{
			printf(" ");
		}
		bosluksayisi++;
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
}







int main()
{
	int satir;
	printf("satir sayiniz\n");
	scanf("%d",&satir);
	ucgenc(satir);
	ucgenplus(satir);
}
