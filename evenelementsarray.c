#include<stdio.h>
void main()
{
	int n,i;
	
	   printf("enter limit:");
	   scanf("%d",&n);
	int a[n];
	   printf("enter element:");
	   for(i=0; i<n; i++)
	     {
	     	scanf("%d",&a[i]);
	     }
	    printf("even elements:");
	    for(i=0; i<n; i++)
	     {
	    	if(a[i]%2==0)
	    	{
	    		printf("\t%d",a[i]);
			}
		 }
}
