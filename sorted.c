#include<stdio.h>
#include<string.h>
void main()
{
	char s1[3][10],ch[10];
	int i,j;
	printf("enter string:");
	for(i=0; i<3; i++)
	{
		gets(s1[1]);
	}
	for(i=0; i,3; i++)
	{
		for(j=i+1; j<3; j++)
		{
			if(strcmp(s1[i],s1[j]>0))
			{
				strcpy(ch,s1[i]);
				strcpy(s1[i],s1[j]);
				strcpy(s1[j],ch);
			}

		}
	}
	printf("sorted strings:");
	for(i=0; i<3; i++)
	{
		puts(s1[i]);
	}
	
	
}
