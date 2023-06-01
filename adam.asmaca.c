#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

main()
{
	char shr[5][20]={"Antalya","Van","Bursa","Ankara"};
	int rs;
	char hrf;
	srand(time(NULL));
	rs=rand()%4;
	printf("%s ",shr[rs]);
	char tshr[strlen(shr[rs])];
	for ( int i =0 ; i<strlen(shr[rs]);i++)
	{
		tshr[i]='-';
	}
	puts(tshr);
	
	do{
		printf("bir karakter giriniz\n");
		scanf("%c",&hrf);
		for( int i =0;i<strlen(shr[rs]);i++)
		{
			if(shr[rs][i]==hrf)
			{
				tshr[i]=hrf;
			}
		}
	puts(tshr);
	} while(strcmp(tshr,shr[rs])!=0);
}
