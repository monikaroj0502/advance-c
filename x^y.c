#include<stdio.h>
void monika( int x, int y)
{
	int cal=1,i;
       for(i=1; i<=y; i++)
       {
       	cal=cal*x;
	   }
	   printf("x rise to y =%d ",cal);
}
void main()
{
	int x,y;
	printf("enter value of x and y");
	scanf("%d%d",&x,&y);
	monika(x,y);
}
	
