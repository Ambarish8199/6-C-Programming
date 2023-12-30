#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char str1[100];
	gets(str1);
	for(i=0;i<strlen(str1);i++)
	{
		for(j=i+1;j<strlen(str1);j++)
	    {
			if(str1[i] == str1[j])
			{
				str1[j] = ' ';
			}
	    }
	}
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i] == ' ')
		{
		   printf("%c",str1[i+1]);
		    
		}
		else
		{
			printf("%c",str1[i]);
		}	
	}
	return 0;
}