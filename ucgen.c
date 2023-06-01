#include<stdio.h>
main()
{
	int i;
	char a[100];
	printf("giriniz\n");
	gets(a);
	puts(a);
	
	for(i=0;a[i]!='\0';i++);
	printf("%d\n",i);
	
	for (int sa=0;sa<i;sa++)
	{
		for(int su=0;su<=sa;su++)
		{printf("%c",a[su]);
		}
		printf("\n");
	}
}
