#include<stdio.h>
main()
{
    int i;
    int a[5] = {1,2,3,4,5};
   
   for (i=4;i>=0;i--)
   {
    printf("a[%d] = %d\n",i+1,a[i]);

    }
}