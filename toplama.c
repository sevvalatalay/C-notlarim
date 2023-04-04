#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,sonuc=0,i=1;
	printf("lutfen sayi girin\n");
	scanf("%d",&a);
	
	while(i<=a)
	{ 
	 if(i==a)
	 { printf("%d",a);
	 }
	 else
	{
		printf("%d + ",i);
	}
	sonuc=sonuc+i;
	i++;
	
	
	}
	
	printf(" = %d",sonuc);
}
