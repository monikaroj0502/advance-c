#include<stdio.h>
 int y=7;
 void main()
{
	int x=5,y,z;
	y=++x;
	z=x++;
	
	printf("y=%d",y);
	printf("\nx=%d",x);
	printf("\nz=%d",z);
	
}
