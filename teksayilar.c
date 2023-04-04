#include<stdio.h>
#include<stdlib.h>

void teksayilar( int a)
{
	int i=0;
	while(i<=a)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
			
		}
		i++;
	}
}

int main()
{
	int sayi;
	printf("lutfen sayiniz\n");
	scanf("%d",&sayi);
	teksayilar(sayi);
	return 0;
}
