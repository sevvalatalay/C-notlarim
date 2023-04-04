#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("iki sayi girin\n");
	scanf("%d%d",&a,&b);
	
	if (a==b)
	{ printf("sayilar esit");
	}
	
	if (a!=b)
	{printf("esit degil\n");
	}
	
	if(a<b)
	{ printf("%d buyuk %d",b,a);
	}
	
	if(b<a)
	{ printf("%d buyuk %d",a,b);
	}
	
	if ( a%b==0)
	{ printf("\na b nin katidir");
	}
	
	
	
	
	
	
	
	
}
