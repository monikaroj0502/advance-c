#include<stdio.h>
void main()
{
	int i,n,total=0;
	float per;
	 
	   printf("enter limit:");
	   scanf("%d",&n);
	int a[n];
	
	  for(i=0; i<n; i++)
	    {
	    	printf("\nenter marks:");
	    	scanf("%d",&a[i]);
		}
	   for(i=0; i<n; i++)
	     {
	     	total=total+a[i];
		 }
		per=total/n;
		 printf("total=%d",total);
		 printf("\npercentage=%f",per);
}
