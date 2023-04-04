#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char can;
	printf("lutfen harfiniz\n");
	scanf("%c",&can);
	
	if ( (can>='A') && (can<='Z'))
	{ printf("kucuk harfimiz %c",tolower(can));
	}
	
	else
	{printf("hatali");
	}
}
