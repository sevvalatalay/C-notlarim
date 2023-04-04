#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a,b,c;
	int min,max;
	printf("3 adet sayi giriniz:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a;
	
	if( b>max)
	{ 
	max= b;
	}
	if( c>max)
	{ max=c;
	}
	printf("%d maksimumdur\n",max);
	
	min=a;
	
	if( b<min)
	{ 
	min= b;
	}
	if( c<min)
	{ min=c;
	}
	printf("%d minimumdur",min);
}

