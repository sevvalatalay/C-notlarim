#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	char op;
	printf("hangi islem?\n");
	scanf("%c",&op);
	printf("iki sayi girin\n");
	scanf("%d%d",&a,&b);
	
	if ( a==0 || b==0)
	{
		printf("islem yapilamaz");
	}
	
	else
	{ 
	printf("1/%d  %c  1/%d\n",a,op,b);
	switch(op)
	{ case '+':
	{
			printf("%d/%d ",a+b,a*b);
		
	}break;
	case '-':
		{printf("%d/%d",a-b,a*b);
		} break;
		default :
		{printf("hatali");
		}
	}
	
	
	}
	
	
}
