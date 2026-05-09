#include<stdio.h>
void main()
{
	int x,*y,**z;
	
	x=50;
	y=&x;
	z=&y;
printf("%d",z);
}
