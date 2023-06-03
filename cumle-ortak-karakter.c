#include<stdio.h>
#include<stdlib.h>
#define max 40

void boy(char tab[max], int *a)
{
	int i;
	for(i=0;tab[i]!='\0';i++);
	*a=i;
	
}

void ortak_harf(char tab[max],char sevo[max], int *t)
{
	int i,j,kelime1,kelime2;
	*t=0;
	boy(tab,&kelime1);
	boy(sevo,&kelime2);
	
	for(i=0;i<kelime1;i++)
	{
		for(j=0;j<kelime2;j++)
		{
			if(tab[i]==sevo[j])
			{
				*t=*t+1;
			}
		}
	}
}


int main()
{
	int i=0;
	int a,r;
	char cumle[max],tab[max];
	printf("lutfen cumle ya da kelime giriniz\n");
	do
	{
		scanf("%c",&cumle[i]);
		i++;
		
	}
	while(cumle[i-1]!='\n');
	cumle[i-1]='\0';
	boy(cumle,&a);
	printf("dizinin boyu %d\n",a);
	printf("lutfen 2 kelime girin\n");
	scanf("%s %s",&cumle,&tab);
	ortak_harf(cumle,tab,&r);
	printf("%s ve %s %d kadar ortak karaktere sahip\n",cumle,tab,r);
	return 0;
}
