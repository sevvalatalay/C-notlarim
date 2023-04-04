#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[15]="SEVVAl";
	char b[15]="SEvVAL";
	int sonuc=strncmp(a,b,4);
	
	if(sonuc>0)
	{ printf("a bden buyuk");
	}
	else if(sonuc<0)
	{ printf("b adan buyuk");
	}
	else
	{printf("esitler");
	}
}
