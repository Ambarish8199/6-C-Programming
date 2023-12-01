#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char str1[100],str2[10] = "aeiou";
	scanf("%s",str1);
	for(i=0;i<strlen(str1);i++)
		{
			for(j=0;j<strlen(str2);j++)
		    {  
		    if(str1[i]	== str2[j])
		    {
		    	printf("%c",str1[i]);
			}
		}
	}
	return 0;
}
