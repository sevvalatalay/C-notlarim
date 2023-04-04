#include<stdio.h>
#include<stdlib.h>

#define PI 3.14
#define circleArea(r)  (PI*r*r)

int main()
{ float yaricap,sonuc;
printf("lutfen yaricap?\n");
scanf("%f",&yaricap);
sonuc=circleArea(yaricap);
printf("%f",sonuc);
}
