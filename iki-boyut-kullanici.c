#include<stdio.h>
main()
{
    int a[3][3];
    int i,j;
     for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
       
    }
    for(j=0; j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}