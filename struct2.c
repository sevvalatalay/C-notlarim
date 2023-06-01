#include<stdio.h>
#include<math.h>
struct nokta{
	int x,y;
};

main()
{ 

    struct nokta p1,p2;
	printf("ilk noktaninin koordinatlari\n");
	scanf("%d %d",&p1.x,&p1.y);
	printf("ikinci noktaninin koordinatlari\n");
	scanf("%d %d",&p2.x,&p2.y);
	printf("p1 %d %d p2 %d %d",p1.x,p1.y,p2.x,p2.y);
	int x = pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2);
	printf("sonuc %f",sqrt(double(x)));
	
}
