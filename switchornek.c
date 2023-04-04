#include<stdio.h>
#include<stdlib.h>

int main()
{  float a,b;
   char op;
   printf("operator giriniz: ");
   scanf("%c",&op);
   
   printf("iki sayi giriniz:\n");
   scanf("%f%f",&a,&b);
   
   switch(op)
   {
   case '+' : printf("%.2f  +   %.2f  =  %.2f ",a,b,(a+b));
   break;
   
   case '-' : printf("%f  -   %f  =  %f ",a,b,(a-b));
   break;
   
   case '*' : printf("%f  *   %f  =  %f ",a,b,(a*b));
   break;
   
   case '/' : printf("%f  /   %f  =  %f ",a,b,(a/b));
   break;
   
   default: printf("hatali operator girdiniz");
   	
   }
    
   }



