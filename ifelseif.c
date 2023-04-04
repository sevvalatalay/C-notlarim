#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("lutfen sayiniz:\n");
	scanf("%d",&n);
	
	if (  (n%13==0) && (n%17==0))
	{ printf("%d sayisi hem 13 hem 17ye bolunur",n);
	}
	
	else if ( n%13==0) 
	{ printf("%d sayisi 13e bolunur",n);
	}
	
	else if (  n%17==0)
	{ printf("%d sayisi 17ye bolunur",n);
	}
	
	else
	{ printf("%d sayisi 13 ve 17ye bolunmez",n);
	}
	
	
	
}
