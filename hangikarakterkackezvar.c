#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c;
	int sayma[26]={0};
	int sev,karakter,i;
	karakter=0;
	printf("lutfen bir text yazip ve enter basin\n");
	while((c=getchar())!='\n')
	{
		sev=c-'a';
		if(sev>=0 && sev<26)
		{
			sayma[sev]++;
		}
		else
		{
			karakter ++;
		}
	}
	printf("girdiginiz text %d karakrer icerir \n",karakter);
	for(i=0;i<26;i++)
	{
		printf("%d kez %c\n",sayma[i],'a'+i);
	}
	return 0;
}
