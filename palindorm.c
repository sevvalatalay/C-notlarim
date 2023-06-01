#include<stdio.h>
#include<string.h>
main()
{
	int ks;
	char a[15];
	printf("dizinizi giriniz\n");
	gets(a);
	ks=strlen(a);
	int j=ks-1;
	int p=0;
	for (int i =0;i <ks;i++)
	{
		if ( a[i]!=a[j])
		{
				p=1;
				
		}
		j--;
	}
	if(p==0)
	{
		printf("palindrom");}
	
	else
	{
		printf("degil");
	}
}
