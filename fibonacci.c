#include<stdio.h>
#include<stdlib.h>

void fibonacci( int a)
{
	int ilk =0;
	int ikinci = 1;
	int sonraki;
	int i;
	printf("uretilen sayilar:\n");
	
	for (i =0;i<a;i++)
	{
		if(i<=1)
		{
			sonraki=i;
		}
		else
		{
			sonraki=ilk + ikinci;
			ilk=ikinci;
			ikinci=sonraki;
			
		}
		printf("%d\n",sonraki);
	}
}


int main()
{
	int sayi;
	printf("kac tane fibonacci sayi yazilsin\n");
	scanf("%d",&sayi);
	fibonacci(sayi);
}
