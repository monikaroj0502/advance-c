#include<stdio.h>
void main()
{
	int a[50][50],b[50][50],i,j,c[50][50],col,row;
	printf("enter how many rows:");
	scanf("%d",&row);
	printf("enter how many columns:");
	scanf("%d",&col);
	printf("enter first matrix");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of two matrices:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
