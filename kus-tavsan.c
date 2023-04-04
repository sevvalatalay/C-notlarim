#include<stdio.h>
#include <stdlib.h>
#define TAVHIZ 0.038
#define KUSHIZ 0.012
int main()
{
	float tavsan=1042;
	float kus=2272;
	int yil;
	
	while(tavsan<kus)
	{ tavsan+=tavsan*TAVHIZ;
	kus +=kus*KUSHIZ;
	yil++;
	
	}
	printf("%d . yilda gecer",yil);
}
