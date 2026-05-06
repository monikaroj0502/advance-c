#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50];
	int a,i,cnt=0;
	printf("1:palindrom or not\n");
	printf("2:which string is greater\n");
	printf("3:string is equal or not\n");
	printf("4:count vowels\n");
	printf("5: concatinate string\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			{
				printf("enter string:");
				scanf("%s",s1);
				
				strcpy(s2,s1);
				strrev(s1);
				
				if(strcmp(s1,s2)==0)
				printf("string is palindrom");
				else 
				printf("string is not palindrom");
				
				break;
			}
		case 2:
			{
				printf("enter s1:");
				scanf("%s",s1);
				printf("enter s2:");
				scanf("%s",s2);
				
				if(strcmp(s1,s2)>0)
				printf("s1 is greater");
				else 
				printf("s2 is greater");
				
				break;
			}
		case 3:
			{
				printf("enter s1:");
			    scanf("%s",s1);
				printf("enter s2:");
				scanf("%s",s2);
				
				if(strcmp(s1,s2)==0)
				printf("strings are equal");
				else 
				printf("strings are not equal");
				
				break;
			}
		case 4:
			{
				printf("enter string:");
				scanf("%s",s1);
				
				for(i=0; s1[i]!='\0'; i++)
				{
					if (s1[i]=='a' || s1[i]=='A' ||
					    s1[i]=='e' || s1[i]=='E' || 
						s1[i]=='i' || s1[i]=='I' ||
						s1[i]=='o' || s1[i]=='O' || 
						s1[i]=='u' || s1[i]=='U' )
						{
							cnt++;
						}
				}
				printf("total vowels=%d",cnt);
				break;
			}
		case 5:
			{
				printf("enter s1:");
			    scanf("%s",s1);
				
				printf("enter s2:");
				scanf("%s",s2);
				
				strcat(s1,s2);
				printf("concatenate string=%s",s1);
				
				break;
			}
			
	}
	
	
	
}


