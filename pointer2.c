#include<stdio.h>
void main()
{
	int num,*b;
	
	num=50;
	
	b=&num;
	
	printf("%d",b);
	printf("%d",num);
}
