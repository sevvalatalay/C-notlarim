#include<stdio.h>
#include<stdlib.h>

void floyd(int a)
{
	int i=1;
	int j;
	int b=1;
	while(i<=a)
	{
		j=1;
		while(j<=i)
		{
			printf("%d ",b);
			b++;
			j++;
		}
		printf("\n");
		i++;
	}
}

int main()
{
	int satir;
	printf("lutfen satir sayiniz\n");
	scanf("%d",&satir);
	floyd(satir);
	return 0;
}
